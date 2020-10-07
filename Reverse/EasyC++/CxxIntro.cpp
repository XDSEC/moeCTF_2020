

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <sstream>
#include <random>
#include <stdexcept>

#include <memory>

#include <Windows.h>

class IBinrayMap
{
public:
	virtual size_t GetLength() = 0;
	virtual unsigned char GetByte(size_t pos) = 0;
};

template<typename T>
class BinrayMap :public IBinrayMap {
private:
	const T& m_ref;
public:
	BinrayMap(const T& r) :m_ref(r) {}
	virtual size_t GetLength() {
		return sizeof(T);
	}
	virtual unsigned char GetByte(size_t pos) {
		return reinterpret_cast<const unsigned char*>(&m_ref)[pos];
	}
};

template<>
class BinrayMap<std::string> :public IBinrayMap {
private:
	const std::string& m_ref;
public:
	BinrayMap(const  std::string& r) :m_ref(r) {}
	virtual size_t GetLength() {
		return m_ref.size();
	}
	virtual unsigned char GetByte(size_t pos) {
		return m_ref.at(pos);
	}
};


class scattered_sbox {
private:
	std::unique_ptr<unsigned char[]> mem_list[16];
	unsigned char tails[16];
public:
	scattered_sbox() {
		for (size_t i = 0; i < 16; ++i) {
			mem_list[i].reset(new unsigned char[16]);
			std::memset(mem_list[i].get(), 0, sizeof(unsigned char) * 16);
			mem_list[i].get()[0] = 0x49 * (i + 1);
		}
		std::memset(tails, 0, sizeof(unsigned char) * 16);
	}

	unsigned char& operator[](size_t pos) {
		if (pos % 16 == 0)return tails[pos / 16];
		return mem_list[pos / 16].get()[pos % 16];
	}
};

class RC4Crypt {
private:
	scattered_sbox s_box;
	size_t key_pos = 0;
public:
	RC4Crypt() {
	}

	template<typename T, typename ...Args>
	void Init(const T& v, Args... args) {
		BinrayMap<T> binread(v);
		InitKey(&binread);
		Init(args...);
	}

	template<typename T>
	void Init(const T& v) {
		BinrayMap<T> binread(v);
		InitKey(&binread);
	}

	std::string crypt(const std::string& str) {
		std::string ret;
		unsigned char i = 0, j = 0;
		for (const auto& ch : str) {
			unsigned char t = 0;
			++i;
			j += s_box[i];
			std::swap(s_box[i], s_box[j]);
			t = s_box[i] + s_box[j];
			ret.push_back(unsigned char(ch) ^ s_box[t]);
		}
		return ret;
	}

	std::string dump_sbox() {
		std::string ret;
		for (size_t i = 0; i < 256; ++i) {
			ret.push_back(s_box[i]);
		}
		return ret;
	}

private:
	void InitKey(IBinrayMap* in) {
		size_t raw_len = in->GetLength();
		for (size_t i = 0; i < 256; ++i) {
			s_box[i] += in->GetByte(i % raw_len);
		}
	}
};

template<size_t i>
struct number_gen :number_gen<i - 1> {
	unsigned char val;
	number_gen() {
		HMODULE hm = GetModuleHandleW(nullptr);
		// hm will be always the beginning of the .exe file, so this value is a fixed 'M'
		val = number_gen<i - 1>::val + *reinterpret_cast<unsigned char*>(hm);
	}
};

template<>
struct number_gen<0> {
	unsigned char val;
	number_gen() {
		val = 42; // The Answer to the Ultimate Question of Life, the Universe, and Everything
	}
};


// #define GEN_FLAG

template<typename Iter>
std::string to_hex(Iter begin, Iter end, const std::string& prefix = "") {
	std::ostringstream out;
	for (Iter iter = begin; iter != end; ++iter) {
		out << prefix << std::hex << std::setw(2) << std::setfill('0') << (int)((unsigned char)(*iter));
	}
	return out.str();
}

const char flag[] = 
"magic{75b1743a9200a5bc60c70b666eaad2911ddb2292eed4d3d2b7ebc7867b2aa5499949810031756dcdc1dc6500}";

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	RC4Crypt rc4;
	std::mt19937 rand_e;
	try {
		rc4.Init(number_gen<64>(), std::string(u8"moectf{世界で一番幸せな女の子—ＣＨＴＨＯＬＬＹ—}"));
	}
	catch (...) {
		throw std::runtime_error("unable to setup rc4 crypt"); // string hint
	}

	rand_e.seed(68); // Island 68

	std::cout << u8"\n「だからきっと\n  今の私は、誰が何と言おうと\n  世界一幸せな女の子だ」\n\t\t——クトリ・ノタ・セニオリス\n";

	auto process_input = [](std::mt19937& rand_e, const std::string& str)->std::string {
		std::string ret;
		for (auto& ch : str) {
			ret.push_back(ch ^ (rand_e() & 0xFF));
		}
		return ret;
	};

	auto input_convert = [](const std::string& str)->std::string {
		if (str.size() % 2)throw std::runtime_error("invalid input");
		std::string ret;
		for (size_t i = 0; i < str.size(); i += 2) {
			unsigned int val = std::stoi(str.substr(i, 2), nullptr, 16);
			ret.push_back(val);
		}
		return ret;
	};
#ifdef GEN_FLAG
	auto src = rc4.crypt("moectf{CHTHOLLY_the_best__sukasuka_the_best}");
	auto not_proc = to_hex(src.begin(), src.end());
	auto output = process_input(rand_e, src);
	auto ans = to_hex(output.begin(), output.end());
	std::cout << "magic{" << not_proc << "}" << "\n" << ans << "\n";
	return 0;
#endif
	if (!flag[0])std::cout << flag << '\n';
	std::cout << "\nInput your hex-encoded magic spell to help her romance.\n> ";
	std::string input;
	std::cin >> input;
	std::cout << rc4.crypt(process_input(rand_e, input_convert(input))) << '\n';
	return 0;
}
