#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;
// char flag[22] = "moectf{y0u_a2e_G0d~!}";
char flag[22];
char key[22] = {2, 10, 6, 22, 19, 28, 2, 77, 65, 40, 61, 86, 82, 57, 25, 112, 81, 27, 90, 89, 122, 34};
unsigned int x=1594936973,y=1725863406;
void sub_1999()	//depth: 2
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[5]=flag[5]^(2044952363&0xff)^(185558391&0xff);
}
void sub_1998()	//depth: 2
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[9]=flag[9]^(426522239&0xff)^(972097757&0xff);
}
void sub_1997()	//depth: 3
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=~(~flag[1]-631915827%12);
}
void sub_1996()	//depth: 3
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[3]=~(~flag[3]-1436984137%12);
}
void sub_1995()	//depth: 4
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[0]=flag[0]^(616807870&0xff)^(1419862851&0xff);
}
void sub_1994()	//depth: 4
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[9]=flag[9]+122483595%12;
}
void sub_1993()	//depth: 5
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[17]=flag[17]^(2112133414&0xff)^(1049380809&0xff);
}
void sub_1992()	//depth: 5
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[16]=~(~flag[16]-620703212%12);
}
void sub_1991()	//depth: 5
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[3]=flag[3]^(480136812&0xff)^(976401822&0xff);
}
void sub_1990()	//depth: 6
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[12]=~(~flag[12]-155734254%12);
}
void sub_1989()	//depth: 7
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=flag[11]^(1543079346&0xff)^(2034467240&0xff);
}
void sub_1988()	//depth: 8
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[6]=~(~flag[6]-1098120844%12);
}
void sub_1987()	//depth: 8
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[16]=flag[16]^(1428272604&0xff)^(490968759&0xff);
}
void sub_1986()	//depth: 9
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[16]=flag[16]+1926390466%12;
}
void sub_1985()	//depth: 10
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[12]=~(~flag[12]-94124081%12);
}
void sub_1984()	//depth: 10
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[15]=flag[15]+945424092%12;
}
void sub_1983()	//depth: 11
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[16]=flag[16]+1873358669%12;
}
void sub_1982()	//depth: 12
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[9]=flag[9]^(1047492272&0xff)^(156832376&0xff);
}
void sub_1981()	//depth: 12
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[16]=flag[16]^(2021690905&0xff)^(1245448093&0xff);
}
void sub_1980()	//depth: 13
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[9]=flag[9]^(1439931735&0xff)^(1615516370&0xff);
}
void sub_1979()	//depth: 13
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[11]=flag[11]^(1154779281&0xff)^(965135570&0xff);
}
void sub_1978()	//depth: 13
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[15]=flag[15]+591185418%12;
}
void sub_1977()	//depth: 14
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[4]=flag[4]^(1781663599&0xff)^(1719623355&0xff);
}
void sub_1976()	//depth: 14
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[20]=flag[20]^(2036606211&0xff)^(390585204&0xff);
}
void sub_1975()	//depth: 15
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[4]=flag[4]^(1764992844&0xff)^(311180680&0xff);
}
void sub_1974()	//depth: 16
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[21]=flag[21]^(1529517026&0xff)^(429481495&0xff);
}
void sub_1973()	//depth: 16
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[16]=~(~flag[16]-157986415%12);
}
void sub_1972()	//depth: 17
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[11]=~(~flag[11]-634564387%12);
}
void sub_1971()	//depth: 17
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[13]=~(~flag[13]-438308876%12);
}
void sub_1970()	//depth: 18
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[12]=flag[12]^(1841211676&0xff)^(227816310&0xff);
}
void sub_1969()	//depth: 19
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[3]=flag[3]^(1482307177&0xff)^(1503484452&0xff);
}
void sub_1968()	//depth: 19
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[4]=flag[4]^(1614577575&0xff)^(1055185994&0xff);
}
void sub_1967()	//depth: 20
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[8]=flag[8]^(66507916&0xff)^(795175630&0xff);
}
void sub_1966()	//depth: 21
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[7]=flag[7]^(329884366&0xff)^(227689423&0xff);
}
void sub_1965()	//depth: 22
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[0]=flag[0]^(1579475453&0xff)^(476887448&0xff);
}
void sub_1964()	//depth: 22
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[6]=flag[6]^(1224106377&0xff)^(1982293745&0xff);
}
void sub_1963()	//depth: 22
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=flag[20]^(1257444178&0xff)^(1415463891&0xff);
}
void sub_1962()	//depth: 23
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[12]=flag[12]+33333708%12;
}
void sub_1961()	//depth: 23
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[4]=flag[4]^(729478610&0xff)^(1830473365&0xff);
}
void sub_1960()	//depth: 24
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[12]=~(~flag[12]-1323669288%12);
}
void sub_1959()	//depth: 25
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[2]=flag[2]^(295583748&0xff)^(154892941&0xff);
}
void sub_1958()	//depth: 26
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[10]=flag[10]^(1190977855&0xff)^(1729640171&0xff);
}
void sub_1957()	//depth: 26
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[6]=flag[6]^(2121881549&0xff)^(1846985382&0xff);
}
void sub_1956()	//depth: 26
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[14]=flag[14]^(594828149&0xff)^(1012790992&0xff);
}
void sub_1955()	//depth: 27
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=flag[1]^(384240536&0xff)^(397388472&0xff);
}
void sub_1954()	//depth: 27
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[6]=flag[6]^(1491084899&0xff)^(485754885&0xff);
}
void sub_1953()	//depth: 27
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[6],b=1491084899&0xff,c=485754885&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1952()	//depth: 28
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[16]=flag[16]^(1108892995&0xff)^(946064571&0xff);
}
void sub_1951()	//depth: 28
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[6]=flag[6]^(1641686529&0xff)^(347232363&0xff);
}
void sub_1950()	//depth: 29
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[0]=flag[0]+1197657127%12;
}
void sub_1949()	//depth: 29
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[0]=~(~flag[0]+1197657127%12);
}
void sub_1948()	//depth: 29
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[11]=flag[11]^(854974837&0xff)^(1846233333&0xff);
}
void sub_1947()	//depth: 30
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=flag[20]^(397888296&0xff)^(1874960431&0xff);
}
void sub_1946()	//depth: 30
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[16]=flag[16]^(1160366445&0xff)^(165041646&0xff);
}
void sub_1945()	//depth: 30
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[16],b=1160366445&0xff,c=165041646&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1944()	//depth: 31
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[20],b=397888296&0xff,c=1874960431&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1943()	//depth: 31
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[17]=flag[17]^(543578833&0xff)^(1723297802&0xff);
}
void sub_1942()	//depth: 32
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[17],b=543578833&0xff,c=1723297802&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1941()	//depth: 32
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[7]=flag[7]^(413902671&0xff)^(86940814&0xff);
}
void sub_1940()	//depth: 32
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[7],b=413902671&0xff,c=86940814&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1939()	//depth: 33
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[14]=flag[14]^(857546067&0xff)^(1905011798&0xff);
}
void sub_1938()	//depth: 34
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[16]=flag[16]^(812777197&0xff)^(1154943927&0xff);
}
void sub_1937()	//depth: 34
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[16]=~(~flag[16]-1316809148%12);
}
void sub_1936()	//depth: 34
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[16]=~(~flag[16]+1316809148%12);
}
void sub_1935()	//depth: 35
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[4]=flag[4]^(104732846&0xff)^(1780948517&0xff);
}
void sub_1934()	//depth: 35
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[4],b=104732846&0xff,c=1780948517&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1933()	//depth: 36
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[2]=flag[2]^(2102801877&0xff)^(1090832050&0xff);
}
void sub_1932()	//depth: 36
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[5]=flag[5]+1914028367%12;
}
void sub_1931()	//depth: 37
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[20]=flag[20]^(1440701544&0xff)^(1960138556&0xff);
}
void sub_1930()	//depth: 37
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[10]=~(~flag[10]-496269512%12);
}
void sub_1929()	//depth: 38
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[2]=flag[2]^(1408851956&0xff)^(1669362108&0xff);
}
void sub_1928()	//depth: 38
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[14]=flag[14]^(967371507&0xff)^(1248416267&0xff);
}
void sub_1927()	//depth: 39
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[1]=flag[1]+953253236%12;
}
void sub_1926()	//depth: 40
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[0]=~(~flag[0]-1513944408%12);
}
void sub_1925()	//depth: 40
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[12]=~(~flag[12]-778289001%12);
}
void sub_1924()	//depth: 41
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[12]=flag[12]^(1539031393&0xff)^(1357968186&0xff);
}
void sub_1923()	//depth: 41
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[12],b=1539031393&0xff,c=1357968186&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1922()	//depth: 41
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[12]=~(~flag[12]+778289001%12);
}
void sub_1921()	//depth: 42
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[0]=~(~flag[0]+1513944408%12);
}
void sub_1920()	//depth: 43
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[1]=~(~flag[1]+953253236%12);
}
void sub_1919()	//depth: 43
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[16]=~(~flag[16]-335926954%12);
}
void sub_1918()	//depth: 44
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[16]=~(~flag[16]+335926954%12);
}
void sub_1917()	//depth: 44
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[14],b=967371507&0xff,c=1248416267&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1916()	//depth: 45
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[2],b=1408851956&0xff,c=1669362108&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1915()	//depth: 46
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[13]=flag[13]+1399812502%12;
}
void sub_1914()	//depth: 46
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[6]=flag[6]^(1350899754&0xff)^(398832728&0xff);
}
void sub_1913()	//depth: 47
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[6],b=1350899754&0xff,c=398832728&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1912()	//depth: 47
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[21]=~(~flag[21]-950001068%12);
}
void sub_1911()	//depth: 47
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[0]=flag[0]+1935527166%12;
}
void sub_1910()	//depth: 48
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[6]=flag[6]^(670908006&0xff)^(934093247&0xff);
}
void sub_1909()	//depth: 48
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[6],b=670908006&0xff,c=934093247&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1908()	//depth: 48
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[0]=~(~flag[0]+1935527166%12);
}
void sub_1907()	//depth: 49
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[0]=flag[0]^(543534201&0xff)^(957011534&0xff);
}
void sub_1906()	//depth: 49
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[0],b=543534201&0xff,c=957011534&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1905()	//depth: 49
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[21]=~(~flag[21]+950001068%12);
}
void sub_1904()	//depth: 50
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[13]=~(~flag[13]+1399812502%12);
}
void sub_1903()	//depth: 50
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[10]=~(~flag[10]+496269512%12);
}
void sub_1902()	//depth: 50
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[16]=~(~flag[16]-544784060%12);
}
void sub_1901()	//depth: 51
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[5]=flag[5]+1415601361%12;
}
void sub_1900()	//depth: 51
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[6]=flag[6]+1954529674%12;
}
void sub_1899()	//depth: 51
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[6]=~(~flag[6]+1954529674%12);
}
void sub_1898()	//depth: 52
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[8]=flag[8]^(38130503&0xff)^(1390224975&0xff);
}
void sub_1897()	//depth: 53
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[8],b=38130503&0xff,c=1390224975&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1896()	//depth: 53
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[12]=~(~flag[12]-1794627381%12);
}
void sub_1895()	//depth: 54
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[12]=~(~flag[12]+1794627381%12);
}
void sub_1894()	//depth: 55
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[5]=~(~flag[5]+1415601361%12);
}
void sub_1893()	//depth: 56
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[16]=~(~flag[16]+544784060%12);
}
void sub_1892()	//depth: 56
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[8]=flag[8]^(1451839573&0xff)^(617160468&0xff);
}
void sub_1891()	//depth: 56
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[8],b=1451839573&0xff,c=617160468&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1890()	//depth: 57
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[20],b=1440701544&0xff,c=1960138556&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1889()	//depth: 58
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[14]=~(~flag[14]-288773096%12);
}
void sub_1888()	//depth: 59
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[14]=~(~flag[14]+288773096%12);
}
void sub_1887()	//depth: 60
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[5]=~(~flag[5]+1914028367%12);
}
void sub_1886()	//depth: 61
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[2],b=2102801877&0xff,c=1090832050&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1885()	//depth: 62
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[20]=~(~flag[20]-382586403%12);
}
void sub_1884()	//depth: 62
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[20]=~(~flag[20]+382586403%12);
}
void sub_1883()	//depth: 62
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[16],b=812777197&0xff,c=1154943927&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1882()	//depth: 63
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[14],b=857546067&0xff,c=1905011798&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1881()	//depth: 64
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[11],b=854974837&0xff,c=1846233333&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1880()	//depth: 64
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[6],b=1641686529&0xff,c=347232363&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1879()	//depth: 65
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[1]=flag[1]^(867311360&0xff)^(112428830&0xff);
}
void sub_1878()	//depth: 65
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[18]=flag[18]^(2093599000&0xff)^(1027059951&0xff);
}
void sub_1877()	//depth: 65
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[1]=flag[1]^(1926282059&0xff)^(1295398201&0xff);
}
void sub_1876()	//depth: 66
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[6]=flag[6]^(1515844137&0xff)^(31770919&0xff);
}
void sub_1875()	//depth: 66
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[17]=flag[17]^(1435686720&0xff)^(1967788840&0xff);
}
void sub_1874()	//depth: 67
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[17],b=1435686720&0xff,c=1967788840&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1873()	//depth: 67
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[6],b=1515844137&0xff,c=31770919&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1872()	//depth: 67
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[2]=~(~flag[2]-490399132%12);
}
void sub_1871()	//depth: 68
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[10]=~(~flag[10]-1263106487%12);
}
void sub_1870()	//depth: 68
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[14]=flag[14]+560225845%12;
}
void sub_1869()	//depth: 69
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[14]=~(~flag[14]+560225845%12);
}
void sub_1868()	//depth: 70
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[10]=~(~flag[10]+1263106487%12);
}
void sub_1867()	//depth: 71
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[2]=~(~flag[2]+490399132%12);
}
void sub_1866()	//depth: 72
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[19]=flag[19]^(1125454311&0xff)^(798187349&0xff);
}
void sub_1865()	//depth: 72
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[19],b=1125454311&0xff,c=798187349&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1864()	//depth: 72
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[1],b=1926282059&0xff,c=1295398201&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1863()	//depth: 73
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[12]=flag[12]^(1048078366&0xff)^(363729135&0xff);
}
void sub_1862()	//depth: 73
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[12],b=1048078366&0xff,c=363729135&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1861()	//depth: 74
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[5]=~(~flag[5]-513389938%12);
}
void sub_1860()	//depth: 74
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[17]=flag[17]^(152698704&0xff)^(978862322&0xff);
}
void sub_1859()	//depth: 75
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[14]=~(~flag[14]-834060498%12);
}
void sub_1858()	//depth: 75
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[7]=~(~flag[7]-156884278%12);
}
void sub_1857()	//depth: 76
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[7]=~(~flag[7]+156884278%12);
}
void sub_1856()	//depth: 76
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[7]=flag[7]^(831348182&0xff)^(1063547938&0xff);
}
void sub_1855()	//depth: 76
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=flag[15]^(1313113394&0xff)^(708147246&0xff);
}
void sub_1854()	//depth: 77
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[15],b=1313113394&0xff,c=708147246&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1853()	//depth: 77
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[18]=flag[18]^(383121678&0xff)^(361395514&0xff);
}
void sub_1852()	//depth: 77
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[10]=flag[10]+1506379836%12;
}
void sub_1851()	//depth: 78
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[10]=~(~flag[10]+1506379836%12);
}
void sub_1850()	//depth: 78
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[18],b=383121678&0xff,c=361395514&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1849()	//depth: 79
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[18]=flag[18]^(1847782775&0xff)^(1900997172&0xff);
}
void sub_1848()	//depth: 79
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[18],b=1847782775&0xff,c=1900997172&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1847()	//depth: 80
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[6]=~(~flag[6]-258633269%12);
}
void sub_1846()	//depth: 80
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[6]=~(~flag[6]+258633269%12);
}
void sub_1845()	//depth: 80
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[7],b=831348182&0xff,c=1063547938&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1844()	//depth: 81
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[14]=~(~flag[14]+834060498%12);
}
void sub_1843()	//depth: 82
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[3]=flag[3]^(483714618&0xff)^(165462347&0xff);
}
void sub_1842()	//depth: 82
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[3],b=483714618&0xff,c=165462347&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1841()	//depth: 83
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[17],b=152698704&0xff,c=978862322&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1840()	//depth: 84
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[5]=~(~flag[5]+513389938%12);
}
void sub_1839()	//depth: 84
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[18],b=2093599000&0xff,c=1027059951&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1838()	//depth: 84
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[1],b=867311360&0xff,c=112428830&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1837()	//depth: 85
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[16],b=1108892995&0xff,c=946064571&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1836()	//depth: 85
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[20]=flag[20]+491335266%12;
}
void sub_1835()	//depth: 86
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[20]=~(~flag[20]+491335266%12);
}
void sub_1834()	//depth: 86
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[1]=flag[1]^(1060069912&0xff)^(211184984&0xff);
}
void sub_1833()	//depth: 87
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[1],b=1060069912&0xff,c=211184984&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1832()	//depth: 88
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[21]=flag[21]^(1714452650&0xff)^(951817900&0xff);
}
void sub_1831()	//depth: 89
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[21],b=1714452650&0xff,c=951817900&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1830()	//depth: 89
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[1],b=384240536&0xff,c=397388472&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1829()	//depth: 89
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[14],b=594828149&0xff,c=1012790992&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1828()	//depth: 90
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[14]=~(~flag[14]-1129933432%12);
}
void sub_1827()	//depth: 91
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=flag[8]^(1254546565&0xff)^(1494315533&0xff);
}
void sub_1826()	//depth: 91
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[20]=flag[20]^(1838979772&0xff)^(2117681973&0xff);
}
void sub_1825()	//depth: 92
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[0]=flag[0]+1134039665%12;
}
void sub_1824()	//depth: 92
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[0]=~(~flag[0]+1134039665%12);
}
void sub_1823()	//depth: 92
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[19]=flag[19]^(1607904209&0xff)^(1323337406&0xff);
}
void sub_1822()	//depth: 93
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[18]=flag[18]^(667339147&0xff)^(369005894&0xff);
}
void sub_1821()	//depth: 94
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[9]=flag[9]^(1846900265&0xff)^(2043972997&0xff);
}
void sub_1820()	//depth: 94
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[9],b=1846900265&0xff,c=2043972997&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1819()	//depth: 95
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[18],b=667339147&0xff,c=369005894&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1818()	//depth: 95
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[19],b=1607904209&0xff,c=1323337406&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1817()	//depth: 96
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[20]=flag[20]^(1778985825&0xff)^(1513409168&0xff);
}
void sub_1816()	//depth: 97
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[13]=flag[13]+306675235%12;
}
void sub_1815()	//depth: 98
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[13]=~(~flag[13]+306675235%12);
}
void sub_1814()	//depth: 98
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[20],b=1778985825&0xff,c=1513409168&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1813()	//depth: 99
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[8]=~(~flag[8]-1208291551%12);
}
void sub_1812()	//depth: 99
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[8]=~(~flag[8]+1208291551%12);
}
void sub_1811()	//depth: 100
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[12]=flag[12]^(79223332&0xff)^(2055660344&0xff);
}
void sub_1810()	//depth: 101
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[12]=flag[12]^(494955136&0xff)^(2146280886&0xff);
}
void sub_1809()	//depth: 101
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[4]=flag[4]+1995810012%12;
}
void sub_1808()	//depth: 101
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[4]=~(~flag[4]+1995810012%12);
}
void sub_1807()	//depth: 102
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[12],b=494955136&0xff,c=2146280886&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1806()	//depth: 102
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[12],b=79223332&0xff,c=2055660344&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1805()	//depth: 103
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[20],b=1838979772&0xff,c=2117681973&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1804()	//depth: 103
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[8],b=1254546565&0xff,c=1494315533&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1803()	//depth: 103
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[8]=flag[8]+396532906%12;
}
void sub_1802()	//depth: 104
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[8]=~(~flag[8]+396532906%12);
}
void sub_1801()	//depth: 104
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[14]=~(~flag[14]+1129933432%12);
}
void sub_1800()	//depth: 105
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[6],b=2121881549&0xff,c=1846985382&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1799()	//depth: 106
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[10],b=1190977855&0xff,c=1729640171&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1798()	//depth: 106
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[2],b=295583748&0xff,c=154892941&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1797()	//depth: 107
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[3]=flag[3]^(1189544161&0xff)^(740014695&0xff);
}
void sub_1796()	//depth: 107
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[3],b=1189544161&0xff,c=740014695&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1795()	//depth: 108
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[7]=flag[7]+83101795%12;
}
void sub_1794()	//depth: 109
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=~(~flag[7]+83101795%12);
}
void sub_1793()	//depth: 110
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[12]=~(~flag[12]+1323669288%12);
}
void sub_1792()	//depth: 110
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[14]=flag[14]+1721129863%12;
}
void sub_1791()	//depth: 110
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[14]=~(~flag[14]+1721129863%12);
}
void sub_1790()	//depth: 111
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[4],b=729478610&0xff,c=1830473365&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1789()	//depth: 112
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[12]=~(~flag[12]+33333708%12);
}
void sub_1788()	//depth: 112
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[20],b=1257444178&0xff,c=1415463891&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1787()	//depth: 112
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[14]=~(~flag[14]-276280611%12);
}
void sub_1786()	//depth: 113
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[14]=~(~flag[14]+276280611%12);
}
void sub_1785()	//depth: 113
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[11]=~(~flag[11]-500640489%12);
}
void sub_1784()	//depth: 114
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]-1172565964%12);
}
void sub_1783()	//depth: 114
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[8]=~(~flag[8]+1172565964%12);
}
void sub_1782()	//depth: 115
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[11]=~(~flag[11]+500640489%12);
}
void sub_1781()	//depth: 115
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[6],b=1224106377&0xff,c=1982293745&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1780()	//depth: 116
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[0],b=1579475453&0xff,c=476887448&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1779()	//depth: 117
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[7],b=329884366&0xff,c=227689423&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1778()	//depth: 118
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[9]=flag[9]^(1787309179&0xff)^(147101926&0xff);
}
void sub_1777()	//depth: 118
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[14]=flag[14]^(1926215952&0xff)^(280765444&0xff);
}
void sub_1776()	//depth: 119
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[2]=flag[2]^(165405550&0xff)^(1835172227&0xff);
}
void sub_1775()	//depth: 120
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[2],b=165405550&0xff,c=1835172227&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1774()	//depth: 121
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[14],b=1926215952&0xff,c=280765444&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1773()	//depth: 122
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[9],b=1787309179&0xff,c=147101926&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1772()	//depth: 122
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[8],b=66507916&0xff,c=795175630&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1771()	//depth: 123
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[21]=flag[21]^(2104540806&0xff)^(2146661539&0xff);
}
void sub_1770()	//depth: 124
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[0]=flag[0]^(661990603&0xff)^(1657714185&0xff);
}
void sub_1769()	//depth: 124
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[0],b=661990603&0xff,c=1657714185&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1768()	//depth: 125
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[15]=~(~flag[15]-602539263%12);
}
void sub_1767()	//depth: 126
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[15]=~(~flag[15]+602539263%12);
}
void sub_1766()	//depth: 126
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[15]=flag[15]+294285940%12;
}
void sub_1765()	//depth: 127
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[15]=~(~flag[15]+294285940%12);
}
void sub_1764()	//depth: 127
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[21],b=2104540806&0xff,c=2146661539&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1763()	//depth: 128
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]+53924893%12;
}
void sub_1762()	//depth: 129
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[9]=flag[9]^(1350270907&0xff)^(2102055115&0xff);
}
void sub_1761()	//depth: 130
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[9],b=1350270907&0xff,c=2102055115&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1760()	//depth: 131
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[20]=flag[20]^(889208304&0xff)^(1592324798&0xff);
}
void sub_1759()	//depth: 132
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[20],b=889208304&0xff,c=1592324798&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1758()	//depth: 133
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[9]=~(~flag[9]-440350458%12);
}
void sub_1757()	//depth: 133
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[9]=flag[9]^(1247367058&0xff)^(1749742381&0xff);
}
void sub_1756()	//depth: 133
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[9]=~(~flag[9]-1728181810%12);
}
void sub_1755()	//depth: 134
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[1]=flag[1]^(1844768791&0xff)^(801369757&0xff);
}
void sub_1754()	//depth: 135
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[1],b=1844768791&0xff,c=801369757&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1753()	//depth: 135
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[9]=~(~flag[9]+1728181810%12);
}
void sub_1752()	//depth: 135
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[9],b=1247367058&0xff,c=1749742381&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1751()	//depth: 136
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[21]=flag[21]^(592068386&0xff)^(1260968583&0xff);
}
void sub_1750()	//depth: 137
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[8]=flag[8]+84627563%12;
}
void sub_1749()	//depth: 137
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[8]=~(~flag[8]+84627563%12);
}
void sub_1748()	//depth: 137
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[19]=~(~flag[19]-179898616%12);
}
void sub_1747()	//depth: 138
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[19]=~(~flag[19]+179898616%12);
}
void sub_1746()	//depth: 139
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[7]=~(~flag[7]-1571088306%12);
}
void sub_1745()	//depth: 139
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[7]=~(~flag[7]+1571088306%12);
}
void sub_1744()	//depth: 140
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[19]=flag[19]+440050471%12;
}
void sub_1743()	//depth: 141
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[19]=~(~flag[19]+440050471%12);
}
void sub_1742()	//depth: 141
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[21],b=592068386&0xff,c=1260968583&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1741()	//depth: 141
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[9]=~(~flag[9]+440350458%12);
}
void sub_1740()	//depth: 142
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[13]=flag[13]^(148947159&0xff)^(835685544&0xff);
}
void sub_1739()	//depth: 142
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[13],b=148947159&0xff,c=835685544&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1738()	//depth: 142
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[20]=~(~flag[20]+53924893%12);
}
void sub_1737()	//depth: 143
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[5]=flag[5]^(783421673&0xff)^(1623468209&0xff);
}
void sub_1736()	//depth: 143
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[5],b=783421673&0xff,c=1623468209&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1735()	//depth: 143
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[19]=flag[19]^(931278729&0xff)^(1671408284&0xff);
}
void sub_1734()	//depth: 144
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[19],b=931278729&0xff,c=1671408284&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1733()	//depth: 144
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[20]=flag[20]^(1667757167&0xff)^(67558397&0xff);
}
void sub_1732()	//depth: 145
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[16]=flag[16]+885472935%12;
}
void sub_1731()	//depth: 145
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[16]=~(~flag[16]+885472935%12);
}
void sub_1730()	//depth: 146
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[20],b=1667757167&0xff,c=67558397&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1729()	//depth: 146
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[4],b=1614577575&0xff,c=1055185994&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1728()	//depth: 147
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[3],b=1482307177&0xff,c=1503484452&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1727()	//depth: 147
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[21]=flag[21]+1708650050%12;
}
void sub_1726()	//depth: 147
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[21]=~(~flag[21]+1708650050%12);
}
void sub_1725()	//depth: 148
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[12],b=1841211676&0xff,c=227816310&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1724()	//depth: 148
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[13]=flag[13]^(449512465&0xff)^(358497793&0xff);
}
void sub_1723()	//depth: 148
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[11]=~(~flag[11]-1013279896%12);
}
void sub_1722()	//depth: 149
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[15]=flag[15]^(1837413698&0xff)^(923425860&0xff);
}
void sub_1721()	//depth: 149
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[1]=flag[1]+1824848066%12;
}
void sub_1720()	//depth: 150
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[10]=~(~flag[10]-1717852032%12);
}
void sub_1719()	//depth: 151
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[10]=~(~flag[10]+1717852032%12);
}
void sub_1718()	//depth: 152
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[1]=~(~flag[1]+1824848066%12);
}
void sub_1717()	//depth: 152
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[15],b=1837413698&0xff,c=923425860&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1716()	//depth: 153
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[11]=~(~flag[11]+1013279896%12);
}
void sub_1715()	//depth: 154
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[13],b=449512465&0xff,c=358497793&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1714()	//depth: 154
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[17]=flag[17]+1041598546%12;
}
void sub_1713()	//depth: 155
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[18]=flag[18]^(956133861&0xff)^(1747711893&0xff);
}
void sub_1712()	//depth: 155
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[17]=flag[17]+1565821974%12;
}
void sub_1711()	//depth: 155
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[17]=~(~flag[17]+1565821974%12);
}
void sub_1710()	//depth: 156
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[19]=flag[19]^(1503770779&0xff)^(965229764&0xff);
}
void sub_1709()	//depth: 157
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[2]=flag[2]+1715064535%12;
}
void sub_1708()	//depth: 158
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[8]=~(~flag[8]-253571807%12);
}
void sub_1707()	//depth: 158
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[8]=~(~flag[8]+253571807%12);
}
void sub_1706()	//depth: 159
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[2]=~(~flag[2]+1715064535%12);
}
void sub_1705()	//depth: 159
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[19],b=1503770779&0xff,c=965229764&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1704()	//depth: 160
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[18],b=956133861&0xff,c=1747711893&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1703()	//depth: 160
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[17]=~(~flag[17]+1041598546%12);
}
void sub_1702()	//depth: 161
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[19]=flag[19]+616808341%12;
}
void sub_1701()	//depth: 161
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[19]=~(~flag[19]+616808341%12);
}
void sub_1700()	//depth: 162
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[20]=flag[20]^(2100064316&0xff)^(2081856320&0xff);
}
void sub_1699()	//depth: 162
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[20],b=2100064316&0xff,c=2081856320&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1698()	//depth: 162
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[2]=~(~flag[2]-1475374398%12);
}
void sub_1697()	//depth: 163
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[16]=flag[16]^(715494112&0xff)^(1422312988&0xff);
}
void sub_1696()	//depth: 163
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[16],b=715494112&0xff,c=1422312988&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1695()	//depth: 164
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[2]=~(~flag[2]+1475374398%12);
}
void sub_1694()	//depth: 164
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[7]=flag[7]+1252432313%12;
}
void sub_1693()	//depth: 165
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[15]=flag[15]^(901533414&0xff)^(1049196987&0xff);
}
void sub_1692()	//depth: 166
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[9]=flag[9]+1009496045%12;
}
void sub_1691()	//depth: 166
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[9]=~(~flag[9]+1009496045%12);
}
void sub_1690()	//depth: 167
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[15],b=901533414&0xff,c=1049196987&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1689()	//depth: 167
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[18]=~(~flag[18]-2073889633%12);
}
void sub_1688()	//depth: 167
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[18]=~(~flag[18]+2073889633%12);
}
void sub_1687()	//depth: 168
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[7]=~(~flag[7]+1252432313%12);
}
void sub_1686()	//depth: 169
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[13]=~(~flag[13]+438308876%12);
}
void sub_1685()	//depth: 169
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[11]=~(~flag[11]+634564387%12);
}
void sub_1684()	//depth: 170
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[16]=~(~flag[16]+157986415%12);
}
void sub_1683()	//depth: 170
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[14]=flag[14]+461810675%12;
}
void sub_1682()	//depth: 171
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[0]=flag[0]^(318920855&0xff)^(388029771&0xff);
}
void sub_1681()	//depth: 172
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[8]=flag[8]^(795504430&0xff)^(741099576&0xff);
}
void sub_1680()	//depth: 172
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[8],b=795504430&0xff,c=741099576&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1679()	//depth: 172
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[0],b=318920855&0xff,c=388029771&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1678()	//depth: 173
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[13]=~(~flag[13]-1806798617%12);
}
void sub_1677()	//depth: 173
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=flag[1]^(561300483&0xff)^(241796639&0xff);
}
void sub_1676()	//depth: 174
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[1],b=561300483&0xff,c=241796639&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1675()	//depth: 175
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[18]=flag[18]^(493410080&0xff)^(101769795&0xff);
}
void sub_1674()	//depth: 176
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[18],b=493410080&0xff,c=101769795&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1673()	//depth: 176
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[5]=flag[5]^(1513392926&0xff)^(1761556868&0xff);
}
void sub_1672()	//depth: 176
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[5],b=1513392926&0xff,c=1761556868&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1671()	//depth: 177
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[13]=~(~flag[13]+1806798617%12);
}
void sub_1670()	//depth: 177
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[14]=~(~flag[14]+461810675%12);
}
void sub_1669()	//depth: 177
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[21]=flag[21]^(378428767&0xff)^(1916285824&0xff);
}
void sub_1668()	//depth: 178
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[7]=~(~flag[7]-1196401468%12);
}
void sub_1667()	//depth: 179
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[7]=~(~flag[7]+1196401468%12);
}
void sub_1666()	//depth: 179
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[21],b=378428767&0xff,c=1916285824&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1665()	//depth: 179
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[21],b=1529517026&0xff,c=429481495&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1664()	//depth: 180
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[21]=flag[21]^(1189880815&0xff)^(1345548125&0xff);
}
void sub_1663()	//depth: 181
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[21],b=1189880815&0xff,c=1345548125&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1662()	//depth: 181
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[4],b=1764992844&0xff,c=311180680&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1661()	//depth: 182
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]^(579499174&0xff)^(2079061918&0xff);
}
void sub_1660()	//depth: 183
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[0]=~(~flag[0]-2069434346%12);
}
void sub_1659()	//depth: 183
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[0]=~(~flag[0]+2069434346%12);
}
void sub_1658()	//depth: 184
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[20],b=579499174&0xff,c=2079061918&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1657()	//depth: 184
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[2]=~(~flag[2]-372457998%12);
}
void sub_1656()	//depth: 185
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[12]=flag[12]+1030541499%12;
}
void sub_1655()	//depth: 185
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[12]=~(~flag[12]+1030541499%12);
}
void sub_1654()	//depth: 186
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[2]=~(~flag[2]+372457998%12);
}
void sub_1653()	//depth: 186
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[17]=flag[17]^(597952357&0xff)^(732981713&0xff);
}
void sub_1652()	//depth: 187
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[17],b=597952357&0xff,c=732981713&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1651()	//depth: 187
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[0]=flag[0]^(1449166924&0xff)^(2011414753&0xff);
}
void sub_1650()	//depth: 187
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[21]=flag[21]^(397424148&0xff)^(1377596079&0xff);
}
void sub_1649()	//depth: 188
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[21],b=397424148&0xff,c=1377596079&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1648()	//depth: 188
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[6]=flag[6]+334276609%12;
}
void sub_1647()	//depth: 188
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[3]=flag[3]+659156144%12;
}
void sub_1646()	//depth: 189
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[3]=~(~flag[3]+659156144%12);
}
void sub_1645()	//depth: 190
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[6]=~(~flag[6]+334276609%12);
}
void sub_1644()	//depth: 191
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[0],b=1449166924&0xff,c=2011414753&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1643()	//depth: 191
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[20]=flag[20]^(315313915&0xff)^(613705536&0xff);
}
void sub_1642()	//depth: 192
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[20],b=315313915&0xff,c=613705536&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1641()	//depth: 192
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[3]=flag[3]+1754539109%12;
}
void sub_1640()	//depth: 193
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[3]=~(~flag[3]+1754539109%12);
}
void sub_1639()	//depth: 193
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[13]=~(~flag[13]-1424957585%12);
}
void sub_1638()	//depth: 194
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[13]=~(~flag[13]+1424957585%12);
}
void sub_1637()	//depth: 195
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[20],b=2036606211&0xff,c=390585204&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1636()	//depth: 196
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[12]=flag[12]^(1768065261&0xff)^(1254862557&0xff);
}
void sub_1635()	//depth: 196
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[2]=~(~flag[2]-917732357%12);
}
void sub_1634()	//depth: 196
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[2]=~(~flag[2]+917732357%12);
}
void sub_1633()	//depth: 197
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[2]=flag[2]^(304982117&0xff)^(1974266334&0xff);
}
void sub_1632()	//depth: 197
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[2],b=304982117&0xff,c=1974266334&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1631()	//depth: 197
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[20]=flag[20]+1082597188%12;
}
void sub_1630()	//depth: 198
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[20]=~(~flag[20]+1082597188%12);
}
void sub_1629()	//depth: 198
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[12],b=1768065261&0xff,c=1254862557&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1628()	//depth: 198
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[4],b=1781663599&0xff,c=1719623355&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1627()	//depth: 199
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[18]=flag[18]^(1508733811&0xff)^(2126150849&0xff);
}
void sub_1626()	//depth: 199
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[18],b=1508733811&0xff,c=2126150849&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1625()	//depth: 199
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(1579728941&0xff)^(1640494611&0xff);
}
void sub_1624()	//depth: 200
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[11]=flag[11]^(1706425004&0xff)^(889472002&0xff);
}
void sub_1623()	//depth: 200
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[0]=flag[0]^(1482680909&0xff)^(1031685872&0xff);
}
void sub_1622()	//depth: 201
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[15]=~(~flag[15]-1496228222%12);
}
void sub_1621()	//depth: 202
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[9]=flag[9]^(475236070&0xff)^(867583677&0xff);
}
void sub_1620()	//depth: 203
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[21]=flag[21]^(1483718880&0xff)^(1343303629&0xff);
}
void sub_1619()	//depth: 204
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[21],b=1483718880&0xff,c=1343303629&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1618()	//depth: 204
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[9],b=475236070&0xff,c=867583677&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1617()	//depth: 204
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[15]=~(~flag[15]+1496228222%12);
}
void sub_1616()	//depth: 205
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[0],b=1482680909&0xff,c=1031685872&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1615()	//depth: 205
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[11],b=1706425004&0xff,c=889472002&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1614()	//depth: 206
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[21],b=1579728941&0xff,c=1640494611&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1613()	//depth: 206
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[16]=flag[16]^(1566248312&0xff)^(1672182850&0xff);
}
void sub_1612()	//depth: 207
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[16],b=1566248312&0xff,c=1672182850&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1611()	//depth: 207
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=~(~flag[15]+591185418%12);
}
void sub_1610()	//depth: 207
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[11],b=1154779281&0xff,c=965135570&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1609()	//depth: 208
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[3]=flag[3]^(1633657556&0xff)^(340871811&0xff);
}
void sub_1608()	//depth: 209
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[3],b=1633657556&0xff,c=340871811&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1607()	//depth: 209
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[18]=flag[18]^(1063472135&0xff)^(1589528506&0xff);
}
void sub_1606()	//depth: 209
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[18],b=1063472135&0xff,c=1589528506&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1605()	//depth: 210
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[15]=flag[15]+1268290158%12;
}
void sub_1604()	//depth: 211
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[15]=~(~flag[15]+1268290158%12);
}
void sub_1603()	//depth: 212
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[9],b=1439931735&0xff,c=1615516370&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1602()	//depth: 213
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[16],b=2021690905&0xff,c=1245448093&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1601()	//depth: 214
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[9],b=1047492272&0xff,c=156832376&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1600()	//depth: 214
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[16]=~(~flag[16]+1873358669%12);
}
void sub_1599()	//depth: 214
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[15]=~(~flag[15]+945424092%12);
}
void sub_1598()	//depth: 215
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[7]=~(~flag[7]-627377596%12);
}
void sub_1597()	//depth: 215
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[7]=~(~flag[7]+627377596%12);
}
void sub_1596()	//depth: 215
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[3]=flag[3]+1334041746%12;
}
void sub_1595()	//depth: 216
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[3]=~(~flag[3]+1334041746%12);
}
void sub_1594()	//depth: 217
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[12]=~(~flag[12]+94124081%12);
}
void sub_1593()	//depth: 217
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[20]=~(~flag[20]-1362360131%12);
}
void sub_1592()	//depth: 218
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[0]=~(~flag[0]-293793240%12);
}
void sub_1591()	//depth: 218
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[0]=~(~flag[0]+293793240%12);
}
void sub_1590()	//depth: 218
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[12]=flag[12]^(362270448&0xff)^(1481897363&0xff);
}
void sub_1589()	//depth: 219
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[12],b=362270448&0xff,c=1481897363&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1588()	//depth: 220
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[16]=flag[16]+1946563796%12;
}
void sub_1587()	//depth: 220
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[20]=flag[20]^(975738383&0xff)^(1645162847&0xff);
}
void sub_1586()	//depth: 221
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[20],b=975738383&0xff,c=1645162847&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1585()	//depth: 222
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[16]=~(~flag[16]+1946563796%12);
}
void sub_1584()	//depth: 222
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[8]=~(~flag[8]-72987027%12);
}
void sub_1583()	//depth: 223
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[9]=flag[9]^(589692150&0xff)^(1575144745&0xff);
}
void sub_1582()	//depth: 224
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[9],b=589692150&0xff,c=1575144745&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1581()	//depth: 224
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[8]=~(~flag[8]+72987027%12);
}
void sub_1580()	//depth: 225
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[11]=~(~flag[11]-1507440479%12);
}
void sub_1579()	//depth: 225
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[11]=~(~flag[11]+1507440479%12);
}
void sub_1578()	//depth: 225
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[8]=flag[8]^(851196379&0xff)^(1542782435&0xff);
}
void sub_1577()	//depth: 226
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[8],b=851196379&0xff,c=1542782435&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1576()	//depth: 226
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[20]=~(~flag[20]+1362360131%12);
}
void sub_1575()	//depth: 227
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[5]=flag[5]+142103613%12;
}
void sub_1574()	//depth: 228
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[4]=~(~flag[4]-350460773%12);
}
void sub_1573()	//depth: 228
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[5]=flag[5]^(1667109151&0xff)^(916442199&0xff);
}
void sub_1572()	//depth: 229
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[21]=flag[21]+522193943%12;
}
void sub_1571()	//depth: 229
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[2]=flag[2]^(61886448&0xff)^(1663642859&0xff);
}
void sub_1570()	//depth: 230
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[2],b=61886448&0xff,c=1663642859&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1569()	//depth: 230
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[2]=~(~flag[2]-293030158%12);
}
void sub_1568()	//depth: 231
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[2]=~(~flag[2]+293030158%12);
}
void sub_1567()	//depth: 232
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[21]=~(~flag[21]+522193943%12);
}
void sub_1566()	//depth: 233
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[5],b=1667109151&0xff,c=916442199&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1565()	//depth: 233
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[5]=flag[5]^(1675300097&0xff)^(92293555&0xff);
}
void sub_1564()	//depth: 233
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[5],b=1675300097&0xff,c=92293555&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1563()	//depth: 234
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[1]=flag[1]+1463699081%12;
}
void sub_1562()	//depth: 234
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[1]=~(~flag[1]+1463699081%12);
}
void sub_1561()	//depth: 235
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[12]=flag[12]^(1138314538&0xff)^(704975067&0xff);
}
void sub_1560()	//depth: 236
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[12],b=1138314538&0xff,c=704975067&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1559()	//depth: 237
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[20]=flag[20]+728203546%12;
}
void sub_1558()	//depth: 238
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[13]=flag[13]^(2070953954&0xff)^(881747916&0xff);
}
void sub_1557()	//depth: 238
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[13],b=2070953954&0xff,c=881747916&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1556()	//depth: 238
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=~(~flag[20]+728203546%12);
}
void sub_1555()	//depth: 239
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[4]=~(~flag[4]+350460773%12);
}
void sub_1554()	//depth: 239
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[4]=~(~flag[4]-1870516802%12);
}
void sub_1553()	//depth: 240
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[4]=~(~flag[4]+1870516802%12);
}
void sub_1552()	//depth: 241
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[5]=flag[5]+1985738669%12;
}
void sub_1551()	//depth: 242
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[8]=flag[8]^(1698663657&0xff)^(1733122843&0xff);
}
void sub_1550()	//depth: 242
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[5]=flag[5]+166781977%12;
}
void sub_1549()	//depth: 242
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[13]=flag[13]^(1271851874&0xff)^(1833056265&0xff);
}
void sub_1548()	//depth: 243
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[8]=flag[8]+1029283437%12;
}
void sub_1547()	//depth: 243
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=flag[8]+359614353%12;
}
void sub_1546()	//depth: 244
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=~(~flag[8]+359614353%12);
}
void sub_1545()	//depth: 244
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[8]=~(~flag[8]+1029283437%12);
}
void sub_1544()	//depth: 245
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[13],b=1271851874&0xff,c=1833056265&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1543()	//depth: 246
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=~(~flag[15]-995819801%12);
}
void sub_1542()	//depth: 246
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[4]=flag[4]+1604648645%12;
}
void sub_1541()	//depth: 246
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[3]=~(~flag[3]-1350440747%12);
}
void sub_1540()	//depth: 247
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[3]=~(~flag[3]+1350440747%12);
}
void sub_1539()	//depth: 247
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[15]=flag[15]^(1863467644&0xff)^(1930741130&0xff);
}
void sub_1538()	//depth: 247
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[13]=~(~flag[13]-584068803%12);
}
void sub_1537()	//depth: 248
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[13]=~(~flag[13]+584068803%12);
}
void sub_1536()	//depth: 248
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[3]=flag[3]^(428036724&0xff)^(1394609205&0xff);
}
void sub_1535()	//depth: 248
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[3],b=428036724&0xff,c=1394609205&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1534()	//depth: 249
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[2]=flag[2]^(1046939248&0xff)^(862743406&0xff);
}
void sub_1533()	//depth: 249
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=flag[15]^(1986470661&0xff)^(2033756695&0xff);
}
void sub_1532()	//depth: 250
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[15],b=1986470661&0xff,c=2033756695&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1531()	//depth: 250
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[2],b=1046939248&0xff,c=862743406&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1530()	//depth: 250
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[18]=flag[18]^(1987296920&0xff)^(766462939&0xff);
}
void sub_1529()	//depth: 251
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[9]=flag[9]^(592478719&0xff)^(815028971&0xff);
}
void sub_1528()	//depth: 251
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[9],b=592478719&0xff,c=815028971&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1527()	//depth: 252
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[20]=~(~flag[20]-312252899%12);
}
void sub_1526()	//depth: 252
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[20]=~(~flag[20]+312252899%12);
}
void sub_1525()	//depth: 252
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[7]=flag[7]^(1145385336&0xff)^(1243385248&0xff);
}
void sub_1524()	//depth: 253
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[7],b=1145385336&0xff,c=1243385248&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1523()	//depth: 254
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[16]=flag[16]^(880347337&0xff)^(1139160931&0xff);
}
void sub_1522()	//depth: 254
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[16],b=880347337&0xff,c=1139160931&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1521()	//depth: 254
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[18],b=1987296920&0xff,c=766462939&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1520()	//depth: 255
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[16]=flag[16]^(2138131023&0xff)^(769612129&0xff);
}
void sub_1519()	//depth: 255
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]^(1479018359&0xff)^(435713251&0xff);
}
void sub_1518()	//depth: 256
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[20],b=1479018359&0xff,c=435713251&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1517()	//depth: 257
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[16],b=2138131023&0xff,c=769612129&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1516()	//depth: 257
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[15],b=1863467644&0xff,c=1930741130&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1515()	//depth: 258
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[4]=~(~flag[4]+1604648645%12);
}
void sub_1514()	//depth: 258
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[7]=flag[7]^(917101384&0xff)^(1654171534&0xff);
}
void sub_1513()	//depth: 258
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[7],b=917101384&0xff,c=1654171534&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1512()	//depth: 259
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[11]=~(~flag[11]-1563349043%12);
}
void sub_1511()	//depth: 259
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=~(~flag[20]-1981497316%12);
}
void sub_1510()	//depth: 259
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[19]=~(~flag[19]-662802936%12);
}
void sub_1509()	//depth: 260
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[19]=~(~flag[19]-954478760%12);
}
void sub_1508()	//depth: 261
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[16]=flag[16]^(393746274&0xff)^(41900700&0xff);
}
void sub_1507()	//depth: 262
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[16],b=393746274&0xff,c=41900700&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1506()	//depth: 263
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=flag[15]^(472195279&0xff)^(2141363042&0xff);
}
void sub_1505()	//depth: 264
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[15],b=472195279&0xff,c=2141363042&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1504()	//depth: 264
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[19]=~(~flag[19]+954478760%12);
}
void sub_1503()	//depth: 264
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[19]=~(~flag[19]+662802936%12);
}
void sub_1502()	//depth: 265
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[1]=flag[1]+1984669807%12;
}
void sub_1501()	//depth: 265
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[1]=~(~flag[1]+1984669807%12);
}
void sub_1500()	//depth: 266
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[4]=flag[4]+1526666350%12;
}
void sub_1499()	//depth: 267
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[7]=flag[7]^(2115430255&0xff)^(2033249754&0xff);
}
void sub_1498()	//depth: 268
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[7],b=2115430255&0xff,c=2033249754&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1497()	//depth: 268
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[4]=~(~flag[4]+1526666350%12);
}
void sub_1496()	//depth: 268
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[20]=~(~flag[20]+1981497316%12);
}
void sub_1495()	//depth: 269
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[11]=~(~flag[11]+1563349043%12);
}
void sub_1494()	//depth: 270
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[15]=~(~flag[15]+995819801%12);
}
void sub_1493()	//depth: 270
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[3]=flag[3]^(1984523266&0xff)^(1214986230&0xff);
}
void sub_1492()	//depth: 270
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[10]=flag[10]+795049659%12;
}
void sub_1491()	//depth: 271
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[10]=~(~flag[10]+795049659%12);
}
void sub_1490()	//depth: 272
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[2]=flag[2]+379496039%12;
}
void sub_1489()	//depth: 272
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[2]=~(~flag[2]+379496039%12);
}
void sub_1488()	//depth: 273
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[3],b=1984523266&0xff,c=1214986230&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1487()	//depth: 273
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[9]=~(~flag[9]-1291857572%12);
}
void sub_1486()	//depth: 273
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[14]=flag[14]+1739304714%12;
}
void sub_1485()	//depth: 274
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[3]=flag[3]+392182422%12;
}
void sub_1484()	//depth: 274
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[14]=flag[14]^(740599381&0xff)^(676056587&0xff);
}
void sub_1483()	//depth: 275
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[20]=~(~flag[20]-841917454%12);
}
void sub_1482()	//depth: 276
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[20]=~(~flag[20]+841917454%12);
}
void sub_1481()	//depth: 277
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[8]=flag[8]+308436279%12;
}
void sub_1480()	//depth: 278
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]+308436279%12);
}
void sub_1479()	//depth: 278
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[9]=~(~flag[9]-671725912%12);
}
void sub_1478()	//depth: 278
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[17]=flag[17]^(212310422&0xff)^(224874309&0xff);
}
void sub_1477()	//depth: 279
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[17],b=212310422&0xff,c=224874309&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1476()	//depth: 280
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[21]=flag[21]^(765269864&0xff)^(314254887&0xff);
}
void sub_1475()	//depth: 280
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[21],b=765269864&0xff,c=314254887&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1474()	//depth: 280
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[9]=~(~flag[9]+671725912%12);
}
void sub_1473()	//depth: 281
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[12]=~(~flag[12]-1643809147%12);
}
void sub_1472()	//depth: 281
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[12]=~(~flag[12]+1643809147%12);
}
void sub_1471()	//depth: 282
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[6]=flag[6]+2043075551%12;
}
void sub_1470()	//depth: 282
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[7]=flag[7]^(1361687652&0xff)^(1408591487&0xff);
}
void sub_1469()	//depth: 282
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[7],b=1361687652&0xff,c=1408591487&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1468()	//depth: 283
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[6]=~(~flag[6]+2043075551%12);
}
void sub_1467()	//depth: 283
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[20]=flag[20]^(1620445086&0xff)^(27180257&0xff);
}
void sub_1466()	//depth: 283
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[14]=~(~flag[14]-1033593300%12);
}
void sub_1465()	//depth: 284
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[14]=~(~flag[14]+1033593300%12);
}
void sub_1464()	//depth: 284
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[20],b=1620445086&0xff,c=27180257&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1463()	//depth: 284
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[0]=flag[0]^(1837013814&0xff)^(461691660&0xff);
}
void sub_1462()	//depth: 285
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[13]=flag[13]+2124699531%12;
}
void sub_1461()	//depth: 285
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[13]=~(~flag[13]+2124699531%12);
}
void sub_1460()	//depth: 286
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[6]=flag[6]^(1955551074&0xff)^(1342475255&0xff);
}
void sub_1459()	//depth: 286
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[6],b=1955551074&0xff,c=1342475255&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1458()	//depth: 287
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[6]=flag[6]^(2059722916&0xff)^(1450231913&0xff);
}
void sub_1457()	//depth: 288
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[6],b=2059722916&0xff,c=1450231913&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1456()	//depth: 289
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[1]=flag[1]+1638067928%12;
}
void sub_1455()	//depth: 290
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[5]=~(~flag[5]-536571851%12);
}
void sub_1454()	//depth: 290
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[5]=~(~flag[5]+536571851%12);
}
void sub_1453()	//depth: 290
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[13]=flag[13]^(496521204&0xff)^(277792831&0xff);
}
void sub_1452()	//depth: 291
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[13],b=496521204&0xff,c=277792831&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1451()	//depth: 292
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[14]=flag[14]^(2006842145&0xff)^(1508871858&0xff);
}
void sub_1450()	//depth: 292
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]^(1543554337&0xff)^(1378014649&0xff);
}
void sub_1449()	//depth: 292
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[13]=flag[13]^(881701477&0xff)^(261428687&0xff);
}
void sub_1448()	//depth: 293
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[20]=flag[20]+1197227481%12;
}
void sub_1447()	//depth: 294
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[20]=~(~flag[20]+1197227481%12);
}
void sub_1446()	//depth: 294
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[13],b=881701477&0xff,c=261428687&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1445()	//depth: 295
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[7]=flag[7]+591153476%12;
}
void sub_1444()	//depth: 295
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[7]=~(~flag[7]+591153476%12);
}
void sub_1443()	//depth: 295
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[20],b=1543554337&0xff,c=1378014649&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1442()	//depth: 296
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[14],b=2006842145&0xff,c=1508871858&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1441()	//depth: 297
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=flag[15]+111651014%12;
}
void sub_1440()	//depth: 297
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[15]=~(~flag[15]+111651014%12);
}
void sub_1439()	//depth: 298
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[11]=flag[11]^(235615207&0xff)^(560099708&0xff);
}
void sub_1438()	//depth: 299
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[11],b=235615207&0xff,c=560099708&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1437()	//depth: 300
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[21]=flag[21]^(1202612861&0xff)^(1806775786&0xff);
}
void sub_1436()	//depth: 300
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[21],b=1202612861&0xff,c=1806775786&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1435()	//depth: 301
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[6]=flag[6]^(889356806&0xff)^(1289600385&0xff);
}
void sub_1434()	//depth: 301
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[6],b=889356806&0xff,c=1289600385&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1433()	//depth: 301
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[12]=flag[12]+1762001631%12;
}
void sub_1432()	//depth: 302
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[19]=flag[19]^(2085614241&0xff)^(907685896&0xff);
}
void sub_1431()	//depth: 303
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[8]=flag[8]+552150283%12;
}
void sub_1430()	//depth: 303
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[7]=flag[7]+134616866%12;
}
void sub_1429()	//depth: 303
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[7]=~(~flag[7]+134616866%12);
}
void sub_1428()	//depth: 304
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[8]=~(~flag[8]+552150283%12);
}
void sub_1427()	//depth: 305
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[11]=~(~flag[11]-53645961%12);
}
void sub_1426()	//depth: 305
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[1]=flag[1]^(1287779128&0xff)^(1506584137&0xff);
}
void sub_1425()	//depth: 305
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[1],b=1287779128&0xff,c=1506584137&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1424()	//depth: 306
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[11]=~(~flag[11]+53645961%12);
}
void sub_1423()	//depth: 306
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[9]=flag[9]^(1982231039&0xff)^(497943882&0xff);
}
void sub_1422()	//depth: 306
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[20]=flag[20]+723203952%12;
}
void sub_1421()	//depth: 307
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[3]=flag[3]^(1158316067&0xff)^(1424524589&0xff);
}
void sub_1420()	//depth: 308
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[10]=~(~flag[10]-637212624%12);
}
void sub_1419()	//depth: 308
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[10]=~(~flag[10]+637212624%12);
}
void sub_1418()	//depth: 309
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[3],b=1158316067&0xff,c=1424524589&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1417()	//depth: 309
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[19]=flag[19]^(1304417452&0xff)^(481613847&0xff);
}
void sub_1416()	//depth: 309
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[19],b=1304417452&0xff,c=481613847&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1415()	//depth: 310
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[19]=flag[19]^(1926477787&0xff)^(1957041722&0xff);
}
void sub_1414()	//depth: 311
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[2]=~(~flag[2]-1912366071%12);
}
void sub_1413()	//depth: 312
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[2]=~(~flag[2]+1912366071%12);
}
void sub_1412()	//depth: 312
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[5]=~(~flag[5]-107521340%12);
}
void sub_1411()	//depth: 313
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[5]=~(~flag[5]+107521340%12);
}
void sub_1410()	//depth: 313
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[19],b=1926477787&0xff,c=1957041722&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1409()	//depth: 313
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[20]=~(~flag[20]+723203952%12);
}
void sub_1408()	//depth: 314
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[9],b=1982231039&0xff,c=497943882&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1407()	//depth: 315
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[19],b=2085614241&0xff,c=907685896&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1406()	//depth: 315
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[12]=~(~flag[12]+1762001631%12);
}
void sub_1405()	//depth: 316
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[1]=~(~flag[1]+1638067928%12);
}
void sub_1404()	//depth: 316
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[6]=~(~flag[6]-363133784%12);
}
void sub_1403()	//depth: 316
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=flag[11]+282583466%12;
}
void sub_1402()	//depth: 317
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=~(~flag[11]+282583466%12);
}
void sub_1401()	//depth: 317
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[6]=~(~flag[6]+363133784%12);
}
void sub_1400()	//depth: 318
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[0],b=1837013814&0xff,c=461691660&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1399()	//depth: 318
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[10]=flag[10]^(630380229&0xff)^(1213706037&0xff);
}
void sub_1398()	//depth: 318
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[10],b=630380229&0xff,c=1213706037&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1397()	//depth: 319
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[17]=~(~flag[17]-543807473%12);
}
void sub_1396()	//depth: 320
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[17]=~(~flag[17]+543807473%12);
}
void sub_1395()	//depth: 321
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[14],b=740599381&0xff,c=676056587&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1394()	//depth: 321
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=~(~flag[3]+392182422%12);
}
void sub_1393()	//depth: 321
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[6]=flag[6]+648342803%12;
}
void sub_1392()	//depth: 322
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[5]=flag[5]+1445819622%12;
}
void sub_1391()	//depth: 322
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[5]=~(~flag[5]+1445819622%12);
}
void sub_1390()	//depth: 323
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[6]=~(~flag[6]+648342803%12);
}
void sub_1389()	//depth: 323
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[14]=~(~flag[14]+1739304714%12);
}
void sub_1388()	//depth: 323
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[9]=~(~flag[9]+1291857572%12);
}
void sub_1387()	//depth: 324
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[5]=~(~flag[5]+166781977%12);
}
void sub_1386()	//depth: 324
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[13]=flag[13]+2131411327%12;
}
void sub_1385()	//depth: 325
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=~(~flag[15]-1739489058%12);
}
void sub_1384()	//depth: 325
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[15]=~(~flag[15]+1739489058%12);
}
void sub_1383()	//depth: 325
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[13]=~(~flag[13]+2131411327%12);
}
void sub_1382()	//depth: 326
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[8],b=1698663657&0xff,c=1733122843&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1381()	//depth: 326
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[5]=~(~flag[5]+1985738669%12);
}
void sub_1380()	//depth: 326
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[5]=~(~flag[5]+142103613%12);
}
void sub_1379()	//depth: 327
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[18]=~(~flag[18]-656562579%12);
}
void sub_1378()	//depth: 327
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[19]=~(~flag[19]-2022446408%12);
}
void sub_1377()	//depth: 328
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[12]=flag[12]+668050918%12;
}
void sub_1376()	//depth: 329
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[12]=~(~flag[12]+668050918%12);
}
void sub_1375()	//depth: 330
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[15]=flag[15]^(1126044665&0xff)^(303963905&0xff);
}
void sub_1374()	//depth: 330
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[15],b=1126044665&0xff,c=303963905&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1373()	//depth: 330
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[19]=~(~flag[19]+2022446408%12);
}
void sub_1372()	//depth: 331
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[18]=~(~flag[18]+656562579%12);
}
void sub_1371()	//depth: 331
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[16]=~(~flag[16]+1926390466%12);
}
void sub_1370()	//depth: 331
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[19]=flag[19]^(1845359020&0xff)^(1969680587&0xff);
}
void sub_1369()	//depth: 332
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[19],b=1845359020&0xff,c=1969680587&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1368()	//depth: 332
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[6]=~(~flag[6]-1286989202%12);
}
void sub_1367()	//depth: 332
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[6]=~(~flag[6]+1286989202%12);
}
void sub_1366()	//depth: 333
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[16],b=1428272604&0xff,c=490968759&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1365()	//depth: 334
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[6]=~(~flag[6]+1098120844%12);
}
void sub_1364()	//depth: 335
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[11],b=1543079346&0xff,c=2034467240&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1363()	//depth: 336
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[12]=~(~flag[12]+155734254%12);
}
void sub_1362()	//depth: 336
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[3],b=480136812&0xff,c=976401822&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1361()	//depth: 336
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[16]=~(~flag[16]+620703212%12);
}
void sub_1360()	//depth: 337
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[3]=flag[3]+291106730%12;
}
void sub_1359()	//depth: 337
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[13]=flag[13]^(1591422470&0xff)^(271643823&0xff);
}
void sub_1358()	//depth: 337
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[13],b=1591422470&0xff,c=271643823&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1357()	//depth: 338
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=~(~flag[3]+291106730%12);
}
void sub_1356()	//depth: 338
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[17],b=2112133414&0xff,c=1049380809&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1355()	//depth: 339
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[17]=flag[17]+24925986%12;
}
void sub_1354()	//depth: 339
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[17]=~(~flag[17]+24925986%12);
}
void sub_1353()	//depth: 340
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[11]=~(~flag[11]-539544714%12);
}
void sub_1352()	//depth: 341
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[9]=flag[9]^(1803552036&0xff)^(204670740&0xff);
}
void sub_1351()	//depth: 341
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[9],b=1803552036&0xff,c=204670740&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1350()	//depth: 342
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[11]=~(~flag[11]+539544714%12);
}
void sub_1349()	//depth: 342
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[9]=~(~flag[9]+122483595%12);
}
void sub_1348()	//depth: 342
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[0],b=616807870&0xff,c=1419862851&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1347()	//depth: 343
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=~(~flag[3]+1436984137%12);
}
void sub_1346()	//depth: 343
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[1]=~(~flag[1]+631915827%12);
}
void sub_1345()	//depth: 344
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[14]=flag[14]+390786272%12;
}
void sub_1344()	//depth: 344
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[14]=~(~flag[14]+390786272%12);
}
void sub_1343()	//depth: 344
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[10]=flag[10]^(1514954902&0xff)^(1118629588&0xff);
}
void sub_1342()	//depth: 345
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[10],b=1514954902&0xff,c=1118629588&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1341()	//depth: 345
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[5]=flag[5]+259828662%12;
}
void sub_1340()	//depth: 345
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[5]=~(~flag[5]+259828662%12);
}
void sub_1339()	//depth: 346
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[2]=flag[2]^(1308848579&0xff)^(1358292286&0xff);
}
void sub_1338()	//depth: 346
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[18]=flag[18]+865620092%12;
}
void sub_1337()	//depth: 347
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[18]=~(~flag[18]+865620092%12);
}
void sub_1336()	//depth: 347
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[17]=~(~flag[17]-418693863%12);
}
void sub_1335()	//depth: 347
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[17]=~(~flag[17]+418693863%12);
}
void sub_1334()	//depth: 348
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[9]=flag[9]^(1850305261&0xff)^(1400389733&0xff);
}
void sub_1333()	//depth: 348
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[13]=flag[13]^(2087072445&0xff)^(232033454&0xff);
}
void sub_1332()	//depth: 348
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[13],b=2087072445&0xff,c=232033454&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1331()	//depth: 349
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[18]=flag[18]+75434471%12;
}
void sub_1330()	//depth: 350
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[18]=~(~flag[18]+75434471%12);
}
void sub_1329()	//depth: 350
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[9],b=1850305261&0xff,c=1400389733&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1328()	//depth: 350
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[2],b=1308848579&0xff,c=1358292286&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1327()	//depth: 351
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[9],b=426522239&0xff,c=972097757&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1326()	//depth: 351
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[17]=flag[17]^(1416184290&0xff)^(1404381230&0xff);
}
void sub_1325()	//depth: 351
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[17],b=1416184290&0xff,c=1404381230&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1324()	//depth: 352
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[5],b=2044952363&0xff,c=185558391&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1323()	//depth: 352
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[7]=flag[7]^(322191596&0xff)^(1028094833&0xff);
	/* put your code here! */
}
void sub_1322()	//depth: 352
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[9]=flag[9]^(1191488079&0xff)^(579302651&0xff);
}
void sub_1321()	//depth: 353
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[9],b=1191488079&0xff,c=579302651&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1320()	//depth: 354
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[7],b=322191596&0xff,c=1028094833&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1319()	//depth: 354
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[0]=flag[0]^(905964846&0xff)^(1339022650&0xff);
	/* put your code here! */
}
void sub_1318()	//depth: 354
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[1]=flag[1]^(615043690&0xff)^(1690900214&0xff);
}
void sub_1317()	//depth: 355
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[1],b=615043690&0xff,c=1690900214&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1316()	//depth: 356
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=flag[15]^(926892063&0xff)^(990878656&0xff);
}
void sub_1315()	//depth: 357
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[15],b=926892063&0xff,c=990878656&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1314()	//depth: 357
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[0],b=905964846&0xff,c=1339022650&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1313()	//depth: 358
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[0]=flag[0]^(2009626870&0xff)^(1178678026&0xff);
	/* put your code here! */
}
void sub_1312()	//depth: 358
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[0],b=2009626870&0xff,c=1178678026&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1311()	//depth: 358
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[5]=~(~flag[5]-1550795555%12);
	/* put your code here! */
    for (int i = 0; i < 21; i++) {
        flag[i] ^= flag[i + 1];
    }
}
void sub_1310()	//depth: 359
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[19]=flag[19]^(750573466&0xff)^(1685729971&0xff);
}
void sub_1309()	//depth: 359
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[19],b=750573466&0xff,c=1685729971&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1308()	//depth: 360
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[5]=~(~flag[5]+1550795555%12);
}
void sub_1307()	//depth: 360
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[12]=flag[12]^(1995406261&0xff)^(138441165&0xff);
	/* put your code here! */
}
void sub_1306()	//depth: 361
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[12],b=1995406261&0xff,c=138441165&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1305()	//depth: 361
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[19]=flag[19]^(2019590360&0xff)^(652368977&0xff);
	/* put your code here! */
}
void sub_1304()	//depth: 362
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[7]=flag[7]^(1967032025&0xff)^(732891161&0xff);
}
void sub_1303()	//depth: 363
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[7],b=1967032025&0xff,c=732891161&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1302()	//depth: 363
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[10]=~(~flag[10]-762107678%12);
}
void sub_1301()	//depth: 363
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[12]=flag[12]^(1247297667&0xff)^(1722837985&0xff);
}
void sub_1300()	//depth: 364
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[12],b=1247297667&0xff,c=1722837985&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1299()	//depth: 364
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[8]=flag[8]+1839205227%12;
}
void sub_1298()	//depth: 365
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[8]=~(~flag[8]+1839205227%12);
}
void sub_1297()	//depth: 366
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[10]=~(~flag[10]+762107678%12);
}
void sub_1296()	//depth: 366
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[7]=flag[7]+191085723%12;
}
void sub_1295()	//depth: 366
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[13]=flag[13]^(591958241&0xff)^(1094234753&0xff);
}
void sub_1294()	//depth: 367
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[13],b=591958241&0xff,c=1094234753&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1293()	//depth: 367
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[7]=~(~flag[7]+191085723%12);
}
void sub_1292()	//depth: 367
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[2]=flag[2]^(1325643674&0xff)^(128801483&0xff);
}
void sub_1291()	//depth: 368
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[5]=flag[5]+1056348612%12;
}
void sub_1290()	//depth: 368
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[5]=~(~flag[5]+1056348612%12);
}
void sub_1289()	//depth: 369
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[0]=~(~flag[0]-164902908%12);
}
void sub_1288()	//depth: 369
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[0]=~(~flag[0]+164902908%12);
}
void sub_1287()	//depth: 370
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[2],b=1325643674&0xff,c=128801483&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1286()	//depth: 371
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[19],b=2019590360&0xff,c=652368977&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1285()	//depth: 371
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[2]=flag[2]+1390924363%12;
	/* put your code here! */
}
void sub_1284()	//depth: 371
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[2]=~(~flag[2]+1390924363%12);
}
void sub_1283()	//depth: 372
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[19]=~(~flag[19]-935572287%12);
	/* put your code here! */
}
void sub_1282()	//depth: 373
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=~(~flag[15]-1701184891%12);
}
void sub_1281()	//depth: 374
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[15]=~(~flag[15]+1701184891%12);
}
void sub_1280()	//depth: 374
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=flag[3]^(438705567&0xff)^(1403297044&0xff);
}
void sub_1279()	//depth: 375
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[18]=~(~flag[18]-1016883306%12);
}
void sub_1278()	//depth: 376
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[4]=flag[4]^(1156543251&0xff)^(880461324&0xff);
}
void sub_1277()	//depth: 376
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[4],b=1156543251&0xff,c=880461324&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1276()	//depth: 377
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[5]=flag[5]+285856173%12;
}
void sub_1275()	//depth: 377
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[9]=~(~flag[9]-1579778744%12);
}
void sub_1274()	//depth: 377
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[2]=flag[2]^(998373738&0xff)^(893116000&0xff);
}
void sub_1273()	//depth: 378
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[2],b=998373738&0xff,c=893116000&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1272()	//depth: 378
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[0]=~(~flag[0]-329363933%12);
}
void sub_1271()	//depth: 378
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[12]=flag[12]^(1022815415&0xff)^(560381826&0xff);
}
void sub_1270()	//depth: 379
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[12],b=1022815415&0xff,c=560381826&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1269()	//depth: 380
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[17]=flag[17]+1047788105%12;
}
void sub_1268()	//depth: 380
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=flag[20]^(53826723&0xff)^(1040304544&0xff);
}
void sub_1267()	//depth: 380
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[20],b=53826723&0xff,c=1040304544&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1266()	//depth: 381
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[10]=flag[10]^(1423534665&0xff)^(422152313&0xff);
}
void sub_1265()	//depth: 381
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[10],b=1423534665&0xff,c=422152313&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1264()	//depth: 381
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[17]=~(~flag[17]+1047788105%12);
}
void sub_1263()	//depth: 382
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[18]=~(~flag[18]-341724985%12);
}
void sub_1262()	//depth: 383
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[0]=flag[0]^(1660050901&0xff)^(506848015&0xff);
}
void sub_1261()	//depth: 384
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[0]=flag[0]^(263687799&0xff)^(136106453&0xff);
}
void sub_1260()	//depth: 385
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[0],b=263687799&0xff,c=136106453&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1259()	//depth: 386
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[11]=flag[11]+191384586%12;
}
void sub_1258()	//depth: 386
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[11]=~(~flag[11]+191384586%12);
}
void sub_1257()	//depth: 387
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[0],b=1660050901&0xff,c=506848015&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1256()	//depth: 388
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[18]=~(~flag[18]+341724985%12);
}
void sub_1255()	//depth: 388
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[10]=flag[10]^(79514199&0xff)^(633467504&0xff);
}
void sub_1254()	//depth: 389
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[11]=~(~flag[11]-922501564%12);
}
void sub_1253()	//depth: 389
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[7]=flag[7]^(584596708&0xff)^(1153772019&0xff);
}
void sub_1252()	//depth: 389
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[4]=flag[4]+238133264%12;
}
void sub_1251()	//depth: 390
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(161723741&0xff)^(1929041670&0xff);
}
void sub_1250()	//depth: 390
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[21],b=161723741&0xff,c=1929041670&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1249()	//depth: 390
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[4]=~(~flag[4]+238133264%12);
}
void sub_1248()	//depth: 391
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[7],b=584596708&0xff,c=1153772019&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1247()	//depth: 391
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[21]=~(~flag[21]-793601871%12);
}
void sub_1246()	//depth: 392
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[21]=~(~flag[21]+793601871%12);
}
void sub_1245()	//depth: 392
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[11]=~(~flag[11]+922501564%12);
}
void sub_1244()	//depth: 393
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(1427086987&0xff)^(2082805086&0xff);
}
void sub_1243()	//depth: 394
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[5]=flag[5]^(116456932&0xff)^(1934963863&0xff);
}
void sub_1242()	//depth: 394
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[8]=~(~flag[8]-1883176850%12);
}
void sub_1241()	//depth: 395
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[12]=flag[12]^(1164575711&0xff)^(771819117&0xff);
}
void sub_1240()	//depth: 396
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[7]=flag[7]^(803440603&0xff)^(1271170200&0xff);
}
void sub_1239()	//depth: 396
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[10]=flag[10]^(1708068637&0xff)^(1751046897&0xff);
}
void sub_1238()	//depth: 396
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[10],b=1708068637&0xff,c=1751046897&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1237()	//depth: 397
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[7],b=803440603&0xff,c=1271170200&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1236()	//depth: 397
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[12],b=1164575711&0xff,c=771819117&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1235()	//depth: 398
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[8]=flag[8]+1824577811%12;
}
void sub_1234()	//depth: 399
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[5]=flag[5]+691295785%12;
}
void sub_1233()	//depth: 399
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[5]=~(~flag[5]+691295785%12);
}
void sub_1232()	//depth: 400
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[8]=~(~flag[8]+1824577811%12);
}
void sub_1231()	//depth: 401
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[17]=flag[17]^(525129309&0xff)^(1865893067&0xff);
}
void sub_1230()	//depth: 401
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[17],b=525129309&0xff,c=1865893067&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1229()	//depth: 402
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]+1883176850%12);
}
void sub_1228()	//depth: 403
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[5],b=116456932&0xff,c=1934963863&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1227()	//depth: 403
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[21],b=1427086987&0xff,c=2082805086&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1226()	//depth: 404
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[10],b=79514199&0xff,c=633467504&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1225()	//depth: 404
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[6]=flag[6]+1270431197%12;
}
void sub_1224()	//depth: 404
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[18]=flag[18]^(40913404&0xff)^(1219651666&0xff);
}
void sub_1223()	//depth: 405
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=flag[7]+272725093%12;
}
void sub_1222()	//depth: 405
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[7]=~(~flag[7]+272725093%12);
}
void sub_1221()	//depth: 406
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[18],b=40913404&0xff,c=1219651666&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1220()	//depth: 406
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[3]=flag[3]^(1084153451&0xff)^(504878094&0xff);
}
void sub_1219()	//depth: 407
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[3],b=1084153451&0xff,c=504878094&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1218()	//depth: 408
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[6]=~(~flag[6]+1270431197%12);
}
void sub_1217()	//depth: 408
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[16]=flag[16]+1160888665%12;
}
void sub_1216()	//depth: 408
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=flag[11]+500665763%12;
}
void sub_1215()	//depth: 409
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[11]=~(~flag[11]+500665763%12);
}
void sub_1214()	//depth: 409
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[16]=~(~flag[16]+1160888665%12);
}
void sub_1213()	//depth: 410
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[4]=flag[4]^(865275205&0xff)^(1640825027&0xff);
}
void sub_1212()	//depth: 410
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[2]=~(~flag[2]-449484547%12);
}
void sub_1211()	//depth: 411
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[2]=~(~flag[2]+449484547%12);
}
void sub_1210()	//depth: 411
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[4]=~(~flag[4]-1576923148%12);
}
void sub_1209()	//depth: 411
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[4]=~(~flag[4]+1576923148%12);
}
void sub_1208()	//depth: 412
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[4],b=865275205&0xff,c=1640825027&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1207()	//depth: 413
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[0]=~(~flag[0]+329363933%12);
}
void sub_1206()	//depth: 413
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[9]=~(~flag[9]-875102263%12);
}
void sub_1205()	//depth: 414
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[10]=flag[10]^(71561240&0xff)^(483130221&0xff);
}
void sub_1204()	//depth: 415
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[4]=flag[4]^(1792145295&0xff)^(1913234201&0xff);
}
void sub_1203()	//depth: 416
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[7]=flag[7]^(1757030605&0xff)^(1264293062&0xff);
}
void sub_1202()	//depth: 416
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=~(~flag[8]-1776782091%12);
}
void sub_1201()	//depth: 416
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=flag[8]+1398795380%12;
}
void sub_1200()	//depth: 417
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[8]=~(~flag[8]+1398795380%12);
}
void sub_1199()	//depth: 417
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[8]=~(~flag[8]+1776782091%12);
}
void sub_1198()	//depth: 417
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[17]=flag[17]+873434498%12;
}
void sub_1197()	//depth: 418
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[14]=flag[14]^(1746294206&0xff)^(614418194&0xff);
}
void sub_1196()	//depth: 418
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[14],b=1746294206&0xff,c=614418194&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1195()	//depth: 419
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[17]=~(~flag[17]+873434498%12);
}
void sub_1194()	//depth: 420
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[7],b=1757030605&0xff,c=1264293062&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1193()	//depth: 420
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[4],b=1792145295&0xff,c=1913234201&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1192()	//depth: 420
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[10],b=71561240&0xff,c=483130221&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1191()	//depth: 421
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[9]=~(~flag[9]+875102263%12);
}
void sub_1190()	//depth: 422
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[9]=~(~flag[9]+1579778744%12);
}
void sub_1189()	//depth: 422
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[18]=flag[18]^(1939256601&0xff)^(694076685&0xff);
}
void sub_1188()	//depth: 422
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[18],b=1939256601&0xff,c=694076685&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1187()	//depth: 423
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[10]=~(~flag[10]-652447489%12);
}
void sub_1186()	//depth: 424
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[10]=~(~flag[10]+652447489%12);
}
void sub_1185()	//depth: 425
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=flag[11]+1385120800%12;
}
void sub_1184()	//depth: 425
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[11]=~(~flag[11]+1385120800%12);
}
void sub_1183()	//depth: 426
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[5]=~(~flag[5]+285856173%12);
}
void sub_1182()	//depth: 426
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[18]=~(~flag[18]+1016883306%12);
}
void sub_1181()	//depth: 427
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[3],b=438705567&0xff,c=1403297044&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1180()	//depth: 427
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[3]=flag[3]+1218820952%12;
}
void sub_1179()	//depth: 427
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[3]=~(~flag[3]+1218820952%12);
}
void sub_1178()	//depth: 428
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[19]=~(~flag[19]+935572287%12);
}
void sub_1177()	//depth: 429
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[1]=flag[1]^(342244592&0xff)^(367108227&0xff);
	/* put your code here! */
}
void sub_1176()	//depth: 429
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[1],b=342244592&0xff,c=367108227&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1175()	//depth: 430
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[17]=~(~flag[17]-1698481342%12);
	/* put your code here! */
}
void sub_1174()	//depth: 431
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[17]=~(~flag[17]+1698481342%12);
}
void sub_1173()	//depth: 432
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[2]=~(~flag[2]-354526001%12);
	/* put your code here! */
}
void sub_1172()	//depth: 432
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[2]=~(~flag[2]+354526001%12);
}
void sub_1171()	//depth: 433
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[14]=flag[14]+2096743485%12;
	/* put your code here! */
}
void sub_1170()	//depth: 433
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[20]=flag[20]^(650666515&0xff)^(220432987&0xff);
}
void sub_1169()	//depth: 434
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[20],b=650666515&0xff,c=220432987&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1168()	//depth: 434
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[14]=~(~flag[14]+2096743485%12);
}
void sub_1167()	//depth: 434
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[14]=flag[14]+1181842092%12;
	/* put your code here! */
}
void sub_1166()	//depth: 435
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[14]=~(~flag[14]+1181842092%12);
}
void sub_1165()	//depth: 436
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[7]=flag[7]^(338770580&0xff)^(432506050&0xff);
	/* put your code here! */
}
void sub_1164()	//depth: 436
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[18]=flag[18]^(489530595&0xff)^(909459038&0xff);
}
void sub_1163()	//depth: 437
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[15]=flag[15]^(2024078924&0xff)^(2074725232&0xff);
}
void sub_1162()	//depth: 438
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[15],b=2024078924&0xff,c=2074725232&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1161()	//depth: 438
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[18],b=489530595&0xff,c=909459038&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1160()	//depth: 439
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[18]=flag[18]^(162115465&0xff)^(1401016316&0xff);
}
void sub_1159()	//depth: 440
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[18],b=162115465&0xff,c=1401016316&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1158()	//depth: 440
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[9]=flag[9]^(1126141529&0xff)^(1820558870&0xff);
}
void sub_1157()	//depth: 440
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[9],b=1126141529&0xff,c=1820558870&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1156()	//depth: 441
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[3]=flag[3]^(1612006227&0xff)^(2106966125&0xff);
}
void sub_1155()	//depth: 442
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[12]=flag[12]^(1354469045&0xff)^(760015786&0xff);
}
void sub_1154()	//depth: 442
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[19]=~(~flag[19]-632993452%12);
}
void sub_1153()	//depth: 442
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[1]=~(~flag[1]-1442348039%12);
}
void sub_1152()	//depth: 443
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=~(~flag[1]+1442348039%12);
}
void sub_1151()	//depth: 443
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[19]=flag[19]^(1289183714&0xff)^(304187913&0xff);
}
void sub_1150()	//depth: 443
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[11]=~(~flag[11]-1040510989%12);
}
void sub_1149()	//depth: 444
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[16]=~(~flag[16]-879173248%12);
}
void sub_1148()	//depth: 444
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[5]=flag[5]^(623676919&0xff)^(644610857&0xff);
}
void sub_1147()	//depth: 444
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[12]=flag[12]^(2068234709&0xff)^(2069037430&0xff);
}
void sub_1146()	//depth: 445
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[21]=flag[21]+1268532179%12;
}
void sub_1145()	//depth: 446
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[19]=flag[19]+503533419%12;
}
void sub_1144()	//depth: 446
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=~(~flag[15]-1703912235%12);
}
void sub_1143()	//depth: 446
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[8]=flag[8]^(384520089&0xff)^(1329944310&0xff);
}
void sub_1142()	//depth: 447
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[16]=~(~flag[16]-1819244498%12);
}
void sub_1141()	//depth: 447
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[16]=~(~flag[16]+1819244498%12);
}
void sub_1140()	//depth: 448
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[14]=~(~flag[14]-1277080175%12);
}
void sub_1139()	//depth: 449
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[14]=~(~flag[14]+1277080175%12);
}
void sub_1138()	//depth: 450
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[7]=~(~flag[7]-1863143937%12);
}
void sub_1137()	//depth: 450
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=~(~flag[7]+1863143937%12);
}
void sub_1136()	//depth: 450
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[12]=flag[12]^(1302966152&0xff)^(2048451391&0xff);
}
void sub_1135()	//depth: 451
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[12],b=1302966152&0xff,c=2048451391&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1134()	//depth: 451
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[8],b=384520089&0xff,c=1329944310&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1133()	//depth: 451
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[12]=flag[12]^(1148609312&0xff)^(1967412008&0xff);
}
void sub_1132()	//depth: 452
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[5]=~(~flag[5]-97158334%12);
}
void sub_1131()	//depth: 452
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[2]=~(~flag[2]-790682965%12);
}
void sub_1130()	//depth: 453
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[2]=~(~flag[2]+790682965%12);
}
void sub_1129()	//depth: 453
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[20]=~(~flag[20]-1257673313%12);
}
void sub_1128()	//depth: 453
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[20]=~(~flag[20]+1257673313%12);
}
void sub_1127()	//depth: 454
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[14]=~(~flag[14]-409431279%12);
}
void sub_1126()	//depth: 455
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[14]=~(~flag[14]+409431279%12);
}
void sub_1125()	//depth: 455
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[12]=~(~flag[12]-484500789%12);
}
void sub_1124()	//depth: 456
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[12]=~(~flag[12]+484500789%12);
}
void sub_1123()	//depth: 456
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]+1512632369%12;
}
void sub_1122()	//depth: 457
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[8]=flag[8]+178205366%12;
}
void sub_1121()	//depth: 457
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[8]=~(~flag[8]+178205366%12);
}
void sub_1120()	//depth: 457
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[5]=flag[5]^(159360289&0xff)^(800327959&0xff);
}
void sub_1119()	//depth: 458
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[5]=~(~flag[5]-916766880%12);
}
void sub_1118()	//depth: 458
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[17]=flag[17]+556613597%12;
}
void sub_1117()	//depth: 458
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[17]=~(~flag[17]+556613597%12);
}
void sub_1116()	//depth: 459
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=flag[15]^(991137166&0xff)^(335019766&0xff);
}
void sub_1115()	//depth: 459
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[0]=flag[0]^(657622810&0xff)^(922935371&0xff);
}
void sub_1114()	//depth: 460
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[13]=flag[13]+1597592903%12;
}
void sub_1113()	//depth: 460
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]^(520329789&0xff)^(946770535&0xff);
}
void sub_1112()	//depth: 461
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[20],b=520329789&0xff,c=946770535&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1111()	//depth: 462
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[13]=~(~flag[13]+1597592903%12);
}
void sub_1110()	//depth: 462
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[0],b=657622810&0xff,c=922935371&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1109()	//depth: 462
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[15],b=991137166&0xff,c=335019766&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1108()	//depth: 463
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[5]=~(~flag[5]+916766880%12);
}
void sub_1107()	//depth: 463
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[5],b=159360289&0xff,c=800327959&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1106()	//depth: 463
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[14]=flag[14]+930358863%12;
}
void sub_1105()	//depth: 464
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[8]=flag[8]+1835834169%12;
}
void sub_1104()	//depth: 464
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[8]=~(~flag[8]+1835834169%12);
}
void sub_1103()	//depth: 464
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[14]=~(~flag[14]+930358863%12);
}
void sub_1102()	//depth: 465
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[20]=~(~flag[20]+1512632369%12);
}
void sub_1101()	//depth: 465
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[5]=~(~flag[5]+97158334%12);
}
void sub_1100()	//depth: 466
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[12],b=1148609312&0xff,c=1967412008&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1099()	//depth: 467
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[10]=flag[10]^(1851350950&0xff)^(430935419&0xff);
}
void sub_1098()	//depth: 468
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[10],b=1851350950&0xff,c=430935419&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1097()	//depth: 468
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[15]=~(~flag[15]+1703912235%12);
}
void sub_1096()	//depth: 468
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[19]=~(~flag[19]+503533419%12);
}
void sub_1095()	//depth: 469
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[21]=~(~flag[21]+1268532179%12);
}
void sub_1094()	//depth: 469
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[0]=flag[0]+1603770528%12;
}
void sub_1093()	//depth: 470
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[13]=flag[13]^(75735669&0xff)^(1668296645&0xff);
}
void sub_1092()	//depth: 470
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[13],b=75735669&0xff,c=1668296645&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1091()	//depth: 471
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[0]=~(~flag[0]+1603770528%12);
}
void sub_1090()	//depth: 471
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[12],b=2068234709&0xff,c=2069037430&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1089()	//depth: 472
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[5],b=623676919&0xff,c=644610857&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1088()	//depth: 472
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[18]=~(~flag[18]-404968208%12);
}
void sub_1087()	//depth: 472
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[21]=~(~flag[21]-1703626100%12);
}
void sub_1086()	//depth: 473
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[21]=~(~flag[21]+1703626100%12);
}
void sub_1085()	//depth: 473
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[18]=~(~flag[18]+404968208%12);
}
void sub_1084()	//depth: 474
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[16]=flag[16]^(1561681838&0xff)^(2035808396&0xff);
}
void sub_1083()	//depth: 475
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[16],b=1561681838&0xff,c=2035808396&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1082()	//depth: 475
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[16]=~(~flag[16]+879173248%12);
}
void sub_1081()	//depth: 476
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[1]=flag[1]^(1820569484&0xff)^(1574845181&0xff);
}
void sub_1080()	//depth: 476
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[15]=flag[15]^(1363620315&0xff)^(649151102&0xff);
}
void sub_1079()	//depth: 477
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[6]=flag[6]^(803645742&0xff)^(89571811&0xff);
}
void sub_1078()	//depth: 478
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[5]=~(~flag[5]-705380846%12);
}
void sub_1077()	//depth: 478
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[5]=~(~flag[5]+705380846%12);
}
void sub_1076()	//depth: 478
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[18]=flag[18]+2087994861%12;
}
void sub_1075()	//depth: 479
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[18]=~(~flag[18]+2087994861%12);
}
void sub_1074()	//depth: 479
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[7]=~(~flag[7]-1311162443%12);
}
void sub_1073()	//depth: 479
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[7]=~(~flag[7]+1311162443%12);
}
void sub_1072()	//depth: 480
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[3]=flag[3]+1287071760%12;
}
void sub_1071()	//depth: 480
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[3]=~(~flag[3]+1287071760%12);
}
void sub_1070()	//depth: 481
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[19]=~(~flag[19]-1117563376%12);
}
void sub_1069()	//depth: 482
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[6]=flag[6]^(1499275710&0xff)^(1990712877&0xff);
}
void sub_1068()	//depth: 482
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[6],b=1499275710&0xff,c=1990712877&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1067()	//depth: 482
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[6]=~(~flag[6]-1744234125%12);
}
void sub_1066()	//depth: 483
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[6]=~(~flag[6]+1744234125%12);
}
void sub_1065()	//depth: 484
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[19]=~(~flag[19]+1117563376%12);
}
void sub_1064()	//depth: 485
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[6],b=803645742&0xff,c=89571811&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1063()	//depth: 486
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[20]=flag[20]^(566611665&0xff)^(682988245&0xff);
}
void sub_1062()	//depth: 486
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[20],b=566611665&0xff,c=682988245&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1061()	//depth: 486
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[7]=flag[7]^(1516261805&0xff)^(1653592830&0xff);
}
void sub_1060()	//depth: 487
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[7],b=1516261805&0xff,c=1653592830&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1059()	//depth: 487
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[15],b=1363620315&0xff,c=649151102&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1058()	//depth: 488
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[1],b=1820569484&0xff,c=1574845181&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1057()	//depth: 488
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[11]=~(~flag[11]+1040510989%12);
}
void sub_1056()	//depth: 488
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[19],b=1289183714&0xff,c=304187913&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1055()	//depth: 489
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[11]=~(~flag[11]-1974148698%12);
}
void sub_1054()	//depth: 489
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[10]=flag[10]^(37422633&0xff)^(1527493130&0xff);
}
void sub_1053()	//depth: 489
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[15]=flag[15]^(837789111&0xff)^(269282183&0xff);
}
void sub_1052()	//depth: 490
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[15],b=837789111&0xff,c=269282183&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1051()	//depth: 491
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[21]=flag[21]^(1963969292&0xff)^(2024874369&0xff);
}
void sub_1050()	//depth: 492
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[21]=flag[21]^(523041121&0xff)^(948803422&0xff);
}
void sub_1049()	//depth: 492
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[21],b=523041121&0xff,c=948803422&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1048()	//depth: 492
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[21]=flag[21]+1397253253%12;
}
void sub_1047()	//depth: 493
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[21]=~(~flag[21]+1397253253%12);
}
void sub_1046()	//depth: 494
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[16]=flag[16]^(2030095391&0xff)^(214510107&0xff);
}
void sub_1045()	//depth: 494
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[5]=flag[5]^(1988866106&0xff)^(92759443&0xff);
}
void sub_1044()	//depth: 495
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[5],b=1988866106&0xff,c=92759443&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1043()	//depth: 495
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[16],b=2030095391&0xff,c=214510107&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1042()	//depth: 495
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[21],b=1963969292&0xff,c=2024874369&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1041()	//depth: 496
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[21]=flag[21]^(418838901&0xff)^(1475421021&0xff);
}
void sub_1040()	//depth: 496
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[20]=flag[20]^(963970337&0xff)^(328854272&0xff);
}
void sub_1039()	//depth: 496
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[20],b=963970337&0xff,c=328854272&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1038()	//depth: 497
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[21],b=418838901&0xff,c=1475421021&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1037()	//depth: 497
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[10],b=37422633&0xff,c=1527493130&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1036()	//depth: 498
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[11]=~(~flag[11]+1974148698%12);
}
void sub_1035()	//depth: 499
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[12]=~(~flag[12]-1691132266%12);
}
void sub_1034()	//depth: 499
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=flag[20]^(1175873984&0xff)^(1512120835&0xff);
}
void sub_1033()	//depth: 499
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[20],b=1175873984&0xff,c=1512120835&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1032()	//depth: 500
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[12]=~(~flag[12]+1691132266%12);
}
void sub_1031()	//depth: 500
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[11]=flag[11]^(338946291&0xff)^(438877432&0xff);
}
void sub_1030()	//depth: 501
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[11],b=338946291&0xff,c=438877432&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1029()	//depth: 501
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[14]=~(~flag[14]-1189408810%12);
}
void sub_1028()	//depth: 502
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[14]=~(~flag[14]+1189408810%12);
}
void sub_1027()	//depth: 502
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[19]=~(~flag[19]+632993452%12);
}
void sub_1026()	//depth: 503
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[21]=~(~flag[21]-1840832949%12);
}
void sub_1025()	//depth: 504
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[21]=~(~flag[21]+1840832949%12);
}
void sub_1024()	//depth: 505
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[12],b=1354469045&0xff,c=760015786&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1023()	//depth: 505
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[2]=flag[2]^(1379639682&0xff)^(724461655&0xff);
}
void sub_1022()	//depth: 505
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=~(~flag[20]-260113526%12);
}
void sub_1021()	//depth: 506
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[5]=flag[5]^(598714744&0xff)^(504755084&0xff);
}
void sub_1020()	//depth: 506
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[6]=flag[6]^(575536016&0xff)^(475534069&0xff);
}
void sub_1019()	//depth: 506
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[6],b=575536016&0xff,c=475534069&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1018()	//depth: 507
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[13]=flag[13]+1082916936%12;
}
void sub_1017()	//depth: 507
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[3]=flag[3]^(2060046895&0xff)^(248038660&0xff);
}
void sub_1016()	//depth: 507
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[3],b=2060046895&0xff,c=248038660&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1015()	//depth: 508
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[13]=~(~flag[13]+1082916936%12);
}
void sub_1014()	//depth: 508
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[5],b=598714744&0xff,c=504755084&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1013()	//depth: 509
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[20]=~(~flag[20]+260113526%12);
}
void sub_1012()	//depth: 509
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[2],b=1379639682&0xff,c=724461655&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1011()	//depth: 509
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[16]=flag[16]+687064712%12;
}
void sub_1010()	//depth: 510
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[16]=~(~flag[16]+687064712%12);
}
void sub_1009()	//depth: 511
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[17]=flag[17]^(796485421&0xff)^(2139086725&0xff);
}
void sub_1008()	//depth: 512
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[19]=~(~flag[19]-1867520107%12);
}
void sub_1007()	//depth: 512
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[12]=~(~flag[12]-356652600%12);
}
void sub_1006()	//depth: 512
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[12]=~(~flag[12]+356652600%12);
}
void sub_1005()	//depth: 513
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[12]=~(~flag[12]-2117950311%12);
}
void sub_1004()	//depth: 513
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[12]=~(~flag[12]+2117950311%12);
}
void sub_1003()	//depth: 513
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[7]=flag[7]+1110085682%12;
}
void sub_1002()	//depth: 514
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[9]=flag[9]^(747615459&0xff)^(1888561197&0xff);
}
void sub_1001()	//depth: 514
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[9],b=747615459&0xff,c=1888561197&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_1000()	//depth: 515
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[8]=flag[8]+123004644%12;
}
void sub_999()	//depth: 515
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[15]=flag[15]^(1858402241&0xff)^(806105844&0xff);
}
void sub_998()	//depth: 515
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[15],b=1858402241&0xff,c=806105844&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_997()	//depth: 516
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[17]=flag[17]^(1254652832&0xff)^(955437135&0xff);
}
void sub_996()	//depth: 517
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[17],b=1254652832&0xff,c=955437135&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_995()	//depth: 517
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[21]=flag[21]^(1281549712&0xff)^(1501661598&0xff);
}
void sub_994()	//depth: 518
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[21],b=1281549712&0xff,c=1501661598&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_993()	//depth: 518
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[8]=~(~flag[8]+123004644%12);
}
void sub_992()	//depth: 519
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[0]=flag[0]^(2146862270&0xff)^(1760469773&0xff);
}
void sub_991()	//depth: 519
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[0],b=2146862270&0xff,c=1760469773&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_990()	//depth: 519
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[7]=~(~flag[7]+1110085682%12);
}
void sub_989()	//depth: 520
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[6]=~(~flag[6]-626828123%12);
}
void sub_988()	//depth: 521
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[6]=~(~flag[6]+626828123%12);
}
void sub_987()	//depth: 521
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[19]=~(~flag[19]+1867520107%12);
}
void sub_986()	//depth: 521
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[17],b=796485421&0xff,c=2139086725&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_985()	//depth: 522
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[5]=~(~flag[5]-509568273%12);
}
void sub_984()	//depth: 522
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[5]=~(~flag[5]+509568273%12);
}
void sub_983()	//depth: 523
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[3],b=1612006227&0xff,c=2106966125&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_982()	//depth: 524
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[8]=flag[8]+621262285%12;
}
void sub_981()	//depth: 524
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[8]=~(~flag[8]+621262285%12);
}
void sub_980()	//depth: 524
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[7],b=338770580&0xff,c=432506050&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_979()	//depth: 525
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[6]=flag[6]^(1840950205&0xff)^(2044103161&0xff);
	/* put your code here! */
    for (int i = 0; i < 22; i++) {
        flag[i] ^= 34;
    }
}
void sub_978()	//depth: 526
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[6],b=1840950205&0xff,c=2044103161&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_977()	//depth: 527
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[16]=flag[16]^(311535517&0xff)^(860408600&0xff);
	/* put your code here! */
}
void sub_976()	//depth: 527
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[16],b=311535517&0xff,c=860408600&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_975()	//depth: 527
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[20]=flag[20]^(1380179723&0xff)^(2134666880&0xff);
	/* put your code here! */
}
void sub_974()	//depth: 528
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[18]=flag[18]+1256364202%12;
}
void sub_973()	//depth: 528
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[18]=~(~flag[18]+1256364202%12);
}
void sub_972()	//depth: 529
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[20],b=1380179723&0xff,c=2134666880&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_971()	//depth: 529
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[19]=~(~flag[19]-1971666999%12);
	/* put your code here! */
}
void sub_970()	//depth: 530
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[19]=~(~flag[19]+1971666999%12);
}
void sub_969()	//depth: 531
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[8]=flag[8]+1329879737%12;
	/* put your code here! */
}
void sub_968()	//depth: 531
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[14]=flag[14]+265443408%12;
}
void sub_967()	//depth: 531
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[14]=~(~flag[14]+265443408%12);
}
void sub_966()	//depth: 532
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]+1329879737%12);
}
void sub_965()	//depth: 533
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[4]=flag[4]^(784383255&0xff)^(1855581822&0xff);
	/* put your code here! */
}
void sub_964()	//depth: 533
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=flag[3]^(992690515&0xff)^(908948806&0xff);
}
void sub_963()	//depth: 533
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[9]=flag[9]^(381699866&0xff)^(2123484135&0xff);
}
void sub_962()	//depth: 534
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[19]=~(~flag[19]-1040742377%12);
}
void sub_961()	//depth: 534
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[3]=flag[3]^(1308487721&0xff)^(623115232&0xff);
}
void sub_960()	//depth: 535
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[3],b=1308487721&0xff,c=623115232&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_959()	//depth: 535
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[20]=~(~flag[20]-286045392%12);
}
void sub_958()	//depth: 536
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[20]=~(~flag[20]+286045392%12);
}
void sub_957()	//depth: 536
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[19]=~(~flag[19]+1040742377%12);
}
void sub_956()	//depth: 536
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[10]=flag[10]^(707921307&0xff)^(1619763378&0xff);
}
void sub_955()	//depth: 537
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[5]=flag[5]^(1385267029&0xff)^(586045480&0xff);
}
void sub_954()	//depth: 538
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[5],b=1385267029&0xff,c=586045480&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_953()	//depth: 538
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[13]=~(~flag[13]-1224240741%12);
}
void sub_952()	//depth: 539
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[13]=~(~flag[13]+1224240741%12);
}
void sub_951()	//depth: 540
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=~(~flag[15]-1697652125%12);
}
void sub_950()	//depth: 541
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[15]=~(~flag[15]+1697652125%12);
}
void sub_949()	//depth: 541
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[10],b=707921307&0xff,c=1619763378&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_948()	//depth: 542
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[9],b=381699866&0xff,c=2123484135&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_947()	//depth: 542
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[3],b=992690515&0xff,c=908948806&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_946()	//depth: 543
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[1]=flag[1]^(106273684&0xff)^(1909352418&0xff);
}
void sub_945()	//depth: 544
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[2]=flag[2]^(42408879&0xff)^(1882853394&0xff);
}
void sub_944()	//depth: 544
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[11]=flag[11]^(663079281&0xff)^(131508783&0xff);
}
void sub_943()	//depth: 544
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[2]=flag[2]^(758709945&0xff)^(1325636813&0xff);
}
void sub_942()	//depth: 545
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[2],b=758709945&0xff,c=1325636813&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_941()	//depth: 545
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[11],b=663079281&0xff,c=131508783&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_940()	//depth: 545
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[2],b=42408879&0xff,c=1882853394&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_939()	//depth: 546
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[1],b=106273684&0xff,c=1909352418&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_938()	//depth: 547
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[4],b=784383255&0xff,c=1855581822&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_937()	//depth: 547
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[20]=flag[20]^(665017669&0xff)^(1117801419&0xff);
	/* put your code here! */
}
void sub_936()	//depth: 547
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[20],b=665017669&0xff,c=1117801419&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_935()	//depth: 548
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[4]=flag[4]^(54134765&0xff)^(1346946924&0xff);
	/* put your code here! */
}
void sub_934()	//depth: 548
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[4],b=54134765&0xff,c=1346946924&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_933()	//depth: 549
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[6]=flag[6]^(173303050&0xff)^(1319075707&0xff);
	/* put your code here! */
}
void sub_932()	//depth: 549
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[6],b=173303050&0xff,c=1319075707&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_931()	//depth: 549
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[1]=~(~flag[1]-687016936%12);
	/* put your code here! */
}
void sub_930()	//depth: 550
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[1]=~(~flag[1]+687016936%12);
}
void sub_929()	//depth: 551
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[18]=~(~flag[18]-1206271722%12);
	/* put your code here! */
}
void sub_928()	//depth: 551
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[14]=flag[14]^(1630936245&0xff)^(664063481&0xff);
}
void sub_927()	//depth: 552
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[14],b=1630936245&0xff,c=664063481&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_926()	//depth: 552
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[15]=flag[15]^(1742112043&0xff)^(505025831&0xff);
}
void sub_925()	//depth: 553
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[15],b=1742112043&0xff,c=505025831&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_924()	//depth: 553
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[9]=~(~flag[9]-1610886849%12);
}
void sub_923()	//depth: 553
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[9]=~(~flag[9]+1610886849%12);
}
void sub_922()	//depth: 554
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[18]=~(~flag[18]+1206271722%12);
}
void sub_921()	//depth: 554
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[11]=flag[11]^(576323849&0xff)^(1516446314&0xff);
	/* put your code here! */
}
void sub_920()	//depth: 555
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[11],b=576323849&0xff,c=1516446314&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_919()	//depth: 555
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[10]=~(~flag[10]-797084345%12);
	/* put your code here! */
}
void sub_918()	//depth: 555
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[14]=~(~flag[14]-873863720%12);
}
void sub_917()	//depth: 556
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[14]=~(~flag[14]+873863720%12);
}
void sub_916()	//depth: 556
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[10]=~(~flag[10]+797084345%12);
}
void sub_915()	//depth: 556
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[7]=flag[7]^(988465283&0xff)^(967021046&0xff);
	/* put your code here! */
}
void sub_914()	//depth: 557
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[20]=flag[20]+2097261481%12;
}
void sub_913()	//depth: 557
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[20]=~(~flag[20]+2097261481%12);
}
void sub_912()	//depth: 557
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=flag[11]+860951970%12;
}
void sub_911()	//depth: 558
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[1]=flag[1]^(60158385&0xff)^(267680183&0xff);
}
void sub_910()	//depth: 558
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[1],b=60158385&0xff,c=267680183&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_909()	//depth: 558
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[11]=~(~flag[11]+860951970%12);
}
void sub_908()	//depth: 559
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[7],b=988465283&0xff,c=967021046&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_907()	//depth: 560
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[3]=flag[3]^(968473894&0xff)^(1344607441&0xff);
	/* put your code here! */
}
void sub_906()	//depth: 560
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[16]=~(~flag[16]-348461403%12);
}
void sub_905()	//depth: 560
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[8]=flag[8]^(1118943044&0xff)^(1629216294&0xff);
}
void sub_904()	//depth: 561
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[8],b=1118943044&0xff,c=1629216294&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_903()	//depth: 561
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[13]=flag[13]+471492825%12;
}
void sub_902()	//depth: 561
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[13]=~(~flag[13]+471492825%12);
}
void sub_901()	//depth: 562
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[16]=~(~flag[16]+348461403%12);
}
void sub_900()	//depth: 562
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[3],b=968473894&0xff,c=1344607441&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_899()	//depth: 563
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[15]=flag[15]^(955951360&0xff)^(2109402679&0xff);
	/* put your code here! */
}
void sub_898()	//depth: 564
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[15],b=955951360&0xff,c=2109402679&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_897()	//depth: 564
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[12]=flag[12]+1793642656%12;
	/* put your code here! */
}
void sub_896()	//depth: 564
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[12]=~(~flag[12]+1793642656%12);
}
void sub_895()	//depth: 565
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[16]=flag[16]+127847136%12;
	/* put your code here! */
}
void sub_894()	//depth: 565
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[21]=flag[21]^(1327010722&0xff)^(1047026605&0xff);
}
void sub_893()	//depth: 565
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[12]=~(~flag[12]-861318128%12);
}
void sub_892()	//depth: 566
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[10]=~(~flag[10]-852966582%12);
}
void sub_891()	//depth: 566
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[16]=flag[16]^(527905498&0xff)^(526944405&0xff);
}
void sub_890()	//depth: 567
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[1]=flag[1]^(545325298&0xff)^(1728837090&0xff);
}
void sub_889()	//depth: 567
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=~(~flag[15]-1208421245%12);
}
void sub_888()	//depth: 567
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[13]=flag[13]+1199890716%12;
}
void sub_887()	//depth: 568
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[9]=~(~flag[9]-2101182556%12);
}
void sub_886()	//depth: 569
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[12]=flag[12]+86161985%12;
}
void sub_885()	//depth: 570
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[12]=~(~flag[12]+86161985%12);
}
void sub_884()	//depth: 570
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[15]=~(~flag[15]-1348622875%12);
}
void sub_883()	//depth: 570
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[6]=flag[6]^(619682735&0xff)^(846963935&0xff);
}
void sub_882()	//depth: 571
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[6],b=619682735&0xff,c=846963935&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_881()	//depth: 572
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[15]=~(~flag[15]+1348622875%12);
}
void sub_880()	//depth: 572
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[9]=flag[9]+919205361%12;
}
void sub_879()	//depth: 572
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[9]=~(~flag[9]+919205361%12);
}
void sub_878()	//depth: 573
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[15]=flag[15]+952383584%12;
}
void sub_877()	//depth: 573
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[4]=flag[4]^(571478661&0xff)^(920122822&0xff);
}
void sub_876()	//depth: 574
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[4],b=571478661&0xff,c=920122822&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_875()	//depth: 574
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[20]=flag[20]^(399428563&0xff)^(1873561775&0xff);
}
void sub_874()	//depth: 575
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[1]=~(~flag[1]-226655882%12);
}
void sub_873()	//depth: 575
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[18]=flag[18]^(99103247&0xff)^(627641484&0xff);
}
void sub_872()	//depth: 576
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[15]=flag[15]+1939221094%12;
}
void sub_871()	//depth: 576
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[15]=~(~flag[15]+1939221094%12);
}
void sub_870()	//depth: 577
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[18],b=99103247&0xff,c=627641484&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_869()	//depth: 577
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[1]=~(~flag[1]+226655882%12);
}
void sub_868()	//depth: 577
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[20],b=399428563&0xff,c=1873561775&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_867()	//depth: 578
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=~(~flag[15]+952383584%12);
}
void sub_866()	//depth: 578
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]-1301568253%12);
}
void sub_865()	//depth: 579
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[9]=flag[9]^(266047248&0xff)^(1117027687&0xff);
}
void sub_864()	//depth: 579
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(1178594114&0xff)^(1579020623&0xff);
}
void sub_863()	//depth: 579
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[16]=flag[16]^(1147550923&0xff)^(1556971199&0xff);
}
void sub_862()	//depth: 580
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[15]=flag[15]^(67391421&0xff)^(1918877575&0xff);
}
void sub_861()	//depth: 580
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[21]=flag[21]+1776392749%12;
}
void sub_860()	//depth: 580
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=~(~flag[20]-1108829287%12);
}
void sub_859()	//depth: 581
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[1]=~(~flag[1]-2070104901%12);
}
void sub_858()	//depth: 581
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=~(~flag[1]+2070104901%12);
}
void sub_857()	//depth: 582
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[4]=~(~flag[4]-1563456422%12);
}
void sub_856()	//depth: 582
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[18]=~(~flag[18]-1270348902%12);
}
void sub_855()	//depth: 583
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[11]=flag[11]+2084728365%12;
}
void sub_854()	//depth: 583
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[12]=~(~flag[12]-1793856255%12);
}
void sub_853()	//depth: 584
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[8]=flag[8]^(1736464469&0xff)^(670959756&0xff);
}
void sub_852()	//depth: 585
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[2]=~(~flag[2]-1239242049%12);
}
void sub_851()	//depth: 585
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[12]=~(~flag[12]-588162436%12);
}
void sub_850()	//depth: 586
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[12]=~(~flag[12]+588162436%12);
}
void sub_849()	//depth: 586
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[2]=~(~flag[2]+1239242049%12);
}
void sub_848()	//depth: 587
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[19]=flag[19]^(2106148094&0xff)^(2088788360&0xff);
}
void sub_847()	//depth: 587
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[2]=flag[2]^(940700547&0xff)^(2055884871&0xff);
}
void sub_846()	//depth: 587
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[1]=flag[1]^(1928652388&0xff)^(1628646810&0xff);
}
void sub_845()	//depth: 588
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[1],b=1928652388&0xff,c=1628646810&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_844()	//depth: 588
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[11]=flag[11]^(568041829&0xff)^(1017338851&0xff);
}
void sub_843()	//depth: 589
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[11],b=568041829&0xff,c=1017338851&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_842()	//depth: 590
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[2],b=940700547&0xff,c=2055884871&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_841()	//depth: 590
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[20]=flag[20]+1143099136%12;
}
void sub_840()	//depth: 591
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[13]=flag[13]^(146549162&0xff)^(1271828752&0xff);
}
void sub_839()	//depth: 592
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[13],b=146549162&0xff,c=1271828752&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_838()	//depth: 592
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[20]=~(~flag[20]+1143099136%12);
}
void sub_837()	//depth: 593
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[19],b=2106148094&0xff,c=2088788360&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_836()	//depth: 594
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[8],b=1736464469&0xff,c=670959756&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_835()	//depth: 595
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[4]=flag[4]^(695623697&0xff)^(879314952&0xff);
}
void sub_834()	//depth: 596
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[4]=flag[4]^(278073347&0xff)^(671673247&0xff);
}
void sub_833()	//depth: 596
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[4],b=278073347&0xff,c=671673247&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_832()	//depth: 596
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[4],b=695623697&0xff,c=879314952&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_831()	//depth: 597
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[20]=flag[20]+719673429%12;
}
void sub_830()	//depth: 597
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[20]=~(~flag[20]+719673429%12);
}
void sub_829()	//depth: 597
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[15]=flag[15]^(891141269&0xff)^(187324171&0xff);
}
void sub_828()	//depth: 598
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[11]=flag[11]^(388722139&0xff)^(9524045&0xff);
}
void sub_827()	//depth: 598
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[11],b=388722139&0xff,c=9524045&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_826()	//depth: 598
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[6]=~(~flag[6]-205409368%12);
}
void sub_825()	//depth: 599
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[6]=~(~flag[6]+205409368%12);
}
void sub_824()	//depth: 600
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[21]=flag[21]^(2029532451&0xff)^(298724714&0xff);
}
void sub_823()	//depth: 601
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[20]=flag[20]^(614317634&0xff)^(1378026061&0xff);
}
void sub_822()	//depth: 602
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[20],b=614317634&0xff,c=1378026061&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_821()	//depth: 603
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[3]=flag[3]^(527842385&0xff)^(1710928770&0xff);
}
void sub_820()	//depth: 604
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[3],b=527842385&0xff,c=1710928770&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_819()	//depth: 604
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[21],b=2029532451&0xff,c=298724714&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_818()	//depth: 605
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[15],b=891141269&0xff,c=187324171&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_817()	//depth: 606
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[12]=~(~flag[12]+1793856255%12);
}
void sub_816()	//depth: 606
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[11]=~(~flag[11]+2084728365%12);
}
void sub_815()	//depth: 606
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[18]=~(~flag[18]+1270348902%12);
}
void sub_814()	//depth: 607
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[8]=flag[8]^(136759584&0xff)^(436164018&0xff);
}
void sub_813()	//depth: 607
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[0]=flag[0]^(2010786187&0xff)^(1529941757&0xff);
}
void sub_812()	//depth: 608
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[0],b=2010786187&0xff,c=1529941757&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_811()	//depth: 609
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[8],b=136759584&0xff,c=436164018&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_810()	//depth: 610
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[4]=~(~flag[4]+1563456422%12);
}
void sub_809()	//depth: 611
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[20]=~(~flag[20]+1108829287%12);
}
void sub_808()	//depth: 611
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[8]=flag[8]^(1425961013&0xff)^(1439665673&0xff);
}
void sub_807()	//depth: 611
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[8],b=1425961013&0xff,c=1439665673&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_806()	//depth: 612
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[17]=flag[17]+958563974%12;
}
void sub_805()	//depth: 612
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[9]=flag[9]+583820005%12;
}
void sub_804()	//depth: 612
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[6]=flag[6]+1815272248%12;
}
void sub_803()	//depth: 613
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[15]=flag[15]^(140776388&0xff)^(1428214017&0xff);
}
void sub_802()	//depth: 613
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[4]=~(~flag[4]-1997670490%12);
}
void sub_801()	//depth: 613
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[4]=~(~flag[4]+1997670490%12);
}
void sub_800()	//depth: 614
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[7]=flag[7]^(948011941&0xff)^(1914324417&0xff);
}
void sub_799()	//depth: 614
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[7]=flag[7]^(533324482&0xff)^(609921696&0xff);
}
void sub_798()	//depth: 615
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[7],b=533324482&0xff,c=609921696&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_797()	//depth: 616
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[6]=flag[6]+1467580918%12;
}
void sub_796()	//depth: 616
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[11]=flag[11]^(1127566393&0xff)^(1849276486&0xff);
}
void sub_795()	//depth: 617
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=flag[8]^(1105073934&0xff)^(1306263809&0xff);
}
void sub_794()	//depth: 617
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[5]=flag[5]^(1094697910&0xff)^(1731134321&0xff);
}
void sub_793()	//depth: 617
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[14]=~(~flag[14]-675832281%12);
}
void sub_792()	//depth: 618
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[10]=flag[10]^(1898393320&0xff)^(925810154&0xff);
}
void sub_791()	//depth: 619
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=flag[8]+505343462%12;
}
void sub_790()	//depth: 619
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]+505343462%12);
}
void sub_789()	//depth: 619
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[9]=flag[9]+1746047350%12;
}
void sub_788()	//depth: 620
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[9]=~(~flag[9]+1746047350%12);
}
void sub_787()	//depth: 620
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[13]=flag[13]^(1728034892&0xff)^(2072935991&0xff);
}
void sub_786()	//depth: 621
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[13],b=1728034892&0xff,c=2072935991&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_785()	//depth: 621
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[10],b=1898393320&0xff,c=925810154&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_784()	//depth: 621
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[3]=flag[3]^(1319497140&0xff)^(1502043298&0xff);
}
void sub_783()	//depth: 622
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[20]=~(~flag[20]-1172576279%12);
}
void sub_782()	//depth: 623
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[20]=~(~flag[20]+1172576279%12);
}
void sub_781()	//depth: 623
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[15]=flag[15]+1077580718%12;
}
void sub_780()	//depth: 623
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[15]=~(~flag[15]+1077580718%12);
}
void sub_779()	//depth: 624
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[3],b=1319497140&0xff,c=1502043298&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_778()	//depth: 624
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[19]=~(~flag[19]-1425511089%12);
}
void sub_777()	//depth: 624
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[3]=flag[3]+2025787572%12;
}
void sub_776()	//depth: 625
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[3]=~(~flag[3]+2025787572%12);
}
void sub_775()	//depth: 626
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[17]=~(~flag[17]-1045367397%12);
}
void sub_774()	//depth: 627
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[17]=~(~flag[17]+1045367397%12);
}
void sub_773()	//depth: 627
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[19]=~(~flag[19]+1425511089%12);
}
void sub_772()	//depth: 628
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(1427888945&0xff)^(563897458&0xff);
}
void sub_771()	//depth: 629
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=flag[1]^(2021274687&0xff)^(1612963546&0xff);
}
void sub_770()	//depth: 629
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[19]=flag[19]^(1564834127&0xff)^(373516736&0xff);
}
void sub_769()	//depth: 630
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[19],b=1564834127&0xff,c=373516736&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_768()	//depth: 630
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[1],b=2021274687&0xff,c=1612963546&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_767()	//depth: 630
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[21],b=1427888945&0xff,c=563897458&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_766()	//depth: 631
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[15]=flag[15]^(1341416806&0xff)^(1924594298&0xff);
}
void sub_765()	//depth: 631
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[9]=~(~flag[9]-386738085%12);
}
void sub_764()	//depth: 632
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[5]=~(~flag[5]-821407800%12);
}
void sub_763()	//depth: 632
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[5]=~(~flag[5]+821407800%12);
}
void sub_762()	//depth: 633
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[9]=~(~flag[9]+386738085%12);
}
void sub_761()	//depth: 634
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[10]=flag[10]^(512339163&0xff)^(185065481&0xff);
}
void sub_760()	//depth: 634
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[10],b=512339163&0xff,c=185065481&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_759()	//depth: 635
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[20]=flag[20]^(118643169&0xff)^(1309054899&0xff);
}
void sub_758()	//depth: 636
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[2]=flag[2]+253998737%12;
}
void sub_757()	//depth: 637
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=~(~flag[1]-1445221176%12);
}
void sub_756()	//depth: 638
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[6]=~(~flag[6]-493040877%12);
}
void sub_755()	//depth: 638
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[6]=~(~flag[6]+493040877%12);
}
void sub_754()	//depth: 639
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[21]=flag[21]^(987091696&0xff)^(348547574&0xff);
}
void sub_753()	//depth: 639
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[13]=flag[13]+331884259%12;
}
void sub_752()	//depth: 640
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[13]=~(~flag[13]+331884259%12);
}
void sub_751()	//depth: 640
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[21],b=987091696&0xff,c=348547574&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_750()	//depth: 641
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[1]=~(~flag[1]+1445221176%12);
}
void sub_749()	//depth: 642
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[2]=~(~flag[2]+253998737%12);
}
void sub_748()	//depth: 642
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[11]=~(~flag[11]-961576232%12);
}
void sub_747()	//depth: 643
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[7]=flag[7]+2097418335%12;
}
void sub_746()	//depth: 644
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[19]=flag[19]^(1110170685&0xff)^(35926383&0xff);
}
void sub_745()	//depth: 644
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[9]=flag[9]+886769901%12;
}
void sub_744()	//depth: 644
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[9]=~(~flag[9]+886769901%12);
}
void sub_743()	//depth: 645
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[19],b=1110170685&0xff,c=35926383&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_742()	//depth: 646
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[7]=~(~flag[7]+2097418335%12);
}
void sub_741()	//depth: 646
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[11]=~(~flag[11]+961576232%12);
}
void sub_740()	//depth: 647
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[20],b=118643169&0xff,c=1309054899&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_739()	//depth: 647
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[15],b=1341416806&0xff,c=1924594298&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_738()	//depth: 648
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[14]=~(~flag[14]+675832281%12);
}
void sub_737()	//depth: 649
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[5],b=1094697910&0xff,c=1731134321&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_736()	//depth: 649
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[8],b=1105073934&0xff,c=1306263809&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_735()	//depth: 649
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[11],b=1127566393&0xff,c=1849276486&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_734()	//depth: 650
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[6]=~(~flag[6]+1467580918%12);
}
void sub_733()	//depth: 651
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[7],b=948011941&0xff,c=1914324417&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_732()	//depth: 651
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[16]=~(~flag[16]-1998615915%12);
}
void sub_731()	//depth: 652
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[11]=~(~flag[11]-177662155%12);
}
void sub_730()	//depth: 652
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[10]=flag[10]^(2132444176&0xff)^(269650400&0xff);
}
void sub_729()	//depth: 653
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[10],b=2132444176&0xff,c=269650400&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_728()	//depth: 654
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[15]=flag[15]^(1542221889&0xff)^(1224091082&0xff);
}
void sub_727()	//depth: 654
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[15],b=1542221889&0xff,c=1224091082&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_726()	//depth: 655
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[11]=~(~flag[11]+177662155%12);
}
void sub_725()	//depth: 655
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[17]=flag[17]^(1776651521&0xff)^(1675051385&0xff);
}
void sub_724()	//depth: 656
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[17]=flag[17]^(1838959365&0xff)^(786367595&0xff);
}
void sub_723()	//depth: 656
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[17],b=1838959365&0xff,c=786367595&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_722()	//depth: 656
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[17]=flag[17]^(1782296834&0xff)^(1361044916&0xff);
}
void sub_721()	//depth: 657
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[17],b=1782296834&0xff,c=1361044916&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_720()	//depth: 657
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[17],b=1776651521&0xff,c=1675051385&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_719()	//depth: 657
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[16]=~(~flag[16]+1998615915%12);
}
void sub_718()	//depth: 658
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[15],b=140776388&0xff,c=1428214017&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_717()	//depth: 659
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[10]=flag[10]+603835753%12;
}
void sub_716()	//depth: 660
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[10]=~(~flag[10]+603835753%12);
}
void sub_715()	//depth: 661
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[6]=~(~flag[6]+1815272248%12);
}
void sub_714()	//depth: 661
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[9]=~(~flag[9]+583820005%12);
}
void sub_713()	//depth: 661
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[10]=flag[10]+1990967491%12;
}
void sub_712()	//depth: 662
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=flag[11]^(633563198&0xff)^(1747532293&0xff);
}
void sub_711()	//depth: 662
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[18]=flag[18]^(1393369924&0xff)^(847080395&0xff);
}
void sub_710()	//depth: 663
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[0]=flag[0]^(909339079&0xff)^(507062221&0xff);
}
void sub_709()	//depth: 663
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[12]=~(~flag[12]-1610213902%12);
}
void sub_708()	//depth: 664
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[21]=flag[21]^(1369540447&0xff)^(895819531&0xff);
}
void sub_707()	//depth: 664
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[14]=flag[14]^(661267161&0xff)^(75028328&0xff);
}
void sub_706()	//depth: 664
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[14],b=661267161&0xff,c=75028328&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_705()	//depth: 665
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[21],b=1369540447&0xff,c=895819531&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_704()	//depth: 665
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[11]=~(~flag[11]-1655274183%12);
}
void sub_703()	//depth: 665
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[11]=~(~flag[11]+1655274183%12);
}
void sub_702()	//depth: 666
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[12]=~(~flag[12]+1610213902%12);
}
void sub_701()	//depth: 666
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[0],b=909339079&0xff,c=507062221&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_700()	//depth: 666
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[6]=flag[6]+1821691520%12;
}
void sub_699()	//depth: 667
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[4]=flag[4]^(39290430&0xff)^(1983904545&0xff);
}
void sub_698()	//depth: 668
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[4],b=39290430&0xff,c=1983904545&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_697()	//depth: 669
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[6]=~(~flag[6]+1821691520%12);
}
void sub_696()	//depth: 670
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[18],b=1393369924&0xff,c=847080395&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_695()	//depth: 670
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[1]=flag[1]^(997730902&0xff)^(351596287&0xff);
}
void sub_694()	//depth: 670
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=~(~flag[15]-21089178%12);
}
void sub_693()	//depth: 671
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[0]=~(~flag[0]-1969971925%12);
}
void sub_692()	//depth: 671
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[16]=flag[16]^(1832881400&0xff)^(834265510&0xff);
}
void sub_691()	//depth: 672
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[16],b=1832881400&0xff,c=834265510&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_690()	//depth: 673
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[6]=~(~flag[6]-1707260692%12);
}
void sub_689()	//depth: 674
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[5]=flag[5]^(1571550149&0xff)^(928269992&0xff);
}
void sub_688()	//depth: 675
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[19]=~(~flag[19]-195171123%12);
}
void sub_687()	//depth: 676
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[19]=~(~flag[19]+195171123%12);
}
void sub_686()	//depth: 676
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[5],b=1571550149&0xff,c=928269992&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
}
void sub_685()	//depth: 677
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[17]=flag[17]+1944418836%12;
}
void sub_684()	//depth: 677
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[17]=~(~flag[17]+1944418836%12);
}
void sub_683()	//depth: 677
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[6]=~(~flag[6]+1707260692%12);
}
void sub_682()	//depth: 678
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[6]=flag[6]^(1779107150&0xff)^(1165978046&0xff);
}
void sub_681()	//depth: 678
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[17]=~(~flag[17]-1631943501%12);
}
void sub_680()	//depth: 679
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[1]=~(~flag[1]-776854306%12);
}
void sub_679()	//depth: 679
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[4]=flag[4]+110331111%12;
}
void sub_678()	//depth: 679
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[11]=flag[11]^(593050163&0xff)^(782075144&0xff);
}
void sub_677()	//depth: 678
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[21]=flag[21]+1206833718%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_678();
	else
		exit(0);
	sub_679();
	sub_680();
}
void sub_676()	//depth: 677
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[21]=~(~flag[21]+1206833718%12);
	sub_677();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_681();
	else
		exit(0);
	sub_682();
}
void sub_675()	//depth: 676
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[7]=~(~flag[7]-639265130%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_676();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_683();
	else
		exit(0);
	sub_684();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_685();
	else
		exit(0);
}
void sub_674()	//depth: 675
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[5]=flag[5]+1557613767%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_675();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_686();
	else
		exit(0);
	sub_687();
}
void sub_673()	//depth: 674
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[5]=~(~flag[5]+1557613767%12);
	sub_674();
	sub_688();
}
void sub_672()	//depth: 673
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[7]=flag[7]^(753612186&0xff)^(1715663235&0xff);
	sub_673();
	if((x-y)==(~(~x+y)))
		sub_689();
	else
		exit(0);
}
void sub_671()	//depth: 672
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[7],b=753612186&0xff,c=1715663235&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_672();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_690();
	else
		exit(0);
}
void sub_670()	//depth: 671
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[1]=flag[1]^(435705247&0xff)^(1924648312&0xff);
	if((x-y)==(~(~x+y)))
		sub_671();
	else
		exit(0);
	sub_691();
}
void sub_669()	//depth: 670
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[1],b=435705247&0xff,c=1924648312&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_670();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_692();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_693();
	else
		exit(0);
}
void sub_668()	//depth: 669
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[7]=~(~flag[7]+639265130%12);
	sub_669();
	if((x-y)==(~(~x+y)))
		sub_694();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_695();
	else
		exit(0);
	sub_696();
}
void sub_667()	//depth: 668
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[11],b=593050163&0xff,c=782075144&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_668();
	sub_697();
}
void sub_666()	//depth: 667
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[4]=~(~flag[4]+110331111%12);
	sub_667();
	if((x-y)==(~(~x+y)))
		sub_698();
	else
		exit(0);
}
void sub_665()	//depth: 666
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[1]=~(~flag[1]+776854306%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_666();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_699();
	else
		exit(0);
}
void sub_664()	//depth: 665
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[1]=flag[1]^(1186126001&0xff)^(578985818&0xff);
	sub_665();
	if((x-y)==(~(~x+y)))
		sub_700();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_701();
	else
		exit(0);
	sub_702();
}
void sub_663()	//depth: 664
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[20]=~(~flag[20]-855842189%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_664();
	else
		exit(0);
	sub_703();
	if((x-y)==(~(~x+y)))
		sub_704();
	else
		exit(0);
	sub_705();
}
void sub_662()	//depth: 663
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[3]=flag[3]^(1381942668&0xff)^(1723322047&0xff);
	sub_663();
	sub_706();
	sub_707();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_708();
	else
		exit(0);
}
void sub_661()	//depth: 662
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[3],b=1381942668&0xff,c=1723322047&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_662();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_709();
	else
		exit(0);
	sub_710();
}
void sub_660()	//depth: 661
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[20]=~(~flag[20]+855842189%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_661();
	else
		exit(0);
	sub_711();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_712();
	else
		exit(0);
}
void sub_659()	//depth: 660
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[1],b=1186126001&0xff,c=578985818&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_660();
	sub_713();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_714();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_715();
	else
		exit(0);
}
void sub_658()	//depth: 659
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[17]=~(~flag[17]+1631943501%12);
	sub_659();
	if((x-y)==(~(~x+y)))
		sub_716();
	else
		exit(0);
}
void sub_657()	//depth: 658
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[6],b=1779107150&0xff,c=1165978046&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_658();
	else
		exit(0);
	sub_717();
}
void sub_656()	//depth: 657
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[4]=flag[4]^(1355414543&0xff)^(739251020&0xff);
	sub_657();
	sub_718();
}
void sub_655()	//depth: 656
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[13]=flag[13]^(958445069&0xff)^(749522063&0xff);
	if((x-y)==(~(~x+y)))
		sub_656();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_719();
	else
		exit(0);
	sub_720();
	if((x-y)==(~(~x+y)))
		sub_721();
	else
		exit(0);
}
void sub_654()	//depth: 655
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[2]=flag[2]^(1712521755&0xff)^(123732838&0xff);
	if((x-y)==(~(~x+y)))
		sub_655();
	else
		exit(0);
	sub_722();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_723();
	else
		exit(0);
	sub_724();
}
void sub_653()	//depth: 654
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[2],b=1712521755&0xff,c=123732838&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_654();
	sub_725();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_726();
	else
		exit(0);
}
void sub_652()	//depth: 653
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[13],b=958445069&0xff,c=749522063&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_653();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_727();
	else
		exit(0);
	sub_728();
}
void sub_651()	//depth: 652
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[7]=flag[7]+1259511682%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_652();
	else
		exit(0);
	sub_729();
}
void sub_650()	//depth: 651
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[7]=~(~flag[7]+1259511682%12);
	sub_651();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_730();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_731();
	else
		exit(0);
}
void sub_649()	//depth: 650
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[4],b=1355414543&0xff,c=739251020&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_650();
	else
		exit(0);
	sub_732();
	if((x-y)==(~(~x+y)))
		sub_733();
	else
		exit(0);
}
void sub_648()	//depth: 649
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[10]=flag[10]^(1097145518&0xff)^(792000571&0xff);
	sub_649();
	if((x-y)==(~(~x+y)))
		sub_734();
	else
		exit(0);
}
void sub_647()	//depth: 648
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[11]=flag[11]^(1358418647&0xff)^(195580838&0xff);
	sub_648();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_735();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_736();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_737();
	else
		exit(0);
}
void sub_646()	//depth: 647
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[13]=flag[13]^(422368792&0xff)^(1837792894&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_647();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_738();
	else
		exit(0);
}
void sub_645()	//depth: 646
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[7]=flag[7]^(1530394614&0xff)^(1816540295&0xff);
	if((x-y)==(~(~x+y)))
		sub_646();
	else
		exit(0);
	sub_739();
	sub_740();
}
void sub_644()	//depth: 645
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[17]=flag[17]^(1961095920&0xff)^(1565026268&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_645();
	else
		exit(0);
	sub_741();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_742();
	else
		exit(0);
}
void sub_643()	//depth: 644
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[17],b=1961095920&0xff,c=1565026268&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_644();
	else
		exit(0);
	sub_743();
}
void sub_642()	//depth: 643
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[7],b=1530394614&0xff,c=1816540295&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_643();
	else
		exit(0);
	sub_744();
	sub_745();
	sub_746();
}
void sub_641()	//depth: 642
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[13],b=422368792&0xff,c=1837792894&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_642();
	else
		exit(0);
	sub_747();
}
void sub_640()	//depth: 641
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[10]=~(~flag[10]-341334694%12);
	if((x-y)==(~(~x+y)))
		sub_641();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_748();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_749();
	else
		exit(0);
}
void sub_639()	//depth: 640
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[10]=~(~flag[10]+341334694%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_640();
	else
		exit(0);
	sub_750();
}
void sub_638()	//depth: 639
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[11],b=1358418647&0xff,c=195580838&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_639();
	else
		exit(0);
	sub_751();
	sub_752();
}
void sub_637()	//depth: 638
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[6]=flag[6]+124922540%12;
	if((x-y)==(~(~x+y)))
		sub_638();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_753();
	else
		exit(0);
	sub_754();
}
void sub_636()	//depth: 637
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[8]=flag[8]+1429612571%12;
	sub_637();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_755();
	else
		exit(0);
	sub_756();
}
void sub_635()	//depth: 636
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]+1429612571%12);
	sub_636();
	if((x-y)==(~(~x+y)))
		sub_757();
	else
		exit(0);
}
void sub_634()	//depth: 635
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[6]=~(~flag[6]+124922540%12);
	sub_635();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_758();
	else
		exit(0);
}
void sub_633()	//depth: 634
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[10],b=1097145518&0xff,c=792000571&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_634();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_759();
	else
		exit(0);
}
void sub_632()	//depth: 633
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[0]=~(~flag[0]+1969971925%12);
	if((x-y)==(~(~x+y)))
		sub_633();
	else
		exit(0);
	sub_760();
	if((x-y)==(~(~x+y)))
		sub_761();
	else
		exit(0);
}
void sub_631()	//depth: 632
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[15]=~(~flag[15]+21089178%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_632();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_762();
	else
		exit(0);
}
void sub_630()	//depth: 631
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[2]=flag[2]+1550922538%12;
	if((x-y)==(~(~x+y)))
		sub_631();
	else
		exit(0);
	sub_763();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_764();
	else
		exit(0);
}
void sub_629()	//depth: 630
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=flag[3]^(632948299&0xff)^(1011979114&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_630();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_765();
	else
		exit(0);
	sub_766();
}
void sub_628()	//depth: 629
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[3],b=632948299&0xff,c=1011979114&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_629();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_767();
	else
		exit(0);
	sub_768();
	sub_769();
}
void sub_627()	//depth: 628
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[1]=flag[1]^(546782996&0xff)^(2013701276&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_628();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_770();
	else
		exit(0);
	sub_771();
}
void sub_626()	//depth: 627
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[1],b=546782996&0xff,c=2013701276&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_627();
	else
		exit(0);
	sub_772();
}
void sub_625()	//depth: 626
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[11]=flag[11]^(1216166319&0xff)^(1804120982&0xff);
	sub_626();
	sub_773();
	if((x-y)==(~(~x+y)))
		sub_774();
	else
		exit(0);
}
void sub_624()	//depth: 625
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[11],b=1216166319&0xff,c=1804120982&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_625();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_775();
	else
		exit(0);
}
void sub_623()	//depth: 624
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[2]=~(~flag[2]+1550922538%12);
	sub_624();
	sub_776();
}
void sub_622()	//depth: 623
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[17]=flag[17]^(875950681&0xff)^(379203680&0xff);
	if((x-y)==(~(~x+y)))
		sub_623();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_777();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_778();
	else
		exit(0);
	sub_779();
}
void sub_621()	//depth: 622
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[17],b=875950681&0xff,c=379203680&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_622();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_780();
	else
		exit(0);
	sub_781();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_782();
	else
		exit(0);
}
void sub_620()	//depth: 621
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[1]=~(~flag[1]-1938515975%12);
	if((x-y)==(~(~x+y)))
		sub_621();
	else
		exit(0);
	sub_783();
}
void sub_619()	//depth: 620
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[1]=~(~flag[1]+1938515975%12);
	sub_620();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_784();
	else
		exit(0);
	sub_785();
	sub_786();
}
void sub_618()	//depth: 619
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[1],b=997730902&0xff,c=351596287&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_619();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_787();
	else
		exit(0);
	sub_788();
}
void sub_617()	//depth: 618
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[8]=~(~flag[8]-1649140014%12);
	if((x-y)==(~(~x+y)))
		sub_618();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_789();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_790();
	else
		exit(0);
	sub_791();
}
void sub_616()	//depth: 617
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[13]=flag[13]^(379508845&0xff)^(875765337&0xff);
	sub_617();
	sub_792();
}
void sub_615()	//depth: 616
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[13],b=379508845&0xff,c=875765337&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_616();
	else
		exit(0);
	sub_793();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_794();
	else
		exit(0);
	sub_795();
}
void sub_614()	//depth: 615
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[8]=~(~flag[8]+1649140014%12);
	sub_615();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_796();
	else
		exit(0);
	sub_797();
}
void sub_613()	//depth: 614
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[7]=flag[7]^(1923222378&0xff)^(1443270861&0xff);
	sub_614();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_798();
	else
		exit(0);
}
void sub_612()	//depth: 613
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[7],b=1923222378&0xff,c=1443270861&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_613();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_799();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_800();
	else
		exit(0);
}
void sub_611()	//depth: 612
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[10]=flag[10]^(1839500091&0xff)^(696133713&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_612();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_801();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_802();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_803();
	else
		exit(0);
}
void sub_610()	//depth: 611
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[12]=flag[12]^(792844642&0xff)^(882015358&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_611();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_804();
	else
		exit(0);
	sub_805();
	if((x-y)==(~(~x+y)))
		sub_806();
	else
		exit(0);
}
void sub_609()	//depth: 610
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[8]=flag[8]^(1398396212&0xff)^(2002726807&0xff);
	sub_610();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_807();
	else
		exit(0);
	sub_808();
	sub_809();
}
void sub_608()	//depth: 609
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[0]=flag[0]^(397663380&0xff)^(1928980158&0xff);
	sub_609();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_810();
	else
		exit(0);
}
void sub_607()	//depth: 608
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[14]=flag[14]+2134516070%12;
	sub_608();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_811();
	else
		exit(0);
}
void sub_606()	//depth: 607
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[14]=~(~flag[14]+2134516070%12);
	if((x-y)==(~(~x+y)))
		sub_607();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_812();
	else
		exit(0);
}
void sub_605()	//depth: 606
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[0],b=397663380&0xff,c=1928980158&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_606();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_813();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_814();
	else
		exit(0);
}
void sub_604()	//depth: 605
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[17]=~(~flag[17]-1708262893%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_605();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_815();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_816();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_817();
	else
		exit(0);
}
void sub_603()	//depth: 604
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[6]=flag[6]+585259769%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_604();
	else
		exit(0);
	sub_818();
}
void sub_602()	//depth: 603
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[17]=flag[17]^(595539704&0xff)^(638980371&0xff);
	sub_603();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_819();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_820();
	else
		exit(0);
}
void sub_601()	//depth: 602
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[17],b=595539704&0xff,c=638980371&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_602();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_821();
	else
		exit(0);
}
void sub_600()	//depth: 601
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[13]=flag[13]^(1924132891&0xff)^(1977810650&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_601();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_822();
	else
		exit(0);
}
void sub_599()	//depth: 600
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[17]=~(~flag[17]-1201546160%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_600();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_823();
	else
		exit(0);
}
void sub_598()	//depth: 599
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=flag[15]+65944471%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_599();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_824();
	else
		exit(0);
}
void sub_597()	//depth: 598
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[2]=flag[2]^(298347089&0xff)^(1396766271&0xff);
	sub_598();
	sub_825();
}
void sub_596()	//depth: 597
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[2],b=298347089&0xff,c=1396766271&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_597();
	else
		exit(0);
	sub_826();
	sub_827();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_828();
	else
		exit(0);
}
void sub_595()	//depth: 596
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[7]=~(~flag[7]-1669392710%12);
	sub_596();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_829();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_830();
	else
		exit(0);
	sub_831();
}
void sub_594()	//depth: 595
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[6]=flag[6]^(1846409958&0xff)^(1890046803&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_595();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_832();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_833();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_834();
	else
		exit(0);
}
void sub_593()	//depth: 594
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[6]=flag[6]+1958130530%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_594();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_835();
	else
		exit(0);
}
void sub_592()	//depth: 593
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[6]=~(~flag[6]+1958130530%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_593();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_836();
	else
		exit(0);
}
void sub_591()	//depth: 592
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[10]=flag[10]^(623402865&0xff)^(262643897&0xff);
	if((x-y)==(~(~x+y)))
		sub_592();
	else
		exit(0);
	sub_837();
}
void sub_590()	//depth: 591
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[6]=~(~flag[6]-777192030%12);
	sub_591();
	sub_838();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_839();
	else
		exit(0);
}
void sub_589()	//depth: 590
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[10]=~(~flag[10]-1266925928%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_590();
	else
		exit(0);
	sub_840();
}
void sub_588()	//depth: 589
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[10]=~(~flag[10]+1266925928%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_589();
	else
		exit(0);
	sub_841();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_842();
	else
		exit(0);
}
void sub_587()	//depth: 588
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[6]=~(~flag[6]+777192030%12);
	if((x-y)==(~(~x+y)))
		sub_588();
	else
		exit(0);
	sub_843();
}
void sub_586()	//depth: 587
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[8]=flag[8]^(1168550104&0xff)^(843872936&0xff);
	if((x-y)==(~(~x+y)))
		sub_587();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_844();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_845();
	else
		exit(0);
}
void sub_585()	//depth: 586
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[8],b=1168550104&0xff,c=843872936&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_586();
	if((x-y)==(~(~x+y)))
		sub_846();
	else
		exit(0);
	sub_847();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_848();
	else
		exit(0);
}
void sub_584()	//depth: 585
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[4]=flag[4]^(333107887&0xff)^(337882201&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_585();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_849();
	else
		exit(0);
	sub_850();
}
void sub_583()	//depth: 584
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[4],b=333107887&0xff,c=337882201&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_584();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_851();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_852();
	else
		exit(0);
}
void sub_582()	//depth: 583
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[14]=~(~flag[14]-1783340012%12);
	sub_583();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_853();
	else
		exit(0);
}
void sub_581()	//depth: 582
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[14]=~(~flag[14]+1783340012%12);
	sub_582();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_854();
	else
		exit(0);
	sub_855();
}
void sub_580()	//depth: 581
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[10],b=623402865&0xff,c=262643897&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_581();
	if((x-y)==(~(~x+y)))
		sub_856();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_857();
	else
		exit(0);
}
void sub_579()	//depth: 580
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[6],b=1846409958&0xff,c=1890046803&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_580();
	sub_858();
	if((x-y)==(~(~x+y)))
		sub_859();
	else
		exit(0);
}
void sub_578()	//depth: 579
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[7]=~(~flag[7]+1669392710%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_579();
	else
		exit(0);
	sub_860();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_861();
	else
		exit(0);
	sub_862();
}
void sub_577()	//depth: 578
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[15]=~(~flag[15]+65944471%12);
	sub_578();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_863();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_864();
	else
		exit(0);
	sub_865();
}
void sub_576()	//depth: 577
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[3]=flag[3]+1132670672%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_577();
	else
		exit(0);
	sub_866();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_867();
	else
		exit(0);
}
void sub_575()	//depth: 576
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[3]=~(~flag[3]+1132670672%12);
	if((x-y)==(~(~x+y)))
		sub_576();
	else
		exit(0);
	sub_868();
	sub_869();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_870();
	else
		exit(0);
}
void sub_574()	//depth: 575
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[17]=~(~flag[17]+1201546160%12);
	sub_575();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_871();
	else
		exit(0);
	sub_872();
}
void sub_573()	//depth: 574
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[13],b=1924132891&0xff,c=1977810650&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_574();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_873();
	else
		exit(0);
	sub_874();
}
void sub_572()	//depth: 573
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[6]=flag[6]^(1583099580&0xff)^(1360989818&0xff);
	if((x-y)==(~(~x+y)))
		sub_573();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_875();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_876();
	else
		exit(0);
}
void sub_571()	//depth: 572
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[18]=flag[18]+460631175%12;
	sub_572();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_877();
	else
		exit(0);
	sub_878();
}
void sub_570()	//depth: 571
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[19]=flag[19]^(596713375&0xff)^(984740769&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_571();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_879();
	else
		exit(0);
	sub_880();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_881();
	else
		exit(0);
}
void sub_569()	//depth: 570
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[19],b=596713375&0xff,c=984740769&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_570();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_882();
	else
		exit(0);
}
void sub_568()	//depth: 569
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[18]=~(~flag[18]+460631175%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_569();
	else
		exit(0);
	sub_883();
	if((x-y)==(~(~x+y)))
		sub_884();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_885();
	else
		exit(0);
}
void sub_567()	//depth: 568
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[12]=flag[12]+163015530%12;
	if((x-y)==(~(~x+y)))
		sub_568();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_886();
	else
		exit(0);
}
void sub_566()	//depth: 567
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[14]=~(~flag[14]-2099535477%12);
	sub_567();
	sub_887();
}
void sub_565()	//depth: 566
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[14]=~(~flag[14]+2099535477%12);
	sub_566();
	sub_888();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_889();
	else
		exit(0);
	sub_890();
}
void sub_564()	//depth: 565
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[18]=~(~flag[18]-2019458990%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_565();
	else
		exit(0);
	sub_891();
	if((x-y)==(~(~x+y)))
		sub_892();
	else
		exit(0);
}
void sub_563()	//depth: 564
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[10]=flag[10]^(327665379&0xff)^(1421989618&0xff);
	if((x-y)==(~(~x+y)))
		sub_564();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_893();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_894();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_895();
	else
		exit(0);
}
void sub_562()	//depth: 563
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[10],b=327665379&0xff,c=1421989618&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_563();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_896();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_897();
	else
		exit(0);
	sub_898();
}
void sub_561()	//depth: 562
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[18]=~(~flag[18]+2019458990%12);
	sub_562();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_899();
	else
		exit(0);
}
void sub_560()	//depth: 561
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[12]=~(~flag[12]+163015530%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_561();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_900();
	else
		exit(0);
	sub_901();
}
void sub_559()	//depth: 560
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[6],b=1583099580&0xff,c=1360989818&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_560();
	else
		exit(0);
	sub_902();
	if((x-y)==(~(~x+y)))
		sub_903();
	else
		exit(0);
	sub_904();
}
void sub_558()	//depth: 559
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[6]=~(~flag[6]+585259769%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_559();
	else
		exit(0);
	sub_905();
	sub_906();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_907();
	else
		exit(0);
}
void sub_557()	//depth: 558
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[3]=flag[3]^(10449163&0xff)^(1054475655&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_558();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_908();
	else
		exit(0);
}
void sub_556()	//depth: 557
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[3],b=10449163&0xff,c=1054475655&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_557();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_909();
	else
		exit(0);
	sub_910();
	sub_911();
}
void sub_555()	//depth: 556
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[17]=~(~flag[17]+1708262893%12);
	if((x-y)==(~(~x+y)))
		sub_556();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_912();
	else
		exit(0);
	sub_913();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_914();
	else
		exit(0);
}
void sub_554()	//depth: 555
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[8],b=1398396212&0xff,c=2002726807&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_555();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_915();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_916();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_917();
	else
		exit(0);
}
void sub_553()	//depth: 554
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[12],b=792844642&0xff,c=882015358&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_554();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_918();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_919();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_920();
	else
		exit(0);
}
void sub_552()	//depth: 553
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[3]=flag[3]+1113367253%12;
	sub_553();
	if((x-y)==(~(~x+y)))
		sub_921();
	else
		exit(0);
	sub_922();
}
void sub_551()	//depth: 552
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[3]=~(~flag[3]+1113367253%12);
	if((x-y)==(~(~x+y)))
		sub_552();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_923();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_924();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_925();
	else
		exit(0);
}
void sub_550()	//depth: 551
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[8]=~(~flag[8]-896348347%12);
	sub_551();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_926();
	else
		exit(0);
	sub_927();
}
void sub_549()	//depth: 550
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[0]=flag[0]+1836417005%12;
	if((x-y)==(~(~x+y)))
		sub_550();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_928();
	else
		exit(0);
	sub_929();
}
void sub_548()	//depth: 549
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[0]=~(~flag[0]+1836417005%12);
	sub_549();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_930();
	else
		exit(0);
}
void sub_547()	//depth: 548
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[2]=flag[2]^(1945468223&0xff)^(1782884915&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_548();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_931();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_932();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_933();
	else
		exit(0);
}
void sub_546()	//depth: 547
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[3]=flag[3]^(419262829&0xff)^(2115986000&0xff);
	sub_547();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_934();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_935();
	else
		exit(0);
}
void sub_545()	//depth: 546
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[3],b=419262829&0xff,c=2115986000&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_546();
	else
		exit(0);
	sub_936();
	sub_937();
	sub_938();
}
void sub_544()	//depth: 545
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[2],b=1945468223&0xff,c=1782884915&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_545();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_939();
	else
		exit(0);
}
void sub_543()	//depth: 544
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[9]=flag[9]^(1157538266&0xff)^(718488376&0xff);
	sub_544();
	sub_940();
	sub_941();
	if((x-y)==(~(~x+y)))
		sub_942();
	else
		exit(0);
}
void sub_542()	//depth: 543
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[5]=flag[5]^(732338997&0xff)^(830046307&0xff);
	sub_543();
	sub_943();
	sub_944();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_945();
	else
		exit(0);
}
void sub_541()	//depth: 542
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[21]=flag[21]^(153867834&0xff)^(433731854&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_542();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_946();
	else
		exit(0);
}
void sub_540()	//depth: 541
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[21],b=153867834&0xff,c=433731854&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_541();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_947();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_948();
	else
		exit(0);
}
void sub_539()	//depth: 540
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[16]=flag[16]+1780405102%12;
	sub_540();
	sub_949();
	sub_950();
}
void sub_538()	//depth: 539
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[16]=~(~flag[16]+1780405102%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_539();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_951();
	else
		exit(0);
}
void sub_537()	//depth: 538
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[17]=flag[17]^(1227692839&0xff)^(514513583&0xff);
	sub_538();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_952();
	else
		exit(0);
}
void sub_536()	//depth: 537
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=flag[8]+415804996%12;
	sub_537();
	sub_953();
	if((x-y)==(~(~x+y)))
		sub_954();
	else
		exit(0);
}
void sub_535()	//depth: 536
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=flag[7]+1083498673%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_536();
	else
		exit(0);
	sub_955();
}
void sub_534()	//depth: 535
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[7]=~(~flag[7]+1083498673%12);
	sub_535();
	sub_956();
	sub_957();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_958();
	else
		exit(0);
}
void sub_533()	//depth: 534
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=~(~flag[8]+415804996%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_534();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_959();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_960();
	else
		exit(0);
}
void sub_532()	//depth: 533
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[17],b=1227692839&0xff,c=514513583&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_533();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_961();
	else
		exit(0);
	sub_962();
}
void sub_531()	//depth: 532
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[6]=~(~flag[6]-1385312546%12);
	sub_532();
	sub_963();
	if((x-y)==(~(~x+y)))
		sub_964();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_965();
	else
		exit(0);
}
void sub_530()	//depth: 531
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[5]=flag[5]^(637832460&0xff)^(1823138264&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_531();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_966();
	else
		exit(0);
}
void sub_529()	//depth: 530
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[5],b=637832460&0xff,c=1823138264&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_530();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_967();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_968();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_969();
	else
		exit(0);
}
void sub_528()	//depth: 529
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=flag[7]^(1836813458&0xff)^(1562097213&0xff);
	sub_529();
	sub_970();
}
void sub_527()	//depth: 528
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[13]=~(~flag[13]-80529049%12);
	sub_528();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_971();
	else
		exit(0);
	sub_972();
}
void sub_526()	//depth: 527
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[13]=~(~flag[13]+80529049%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_527();
	else
		exit(0);
	sub_973();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_974();
	else
		exit(0);
}
void sub_525()	//depth: 526
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[7],b=1836813458&0xff,c=1562097213&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_526();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_975();
	else
		exit(0);
	sub_976();
	sub_977();
}
void sub_524()	//depth: 525
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[6]=~(~flag[6]+1385312546%12);
	sub_525();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_978();
	else
		exit(0);
}
void sub_523()	//depth: 524
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[19]=~(~flag[19]-2014194113%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_524();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_979();
	else
		exit(0);
}
void sub_522()	//depth: 523
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[19]=~(~flag[19]+2014194113%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_523();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_980();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_981();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_982();
	else
		exit(0);
}
void sub_521()	//depth: 522
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[5],b=732338997&0xff,c=830046307&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_522();
	else
		exit(0);
	sub_983();
}
void sub_520()	//depth: 521
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[14]=flag[14]+1221721025%12;
	sub_521();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_984();
	else
		exit(0);
	sub_985();
}
void sub_519()	//depth: 520
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[4]=flag[4]+1012098582%12;
	sub_520();
	if((x-y)==(~(~x+y)))
		sub_986();
	else
		exit(0);
	sub_987();
	sub_988();
}
void sub_518()	//depth: 519
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[5]=flag[5]+1760844879%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_519();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_989();
	else
		exit(0);
}
void sub_517()	//depth: 518
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[5]=~(~flag[5]+1760844879%12);
	sub_518();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_990();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_991();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_992();
	else
		exit(0);
}
void sub_516()	//depth: 517
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[4]=~(~flag[4]+1012098582%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_517();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_993();
	else
		exit(0);
	sub_994();
}
void sub_515()	//depth: 516
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[14]=~(~flag[14]+1221721025%12);
	sub_516();
	if((x-y)==(~(~x+y)))
		sub_995();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_996();
	else
		exit(0);
}
void sub_514()	//depth: 515
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[9],b=1157538266&0xff,c=718488376&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_515();
	else
		exit(0);
	sub_997();
}
void sub_513()	//depth: 514
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[4]=~(~flag[4]-923563698%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_514();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_998();
	else
		exit(0);
	sub_999();
	sub_1000();
}
void sub_512()	//depth: 513
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[4]=~(~flag[4]+923563698%12);
	if((x-y)==(~(~x+y)))
		sub_513();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1001();
	else
		exit(0);
	sub_1002();
}
void sub_511()	//depth: 512
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[17]=flag[17]^(929593439&0xff)^(1675558756&0xff);
	sub_512();
	if((x-y)==(~(~x+y)))
		sub_1003();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1004();
	else
		exit(0);
	sub_1005();
}
void sub_510()	//depth: 511
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[17],b=929593439&0xff,c=1675558756&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_511();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1006();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1007();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1008();
	else
		exit(0);
}
void sub_509()	//depth: 510
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[8]=~(~flag[8]+896348347%12);
	if((x-y)==(~(~x+y)))
		sub_510();
	else
		exit(0);
	sub_1009();
}
void sub_508()	//depth: 509
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[18]=~(~flag[18]-748634173%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_509();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1010();
	else
		exit(0);
}
void sub_507()	//depth: 508
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[18]=~(~flag[18]+748634173%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_508();
	else
		exit(0);
	sub_1011();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1012();
	else
		exit(0);
	sub_1013();
}
void sub_506()	//depth: 507
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[5]=flag[5]^(555589733&0xff)^(347302424&0xff);
	sub_507();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1014();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1015();
	else
		exit(0);
}
void sub_505()	//depth: 506
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[5],b=555589733&0xff,c=347302424&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_506();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1016();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1017();
	else
		exit(0);
	sub_1018();
}
void sub_504()	//depth: 505
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[10],b=1839500091&0xff,c=696133713&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_505();
	sub_1019();
	sub_1020();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1021();
	else
		exit(0);
}
void sub_503()	//depth: 504
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[11],b=633563198&0xff,c=1747532293&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_504();
	sub_1022();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1023();
	else
		exit(0);
	sub_1024();
}
void sub_502()	//depth: 503
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[10]=~(~flag[10]+1990967491%12);
	sub_503();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1025();
	else
		exit(0);
}
void sub_501()	//depth: 502
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[4]=flag[4]^(1557241553&0xff)^(1164951254&0xff);
	sub_502();
	sub_1026();
}
void sub_500()	//depth: 501
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[4]=flag[4]^(971044485&0xff)^(2054658967&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_501();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1027();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1028();
	else
		exit(0);
}
void sub_499()	//depth: 500
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[4],b=971044485&0xff,c=2054658967&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_500();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1029();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1030();
	else
		exit(0);
}
void sub_498()	//depth: 499
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[4]=~(~flag[4]-1480564505%12);
	if((x-y)==(~(~x+y)))
		sub_499();
	else
		exit(0);
	sub_1031();
	if((x-y)==(~(~x+y)))
		sub_1032();
	else
		exit(0);
}
void sub_497()	//depth: 498
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[21]=flag[21]^(1323622595&0xff)^(951130635&0xff);
	if((x-y)==(~(~x+y)))
		sub_498();
	else
		exit(0);
	sub_1033();
	if((x-y)==(~(~x+y)))
		sub_1034();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1035();
	else
		exit(0);
}
void sub_496()	//depth: 497
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[21],b=1323622595&0xff,c=951130635&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_497();
	else
		exit(0);
	sub_1036();
}
void sub_495()	//depth: 496
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[4]=~(~flag[4]+1480564505%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_496();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1037();
	else
		exit(0);
	sub_1038();
}
void sub_494()	//depth: 495
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[17]=flag[17]^(1965349876&0xff)^(15003173&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_495();
	else
		exit(0);
	sub_1039();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1040();
	else
		exit(0);
	sub_1041();
}
void sub_493()	//depth: 494
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[17],b=1965349876&0xff,c=15003173&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_494();
	else
		exit(0);
	sub_1042();
	if((x-y)==(~(~x+y)))
		sub_1043();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1044();
	else
		exit(0);
}
void sub_492()	//depth: 493
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[3]=flag[3]^(1448388356&0xff)^(708959574&0xff);
	sub_493();
	sub_1045();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1046();
	else
		exit(0);
}
void sub_491()	//depth: 492
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[3],b=1448388356&0xff,c=708959574&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_492();
	else
		exit(0);
	sub_1047();
}
void sub_490()	//depth: 491
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[4],b=1557241553&0xff,c=1164951254&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_491();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1048();
	else
		exit(0);
	sub_1049();
	sub_1050();
}
void sub_489()	//depth: 490
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[9]=flag[9]^(1251778797&0xff)^(949579090&0xff);
	if((x-y)==(~(~x+y)))
		sub_490();
	else
		exit(0);
	sub_1051();
}
void sub_488()	//depth: 489
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[9],b=1251778797&0xff,c=949579090&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_489();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1052();
	else
		exit(0);
}
void sub_487()	//depth: 488
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[17]=~(~flag[17]+958563974%12);
	sub_488();
	sub_1053();
	sub_1054();
	sub_1055();
}
void sub_486()	//depth: 487
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[21]=flag[21]^(205590399&0xff)^(307567651&0xff);
	sub_487();
	if((x-y)==(~(~x+y)))
		sub_1056();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1057();
	else
		exit(0);
	sub_1058();
}
void sub_485()	//depth: 486
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[16]=flag[16]^(455002333&0xff)^(584816281&0xff);
	if((x-y)==(~(~x+y)))
		sub_486();
	else
		exit(0);
	sub_1059();
	if((x-y)==(~(~x+y)))
		sub_1060();
	else
		exit(0);
}
void sub_484()	//depth: 485
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[21]=flag[21]+809784016%12;
	sub_485();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1061();
	else
		exit(0);
	sub_1062();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1063();
	else
		exit(0);
}
void sub_483()	//depth: 484
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[18]=flag[18]^(533303605&0xff)^(495451954&0xff);
	sub_484();
	sub_1064();
}
void sub_482()	//depth: 483
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[18],b=533303605&0xff,c=495451954&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_483();
	else
		exit(0);
	sub_1065();
}
void sub_481()	//depth: 482
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[21]=~(~flag[21]+809784016%12);
	sub_482();
	sub_1066();
}
void sub_480()	//depth: 481
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[16]=flag[16]^(387812191&0xff)^(1460514740&0xff);
	sub_481();
	if((x-y)==(~(~x+y)))
		sub_1067();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1068();
	else
		exit(0);
	sub_1069();
}
void sub_479()	//depth: 480
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[16],b=387812191&0xff,c=1460514740&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_480();
	else
		exit(0);
	sub_1070();
}
void sub_478()	//depth: 479
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[16],b=455002333&0xff,c=584816281&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_479();
	else
		exit(0);
	sub_1071();
	sub_1072();
}
void sub_477()	//depth: 478
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[21],b=205590399&0xff,c=307567651&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_478();
	else
		exit(0);
	sub_1073();
	if((x-y)==(~(~x+y)))
		sub_1074();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1075();
	else
		exit(0);
}
void sub_476()	//depth: 477
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[18]=flag[18]^(688112896&0xff)^(643771113&0xff);
	sub_477();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1076();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1077();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1078();
	else
		exit(0);
}
void sub_475()	//depth: 476
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[18],b=688112896&0xff,c=643771113&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_476();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1079();
	else
		exit(0);
}
void sub_474()	//depth: 475
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[6]=flag[6]^(1606548495&0xff)^(1099579614&0xff);
	sub_475();
	sub_1080();
	if((x-y)==(~(~x+y)))
		sub_1081();
	else
		exit(0);
}
void sub_473()	//depth: 474
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[6],b=1606548495&0xff,c=1099579614&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_474();
	else
		exit(0);
	sub_1082();
	sub_1083();
}
void sub_472()	//depth: 473
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[9]=flag[9]+564993532%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_473();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1084();
	else
		exit(0);
}
void sub_471()	//depth: 472
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[9]=~(~flag[9]+564993532%12);
	if((x-y)==(~(~x+y)))
		sub_472();
	else
		exit(0);
	sub_1085();
	if((x-y)==(~(~x+y)))
		sub_1086();
	else
		exit(0);
}
void sub_470()	//depth: 471
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[9]=flag[9]+112624521%12;
	sub_471();
	sub_1087();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1088();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1089();
	else
		exit(0);
}
void sub_469()	//depth: 470
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[0]=~(~flag[0]-820045647%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_470();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1090();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1091();
	else
		exit(0);
}
void sub_468()	//depth: 469
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[12]=flag[12]+906450085%12;
	sub_469();
	sub_1092();
	if((x-y)==(~(~x+y)))
		sub_1093();
	else
		exit(0);
}
void sub_467()	//depth: 468
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[12]=~(~flag[12]+906450085%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_468();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1094();
	else
		exit(0);
	sub_1095();
}
void sub_466()	//depth: 467
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[17]=flag[17]+62562268%12;
	sub_467();
	if((x-y)==(~(~x+y)))
		sub_1096();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1097();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1098();
	else
		exit(0);
}
void sub_465()	//depth: 466
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[7]=flag[7]+1744623594%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_466();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1099();
	else
		exit(0);
}
void sub_464()	//depth: 465
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[7]=~(~flag[7]+1744623594%12);
	sub_465();
	sub_1100();
}
void sub_463()	//depth: 464
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[13]=flag[13]^(1748716498&0xff)^(263518289&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_464();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1101();
	else
		exit(0);
	sub_1102();
}
void sub_462()	//depth: 463
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[18]=flag[18]^(1796507311&0xff)^(1023707567&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_463();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1103();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1104();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1105();
	else
		exit(0);
}
void sub_461()	//depth: 462
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[18],b=1796507311&0xff,c=1023707567&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_462();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1106();
	else
		exit(0);
	sub_1107();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1108();
	else
		exit(0);
}
void sub_460()	//depth: 461
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(86329326&0xff)^(989799297&0xff);
	if((x-y)==(~(~x+y)))
		sub_461();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1109();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1110();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1111();
	else
		exit(0);
}
void sub_459()	//depth: 460
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[20]=flag[20]^(1156879182&0xff)^(104510321&0xff);
	sub_460();
	sub_1112();
}
void sub_458()	//depth: 459
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[19]=flag[19]^(1341056272&0xff)^(1831233422&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_459();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1113();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1114();
	else
		exit(0);
}
void sub_457()	//depth: 458
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[10]=flag[10]^(1220335184&0xff)^(757617112&0xff);
	sub_458();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1115();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1116();
	else
		exit(0);
}
void sub_456()	//depth: 457
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[16]=flag[16]^(1374011168&0xff)^(322485542&0xff);
	sub_457();
	sub_1117();
	sub_1118();
	sub_1119();
}
void sub_455()	//depth: 456
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[15]=flag[15]^(906910147&0xff)^(895013521&0xff);
	if((x-y)==(~(~x+y)))
		sub_456();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1120();
	else
		exit(0);
	sub_1121();
	if((x-y)==(~(~x+y)))
		sub_1122();
	else
		exit(0);
}
void sub_454()	//depth: 455
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[15],b=906910147&0xff,c=895013521&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_455();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1123();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1124();
	else
		exit(0);
}
void sub_453()	//depth: 454
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[16],b=1374011168&0xff,c=322485542&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_454();
	if((x-y)==(~(~x+y)))
		sub_1125();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1126();
	else
		exit(0);
}
void sub_452()	//depth: 453
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[12]=~(~flag[12]-1304960051%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_453();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1127();
	else
		exit(0);
}
void sub_451()	//depth: 452
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[11]=~(~flag[11]-1335295829%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_452();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1128();
	else
		exit(0);
	sub_1129();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1130();
	else
		exit(0);
}
void sub_450()	//depth: 451
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[13]=flag[13]^(1294568579&0xff)^(842762207&0xff);
	sub_451();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1131();
	else
		exit(0);
	sub_1132();
}
void sub_449()	//depth: 450
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[13],b=1294568579&0xff,c=842762207&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_450();
	sub_1133();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1134();
	else
		exit(0);
	sub_1135();
}
void sub_448()	//depth: 449
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[11]=~(~flag[11]+1335295829%12);
	sub_449();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1136();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1137();
	else
		exit(0);
	sub_1138();
}
void sub_447()	//depth: 448
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[12]=~(~flag[12]+1304960051%12);
	sub_448();
	sub_1139();
}
void sub_446()	//depth: 447
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[10],b=1220335184&0xff,c=757617112&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_447();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1140();
	else
		exit(0);
}
void sub_445()	//depth: 446
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[19],b=1341056272&0xff,c=1831233422&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_446();
	sub_1141();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1142();
	else
		exit(0);
}
void sub_444()	//depth: 445
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[20],b=1156879182&0xff,c=104510321&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_445();
	sub_1143();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1144();
	else
		exit(0);
	sub_1145();
}
void sub_443()	//depth: 444
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[18]=~(~flag[18]-140988182%12);
	sub_444();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1146();
	else
		exit(0);
}
void sub_442()	//depth: 443
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[18]=~(~flag[18]+140988182%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_443();
	else
		exit(0);
	sub_1147();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1148();
	else
		exit(0);
	sub_1149();
}
void sub_441()	//depth: 442
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[20]=~(~flag[20]-1949352710%12);
	sub_442();
	sub_1150();
	sub_1151();
	if((x-y)==(~(~x+y)))
		sub_1152();
	else
		exit(0);
}
void sub_440()	//depth: 441
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[20]=~(~flag[20]+1949352710%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_441();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1153();
	else
		exit(0);
	sub_1154();
	if((x-y)==(~(~x+y)))
		sub_1155();
	else
		exit(0);
}
void sub_439()	//depth: 440
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[21],b=86329326&0xff,c=989799297&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_440();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1156();
	else
		exit(0);
}
void sub_438()	//depth: 439
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[13],b=1748716498&0xff,c=263518289&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_439();
	else
		exit(0);
	sub_1157();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1158();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1159();
	else
		exit(0);
}
void sub_437()	//depth: 438
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[21]=flag[21]^(1228582656&0xff)^(365297287&0xff);
	sub_438();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1160();
	else
		exit(0);
}
void sub_436()	//depth: 437
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[15]=flag[15]+893121111%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_437();
	else
		exit(0);
	sub_1161();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1162();
	else
		exit(0);
}
void sub_435()	//depth: 436
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[6]=flag[6]^(1407367660&0xff)^(569006988&0xff);
	sub_436();
	sub_1163();
}
void sub_434()	//depth: 435
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[6],b=1407367660&0xff,c=569006988&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_435();
	else
		exit(0);
	sub_1164();
	sub_1165();
}
void sub_433()	//depth: 434
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[15]=~(~flag[15]+893121111%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_434();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1166();
	else
		exit(0);
}
void sub_432()	//depth: 433
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[0]=~(~flag[0]-664339917%12);
	if((x-y)==(~(~x+y)))
		sub_433();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1167();
	else
		exit(0);
	sub_1168();
	sub_1169();
}
void sub_431()	//depth: 432
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[18]=flag[18]+585018650%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_432();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1170();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1171();
	else
		exit(0);
}
void sub_430()	//depth: 431
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[18]=~(~flag[18]+585018650%12);
	sub_431();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1172();
	else
		exit(0);
	sub_1173();
}
void sub_429()	//depth: 430
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[9]=flag[9]+1151455918%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_430();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1174();
	else
		exit(0);
}
void sub_428()	//depth: 429
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[9]=~(~flag[9]+1151455918%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_429();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1175();
	else
		exit(0);
}
void sub_427()	//depth: 428
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[17]=~(~flag[17]-1388250031%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_428();
	else
		exit(0);
	sub_1176();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1177();
	else
		exit(0);
}
void sub_426()	//depth: 427
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[17]=~(~flag[17]+1388250031%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_427();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1178();
	else
		exit(0);
}
void sub_425()	//depth: 426
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[0]=~(~flag[0]+664339917%12);
	sub_426();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1179();
	else
		exit(0);
	sub_1180();
	if((x-y)==(~(~x+y)))
		sub_1181();
	else
		exit(0);
}
void sub_424()	//depth: 425
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[15]=flag[15]^(1865137079&0xff)^(1232106278&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_425();
	else
		exit(0);
	sub_1182();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1183();
	else
		exit(0);
}
void sub_423()	//depth: 424
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[15],b=1865137079&0xff,c=1232106278&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_424();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1184();
	else
		exit(0);
	sub_1185();
}
void sub_422()	//depth: 423
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[20]=flag[20]+1557193421%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_423();
	else
		exit(0);
	sub_1186();
}
void sub_421()	//depth: 422
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[13]=flag[13]^(1338754186&0xff)^(1714521363&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_422();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1187();
	else
		exit(0);
}
void sub_420()	//depth: 421
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[13],b=1338754186&0xff,c=1714521363&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_421();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1188();
	else
		exit(0);
	sub_1189();
	sub_1190();
}
void sub_419()	//depth: 420
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[20]=~(~flag[20]+1557193421%12);
	sub_420();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1191();
	else
		exit(0);
}
void sub_418()	//depth: 419
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[3]=flag[3]^(223604868&0xff)^(1754750960&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_419();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1192();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1193();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1194();
	else
		exit(0);
}
void sub_417()	//depth: 418
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[3],b=223604868&0xff,c=1754750960&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_418();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1195();
	else
		exit(0);
}
void sub_416()	//depth: 417
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[7]=flag[7]+1085758983%12;
	sub_417();
	sub_1196();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1197();
	else
		exit(0);
}
void sub_415()	//depth: 416
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[5]=flag[5]^(1650478801&0xff)^(566008736&0xff);
	if((x-y)==(~(~x+y)))
		sub_416();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1198();
	else
		exit(0);
	sub_1199();
	if((x-y)==(~(~x+y)))
		sub_1200();
	else
		exit(0);
}
void sub_414()	//depth: 415
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[15]=~(~flag[15]-1313143893%12);
	if((x-y)==(~(~x+y)))
		sub_415();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1201();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1202();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1203();
	else
		exit(0);
}
void sub_413()	//depth: 414
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[17]=flag[17]^(357381561&0xff)^(374992972&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_414();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1204();
	else
		exit(0);
}
void sub_412()	//depth: 413
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[17],b=357381561&0xff,c=374992972&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_413();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1205();
	else
		exit(0);
}
void sub_411()	//depth: 412
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[17]=flag[17]^(1575122548&0xff)^(952249700&0xff);
	sub_412();
	if((x-y)==(~(~x+y)))
		sub_1206();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1207();
	else
		exit(0);
}
void sub_410()	//depth: 411
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[17],b=1575122548&0xff,c=952249700&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_411();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1208();
	else
		exit(0);
}
void sub_409()	//depth: 410
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[15]=~(~flag[15]+1313143893%12);
	if((x-y)==(~(~x+y)))
		sub_410();
	else
		exit(0);
	sub_1209();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1210();
	else
		exit(0);
	sub_1211();
}
void sub_408()	//depth: 409
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[5],b=1650478801&0xff,c=566008736&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_409();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1212();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1213();
	else
		exit(0);
}
void sub_407()	//depth: 408
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[7]=~(~flag[7]+1085758983%12);
	sub_408();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1214();
	else
		exit(0);
	sub_1215();
}
void sub_406()	//depth: 407
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[20]=flag[20]^(1632490875&0xff)^(1316585879&0xff);
	sub_407();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1216();
	else
		exit(0);
	sub_1217();
	sub_1218();
}
void sub_405()	//depth: 406
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[14]=~(~flag[14]-1751414461%12);
	sub_406();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1219();
	else
		exit(0);
}
void sub_404()	//depth: 405
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[3]=flag[3]+1128515993%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_405();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1220();
	else
		exit(0);
	sub_1221();
}
void sub_403()	//depth: 404
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[3]=~(~flag[3]+1128515993%12);
	if((x-y)==(~(~x+y)))
		sub_404();
	else
		exit(0);
	sub_1222();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1223();
	else
		exit(0);
}
void sub_402()	//depth: 403
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[1]=flag[1]+1327328079%12;
	if((x-y)==(~(~x+y)))
		sub_403();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1224();
	else
		exit(0);
	sub_1225();
	if((x-y)==(~(~x+y)))
		sub_1226();
	else
		exit(0);
}
void sub_401()	//depth: 402
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[20]=flag[20]^(1941701362&0xff)^(968648431&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_402();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1227();
	else
		exit(0);
	sub_1228();
}
void sub_400()	//depth: 401
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[20],b=1941701362&0xff,c=968648431&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_401();
	else
		exit(0);
	sub_1229();
}
void sub_399()	//depth: 400
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[1]=~(~flag[1]+1327328079%12);
	sub_400();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1230();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1231();
	else
		exit(0);
}
void sub_398()	//depth: 399
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[3]=~(~flag[3]-726991171%12);
	if((x-y)==(~(~x+y)))
		sub_399();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1232();
	else
		exit(0);
}
void sub_397()	//depth: 398
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[20]=flag[20]+1381134573%12;
	if((x-y)==(~(~x+y)))
		sub_398();
	else
		exit(0);
	sub_1233();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1234();
	else
		exit(0);
}
void sub_396()	//depth: 397
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[21]=flag[21]^(422277074&0xff)^(94174876&0xff);
	if((x-y)==(~(~x+y)))
		sub_397();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1235();
	else
		exit(0);
}
void sub_395()	//depth: 396
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[7]=flag[7]^(660895714&0xff)^(71922319&0xff);
	sub_396();
	sub_1236();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1237();
	else
		exit(0);
}
void sub_394()	//depth: 395
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[7],b=660895714&0xff,c=71922319&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_395();
	else
		exit(0);
	sub_1238();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1239();
	else
		exit(0);
	sub_1240();
}
void sub_393()	//depth: 394
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[21],b=422277074&0xff,c=94174876&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_394();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1241();
	else
		exit(0);
}
void sub_392()	//depth: 393
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[7]=flag[7]^(111312935&0xff)^(5310692&0xff);
	sub_393();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1242();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1243();
	else
		exit(0);
}
void sub_391()	//depth: 392
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[7],b=111312935&0xff,c=5310692&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_392();
	sub_1244();
}
void sub_390()	//depth: 391
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=flag[15]+972997290%12;
	sub_391();
	sub_1245();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1246();
	else
		exit(0);
}
void sub_389()	//depth: 390
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[15]=~(~flag[15]+972997290%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_390();
	else
		exit(0);
	sub_1247();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1248();
	else
		exit(0);
}
void sub_388()	//depth: 389
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[8]=~(~flag[8]-392707368%12);
	sub_389();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1249();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1250();
	else
		exit(0);
	sub_1251();
}
void sub_387()	//depth: 388
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[10]=~(~flag[10]-1388369318%12);
	sub_388();
	sub_1252();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1253();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1254();
	else
		exit(0);
}
void sub_386()	//depth: 387
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[10]=~(~flag[10]+1388369318%12);
	sub_387();
	sub_1255();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1256();
	else
		exit(0);
}
void sub_385()	//depth: 386
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[17]=flag[17]^(1827602017&0xff)^(578331817&0xff);
	sub_386();
	if((x-y)==(~(~x+y)))
		sub_1257();
	else
		exit(0);
}
void sub_384()	//depth: 385
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[17],b=1827602017&0xff,c=578331817&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_385();
	else
		exit(0);
	sub_1258();
	sub_1259();
}
void sub_383()	//depth: 384
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[5]=~(~flag[5]-589614376%12);
	if((x-y)==(~(~x+y)))
		sub_384();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1260();
	else
		exit(0);
}
void sub_382()	//depth: 383
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[5]=~(~flag[5]+589614376%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_383();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1261();
	else
		exit(0);
}
void sub_381()	//depth: 382
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[8]=~(~flag[8]+392707368%12);
	if((x-y)==(~(~x+y)))
		sub_382();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1262();
	else
		exit(0);
}
void sub_380()	//depth: 381
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[20]=~(~flag[20]+1381134573%12);
	if((x-y)==(~(~x+y)))
		sub_381();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1263();
	else
		exit(0);
}
void sub_379()	//depth: 380
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[3]=~(~flag[3]+726991171%12);
	sub_380();
	sub_1264();
	if((x-y)==(~(~x+y)))
		sub_1265();
	else
		exit(0);
	sub_1266();
}
void sub_378()	//depth: 379
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[14]=~(~flag[14]+1751414461%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_379();
	else
		exit(0);
	sub_1267();
	sub_1268();
	sub_1269();
}
void sub_377()	//depth: 378
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[21]=flag[21]^(12248232&0xff)^(197678164&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_378();
	else
		exit(0);
	sub_1270();
}
void sub_376()	//depth: 377
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[21],b=12248232&0xff,c=197678164&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_377();
	sub_1271();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1272();
	else
		exit(0);
	sub_1273();
}
void sub_375()	//depth: 376
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[20],b=1632490875&0xff,c=1316585879&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_376();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1274();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1275();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1276();
	else
		exit(0);
}
void sub_374()	//depth: 375
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[18]=~(~flag[18]-1656026080%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_375();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1277();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1278();
	else
		exit(0);
}
void sub_373()	//depth: 374
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[14]=flag[14]+536768490%12;
	sub_374();
	sub_1279();
}
void sub_372()	//depth: 373
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[21]=flag[21]^(1757567273&0xff)^(1494654630&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_373();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1280();
	else
		exit(0);
	sub_1281();
}
void sub_371()	//depth: 372
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[11]=flag[11]^(1943735394&0xff)^(2118319385&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_372();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1282();
	else
		exit(0);
}
void sub_370()	//depth: 371
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[11],b=1943735394&0xff,c=2118319385&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_371();
	else
		exit(0);
	sub_1283();
}
void sub_369()	//depth: 370
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[21],b=1757567273&0xff,c=1494654630&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_370();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1284();
	else
		exit(0);
	sub_1285();
	sub_1286();
}
void sub_368()	//depth: 369
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[14]=~(~flag[14]+536768490%12);
	sub_369();
	if((x-y)==(~(~x+y)))
		sub_1287();
	else
		exit(0);
}
void sub_367()	//depth: 368
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[1]=flag[1]^(762459140&0xff)^(580257335&0xff);
	sub_368();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1288();
	else
		exit(0);
	sub_1289();
}
void sub_366()	//depth: 367
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[1],b=762459140&0xff,c=580257335&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_367();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1290();
	else
		exit(0);
	sub_1291();
}
void sub_365()	//depth: 366
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[18]=flag[18]+478235217%12;
	sub_366();
	sub_1292();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1293();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1294();
	else
		exit(0);
}
void sub_364()	//depth: 365
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[14]=flag[14]^(983626546&0xff)^(769532476&0xff);
	sub_365();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1295();
	else
		exit(0);
	sub_1296();
	sub_1297();
}
void sub_363()	//depth: 364
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[14],b=983626546&0xff,c=769532476&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_364();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1298();
	else
		exit(0);
}
void sub_362()	//depth: 363
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[18]=~(~flag[18]+478235217%12);
	sub_363();
	sub_1299();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1300();
	else
		exit(0);
}
void sub_361()	//depth: 362
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[18]=flag[18]^(273700890&0xff)^(1305605930&0xff);
	sub_362();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1301();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1302();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1303();
	else
		exit(0);
}
void sub_360()	//depth: 361
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[18],b=273700890&0xff,c=1305605930&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_361();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1304();
	else
		exit(0);
}
void sub_359()	//depth: 360
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[2]=flag[2]^(1835646081&0xff)^(1820311728&0xff);
	sub_360();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1305();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1306();
	else
		exit(0);
}
void sub_358()	//depth: 359
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[6]=flag[6]^(2022221602&0xff)^(1064459884&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_359();
	else
		exit(0);
	sub_1307();
	sub_1308();
}
void sub_357()	//depth: 358
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[20]=~(~flag[20]-207668486%12);
	sub_358();
	sub_1309();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1310();
	else
		exit(0);
}
void sub_356()	//depth: 357
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[12]=flag[12]^(1679335002&0xff)^(55994610&0xff);
	sub_357();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1311();
	else
		exit(0);
	sub_1312();
	sub_1313();
}
void sub_355()	//depth: 356
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[12]=flag[12]^(248015&0xff)^(2052803400&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_356();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1314();
	else
		exit(0);
	sub_1315();
}
void sub_354()	//depth: 355
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[16]=flag[16]^(420502673&0xff)^(1375349780&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_355();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1316();
	else
		exit(0);
}
void sub_353()	//depth: 354
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[18]=flag[18]^(2028482303&0xff)^(217634323&0xff);
	sub_354();
	sub_1317();
}
void sub_352()	//depth: 353
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[18],b=2028482303&0xff,c=217634323&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_353();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1318();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1319();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1320();
	else
		exit(0);
}
void sub_351()	//depth: 352
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[3]=~(~flag[3]-1571746281%12);
	sub_352();
	if((x-y)==(~(~x+y)))
		sub_1321();
	else
		exit(0);
}
void sub_350()	//depth: 351
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[12]=flag[12]^(302327600&0xff)^(1644916116&0xff);
	if((x-y)==(~(~x+y)))
		sub_351();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1322();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1323();
	else
		exit(0);
	sub_1324();
}
void sub_349()	//depth: 350
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[9]=flag[9]^(1957680711&0xff)^(1210312328&0xff);
	sub_350();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1325();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1326();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1327();
	else
		exit(0);
}
void sub_348()	//depth: 349
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[11]=~(~flag[11]-260297700%12);
	sub_349();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1328();
	else
		exit(0);
	sub_1329();
	sub_1330();
}
void sub_347()	//depth: 348
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[11]=~(~flag[11]+260297700%12);
	if((x-y)==(~(~x+y)))
		sub_348();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1331();
	else
		exit(0);
}
void sub_346()	//depth: 347
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[12]=flag[12]^(732977743&0xff)^(700741498&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_347();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1332();
	else
		exit(0);
	sub_1333();
	sub_1334();
}
void sub_345()	//depth: 346
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[12],b=732977743&0xff,c=700741498&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_346();
	sub_1335();
	sub_1336();
	sub_1337();
}
void sub_344()	//depth: 345
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[9],b=1957680711&0xff,c=1210312328&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_345();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1338();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1339();
	else
		exit(0);
}
void sub_343()	//depth: 344
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[10]=flag[10]+553342939%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_344();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1340();
	else
		exit(0);
	sub_1341();
	if((x-y)==(~(~x+y)))
		sub_1342();
	else
		exit(0);
}
void sub_342()	//depth: 343
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[13]=~(~flag[13]-78771789%12);
	if((x-y)==(~(~x+y)))
		sub_343();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1343();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1344();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1345();
	else
		exit(0);
}
void sub_341()	//depth: 342
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[13]=~(~flag[13]+78771789%12);
	sub_342();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1346();
	else
		exit(0);
	sub_1347();
}
void sub_340()	//depth: 341
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[10]=~(~flag[10]+553342939%12);
	if((x-y)==(~(~x+y)))
		sub_341();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1348();
	else
		exit(0);
	sub_1349();
	if((x-y)==(~(~x+y)))
		sub_1350();
	else
		exit(0);
}
void sub_339()	//depth: 340
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[12],b=302327600&0xff,c=1644916116&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_340();
	else
		exit(0);
	sub_1351();
	sub_1352();
}
void sub_338()	//depth: 339
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[20]=flag[20]^(1763691737&0xff)^(1783587654&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_339();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1353();
	else
		exit(0);
}
void sub_337()	//depth: 338
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[20],b=1763691737&0xff,c=1783587654&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_338();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1354();
	else
		exit(0);
	sub_1355();
}
void sub_336()	//depth: 337
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[3]=~(~flag[3]+1571746281%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_337();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1356();
	else
		exit(0);
	sub_1357();
}
void sub_335()	//depth: 336
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[16],b=420502673&0xff,c=1375349780&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_336();
	sub_1358();
	sub_1359();
	sub_1360();
}
void sub_334()	//depth: 335
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[12],b=248015&0xff,c=2052803400&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_335();
	else
		exit(0);
	sub_1361();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1362();
	else
		exit(0);
	sub_1363();
}
void sub_333()	//depth: 334
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[9]=flag[9]^(109258152&0xff)^(1177141924&0xff);
	sub_334();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1364();
	else
		exit(0);
}
void sub_332()	//depth: 333
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[12]=flag[12]+826793482%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_333();
	else
		exit(0);
	sub_1365();
}
void sub_331()	//depth: 332
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[12]=~(~flag[12]+826793482%12);
	sub_332();
	sub_1366();
}
void sub_330()	//depth: 331
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[1]=~(~flag[1]-2133884204%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_331();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1367();
	else
		exit(0);
	sub_1368();
	if((x-y)==(~(~x+y)))
		sub_1369();
	else
		exit(0);
}
void sub_329()	//depth: 330
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[19]=flag[19]+1830798024%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_330();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1370();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1371();
	else
		exit(0);
	sub_1372();
}
void sub_328()	//depth: 329
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[19]=~(~flag[19]+1830798024%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_329();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1373();
	else
		exit(0);
	sub_1374();
	sub_1375();
}
void sub_327()	//depth: 328
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[6]=~(~flag[6]-222794118%12);
	sub_328();
	sub_1376();
}
void sub_326()	//depth: 327
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[13]=flag[13]^(1547451268&0xff)^(996114786&0xff);
	sub_327();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1377();
	else
		exit(0);
}
void sub_325()	//depth: 326
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[19]=flag[19]+1972318425%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_326();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1378();
	else
		exit(0);
	sub_1379();
}
void sub_324()	//depth: 325
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[19]=~(~flag[19]+1972318425%12);
	sub_325();
	if((x-y)==(~(~x+y)))
		sub_1380();
	else
		exit(0);
	sub_1381();
	sub_1382();
}
void sub_323()	//depth: 324
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[4]=~(~flag[4]-1032229597%12);
	if((x-y)==(~(~x+y)))
		sub_324();
	else
		exit(0);
	sub_1383();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1384();
	else
		exit(0);
	sub_1385();
}
void sub_322()	//depth: 323
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[4]=~(~flag[4]+1032229597%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_323();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1386();
	else
		exit(0);
	sub_1387();
}
void sub_321()	//depth: 322
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[13],b=1547451268&0xff,c=996114786&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_322();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1388();
	else
		exit(0);
	sub_1389();
	sub_1390();
}
void sub_320()	//depth: 321
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[14]=~(~flag[14]-327698356%12);
	sub_321();
	sub_1391();
	sub_1392();
}
void sub_319()	//depth: 320
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[14]=~(~flag[14]+327698356%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_320();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1393();
	else
		exit(0);
	sub_1394();
	sub_1395();
}
void sub_318()	//depth: 319
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[16]=~(~flag[16]-2014351099%12);
	sub_319();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1396();
	else
		exit(0);
}
void sub_317()	//depth: 318
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[3]=~(~flag[3]-116565327%12);
	if((x-y)==(~(~x+y)))
		sub_318();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1397();
	else
		exit(0);
}
void sub_316()	//depth: 317
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[20]=flag[20]^(1096995526&0xff)^(1610029976&0xff);
	if((x-y)==(~(~x+y)))
		sub_317();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1398();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1399();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1400();
	else
		exit(0);
}
void sub_315()	//depth: 316
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[18]=~(~flag[18]-1452506409%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_316();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1401();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1402();
	else
		exit(0);
}
void sub_314()	//depth: 315
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[18]=~(~flag[18]+1452506409%12);
	sub_315();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1403();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1404();
	else
		exit(0);
	sub_1405();
}
void sub_313()	//depth: 314
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[19]=flag[19]+1526375310%12;
	sub_314();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1406();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1407();
	else
		exit(0);
}
void sub_312()	//depth: 313
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[19]=~(~flag[19]+1526375310%12);
	sub_313();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1408();
	else
		exit(0);
}
void sub_311()	//depth: 312
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[20],b=1096995526&0xff,c=1610029976&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_312();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1409();
	else
		exit(0);
	sub_1410();
	if((x-y)==(~(~x+y)))
		sub_1411();
	else
		exit(0);
}
void sub_310()	//depth: 311
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[3]=~(~flag[3]+116565327%12);
	sub_311();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1412();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1413();
	else
		exit(0);
}
void sub_309()	//depth: 310
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[3]=flag[3]^(2047111748&0xff)^(1282763141&0xff);
	if((x-y)==(~(~x+y)))
		sub_310();
	else
		exit(0);
	sub_1414();
}
void sub_308()	//depth: 309
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[14]=~(~flag[14]-526244479%12);
	sub_309();
	sub_1415();
}
void sub_307()	//depth: 308
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=flag[15]^(1290630422&0xff)^(586301160&0xff);
	sub_308();
	sub_1416();
	sub_1417();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1418();
	else
		exit(0);
}
void sub_306()	//depth: 307
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[8]=flag[8]^(977492903&0xff)^(1693291056&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_307();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1419();
	else
		exit(0);
	sub_1420();
}
void sub_305()	//depth: 306
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[8],b=977492903&0xff,c=1693291056&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_306();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1421();
	else
		exit(0);
}
void sub_304()	//depth: 305
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[15],b=1290630422&0xff,c=586301160&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_305();
	else
		exit(0);
	sub_1422();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1423();
	else
		exit(0);
	sub_1424();
}
void sub_303()	//depth: 304
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[14]=~(~flag[14]+526244479%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_304();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1425();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1426();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1427();
	else
		exit(0);
}
void sub_302()	//depth: 303
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[0]=flag[0]^(950372433&0xff)^(948350152&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_303();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1428();
	else
		exit(0);
}
void sub_301()	//depth: 302
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[10]=flag[10]^(137400926&0xff)^(1606960697&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_302();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1429();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1430();
	else
		exit(0);
	sub_1431();
}
void sub_300()	//depth: 301
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[19]=flag[19]+79947978%12;
	if((x-y)==(~(~x+y)))
		sub_301();
	else
		exit(0);
	sub_1432();
}
void sub_299()	//depth: 300
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[0]=flag[0]^(612633729&0xff)^(2041081733&0xff);
	sub_300();
	sub_1433();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1434();
	else
		exit(0);
	sub_1435();
}
void sub_298()	//depth: 299
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[16]=flag[16]^(1158187698&0xff)^(1547565856&0xff);
	if((x-y)==(~(~x+y)))
		sub_299();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1436();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1437();
	else
		exit(0);
}
void sub_297()	//depth: 298
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[16],b=1158187698&0xff,c=1547565856&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_298();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1438();
	else
		exit(0);
}
void sub_296()	//depth: 297
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[0],b=612633729&0xff,c=2041081733&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_297();
	else
		exit(0);
	sub_1439();
}
void sub_295()	//depth: 296
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[19]=~(~flag[19]+79947978%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_296();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1440();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1441();
	else
		exit(0);
}
void sub_294()	//depth: 295
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[10],b=137400926&0xff,c=1606960697&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_295();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1442();
	else
		exit(0);
}
void sub_293()	//depth: 294
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[4]=flag[4]^(1664272891&0xff)^(1102530449&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_294();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1443();
	else
		exit(0);
	sub_1444();
	sub_1445();
}
void sub_292()	//depth: 293
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[11]=flag[11]^(2134129995&0xff)^(1952476047&0xff);
	sub_293();
	if((x-y)==(~(~x+y)))
		sub_1446();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1447();
	else
		exit(0);
}
void sub_291()	//depth: 292
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[7]=flag[7]^(922943660&0xff)^(2038532261&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_292();
	else
		exit(0);
	sub_1448();
}
void sub_290()	//depth: 291
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[4]=flag[4]^(1920330252&0xff)^(2142884044&0xff);
	if((x-y)==(~(~x+y)))
		sub_291();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1449();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1450();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1451();
	else
		exit(0);
}
void sub_289()	//depth: 290
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[4],b=1920330252&0xff,c=2142884044&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_290();
	sub_1452();
}
void sub_288()	//depth: 289
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[7],b=922943660&0xff,c=2038532261&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_289();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1453();
	else
		exit(0);
	sub_1454();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1455();
	else
		exit(0);
}
void sub_287()	//depth: 288
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[1]=~(~flag[1]-773861314%12);
	sub_288();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1456();
	else
		exit(0);
}
void sub_286()	//depth: 287
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[1]=~(~flag[1]+773861314%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_287();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1457();
	else
		exit(0);
}
void sub_285()	//depth: 286
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[11],b=2134129995&0xff,c=1952476047&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_286();
	else
		exit(0);
	sub_1458();
}
void sub_284()	//depth: 285
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[4],b=1664272891&0xff,c=1102530449&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_285();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1459();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1460();
	else
		exit(0);
}
void sub_283()	//depth: 284
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[12]=flag[12]^(849484542&0xff)^(2044618297&0xff);
	if((x-y)==(~(~x+y)))
		sub_284();
	else
		exit(0);
	sub_1461();
	if((x-y)==(~(~x+y)))
		sub_1462();
	else
		exit(0);
}
void sub_282()	//depth: 283
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[12],b=849484542&0xff,c=2044618297&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_283();
	else
		exit(0);
	sub_1463();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1464();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1465();
	else
		exit(0);
}
void sub_281()	//depth: 282
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[0],b=950372433&0xff,c=948350152&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_282();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1466();
	else
		exit(0);
	sub_1467();
	sub_1468();
}
void sub_280()	//depth: 281
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[3],b=2047111748&0xff,c=1282763141&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_281();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1469();
	else
		exit(0);
	sub_1470();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1471();
	else
		exit(0);
}
void sub_279()	//depth: 280
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[7]=~(~flag[7]-447459541%12);
	sub_280();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1472();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1473();
	else
		exit(0);
}
void sub_278()	//depth: 279
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[18]=~(~flag[18]-1661083806%12);
	if((x-y)==(~(~x+y)))
		sub_279();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1474();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1475();
	else
		exit(0);
	sub_1476();
}
void sub_277()	//depth: 278
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[14]=flag[14]+854898348%12;
	sub_278();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1477();
	else
		exit(0);
}
void sub_276()	//depth: 277
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[14]=~(~flag[14]+854898348%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_277();
	else
		exit(0);
	sub_1478();
	if((x-y)==(~(~x+y)))
		sub_1479();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1480();
	else
		exit(0);
}
void sub_275()	//depth: 276
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[2]=flag[2]+1136560034%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_276();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1481();
	else
		exit(0);
}
void sub_274()	//depth: 275
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[2]=~(~flag[2]+1136560034%12);
	if((x-y)==(~(~x+y)))
		sub_275();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1482();
	else
		exit(0);
}
void sub_273()	//depth: 274
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[18]=~(~flag[18]+1661083806%12);
	sub_274();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1483();
	else
		exit(0);
}
void sub_272()	//depth: 273
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[7]=~(~flag[7]+447459541%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_273();
	else
		exit(0);
	sub_1484();
	sub_1485();
}
void sub_271()	//depth: 272
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[14]=flag[14]+388846378%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_272();
	else
		exit(0);
	sub_1486();
	sub_1487();
	sub_1488();
}
void sub_270()	//depth: 271
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[14]=~(~flag[14]+388846378%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_271();
	else
		exit(0);
	sub_1489();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1490();
	else
		exit(0);
}
void sub_269()	//depth: 270
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[16]=~(~flag[16]+2014351099%12);
	sub_270();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1491();
	else
		exit(0);
}
void sub_268()	//depth: 269
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[6]=~(~flag[6]+222794118%12);
	sub_269();
	sub_1492();
	sub_1493();
	sub_1494();
}
void sub_267()	//depth: 268
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[1]=~(~flag[1]+2133884204%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_268();
	else
		exit(0);
	sub_1495();
}
void sub_266()	//depth: 267
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[17]=flag[17]^(488105771&0xff)^(423243306&0xff);
	sub_267();
	sub_1496();
	if((x-y)==(~(~x+y)))
		sub_1497();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1498();
	else
		exit(0);
}
void sub_265()	//depth: 266
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[17],b=488105771&0xff,c=423243306&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_266();
	else
		exit(0);
	sub_1499();
}
void sub_264()	//depth: 265
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[9],b=109258152&0xff,c=1177141924&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_265();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1500();
	else
		exit(0);
}
void sub_263()	//depth: 264
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[6]=flag[6]^(1615677624&0xff)^(939235213&0xff);
	if((x-y)==(~(~x+y)))
		sub_264();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1501();
	else
		exit(0);
	sub_1502();
}
void sub_262()	//depth: 263
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[6],b=1615677624&0xff,c=939235213&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_263();
	else
		exit(0);
	sub_1503();
	sub_1504();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1505();
	else
		exit(0);
}
void sub_261()	//depth: 262
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[12],b=1679335002&0xff,c=55994610&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_262();
	sub_1506();
}
void sub_260()	//depth: 261
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=~(~flag[20]+207668486%12);
	sub_261();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1507();
	else
		exit(0);
}
void sub_259()	//depth: 260
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[21]=flag[21]^(112595177&0xff)^(18565758&0xff);
	sub_260();
	if((x-y)==(~(~x+y)))
		sub_1508();
	else
		exit(0);
}
void sub_258()	//depth: 259
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[6]=flag[6]^(67489299&0xff)^(96129463&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_259();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1509();
	else
		exit(0);
}
void sub_257()	//depth: 258
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[6],b=67489299&0xff,c=96129463&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_258();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1510();
	else
		exit(0);
	sub_1511();
	sub_1512();
}
void sub_256()	//depth: 257
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[21],b=112595177&0xff,c=18565758&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_257();
	sub_1513();
	sub_1514();
	if((x-y)==(~(~x+y)))
		sub_1515();
	else
		exit(0);
}
void sub_255()	//depth: 256
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[6],b=2022221602&0xff,c=1064459884&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_256();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1516();
	else
		exit(0);
	sub_1517();
}
void sub_254()	//depth: 255
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[18]=flag[18]+326984154%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_255();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1518();
	else
		exit(0);
}
void sub_253()	//depth: 254
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[6]=flag[6]^(868400345&0xff)^(735735321&0xff);
	if((x-y)==(~(~x+y)))
		sub_254();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1519();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1520();
	else
		exit(0);
}
void sub_252()	//depth: 253
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[6],b=868400345&0xff,c=735735321&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_253();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1521();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1522();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1523();
	else
		exit(0);
}
void sub_251()	//depth: 252
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[18]=~(~flag[18]+326984154%12);
	sub_252();
	sub_1524();
}
void sub_250()	//depth: 251
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[2],b=1835646081&0xff,c=1820311728&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_251();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1525();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1526();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1527();
	else
		exit(0);
}
void sub_249()	//depth: 250
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[14]=flag[14]^(1141949806&0xff)^(451531732&0xff);
	if((x-y)==(~(~x+y)))
		sub_250();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1528();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1529();
	else
		exit(0);
}
void sub_248()	//depth: 249
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[14],b=1141949806&0xff,c=451531732&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_249();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1530();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1531();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1532();
	else
		exit(0);
}
void sub_247()	//depth: 248
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[18]=~(~flag[18]+1656026080%12);
	sub_248();
	sub_1533();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1534();
	else
		exit(0);
}
void sub_246()	//depth: 247
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	unsigned char a=flag[21],b=1228582656&0xff,c=365297287&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_247();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1535();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1536();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1537();
	else
		exit(0);
}
void sub_245()	//depth: 246
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[1]=~(~flag[1]-1377908386%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_246();
	else
		exit(0);
	sub_1538();
	sub_1539();
	sub_1540();
}
void sub_244()	//depth: 245
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[1]=~(~flag[1]+1377908386%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_245();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1541();
	else
		exit(0);
	sub_1542();
	sub_1543();
}
void sub_243()	//depth: 244
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[17]=~(~flag[17]+62562268%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_244();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1544();
	else
		exit(0);
}
void sub_242()	//depth: 243
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[0]=~(~flag[0]+820045647%12);
	sub_243();
	sub_1545();
	if((x-y)==(~(~x+y)))
		sub_1546();
	else
		exit(0);
}
void sub_241()	//depth: 242
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[2]=flag[2]^(33402689&0xff)^(589977096&0xff);
	sub_242();
	if((x-y)==(~(~x+y)))
		sub_1547();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1548();
	else
		exit(0);
}
void sub_240()	//depth: 241
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[2],b=33402689&0xff,c=589977096&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_241();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1549();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1550();
	else
		exit(0);
	sub_1551();
}
void sub_239()	//depth: 240
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[2]=flag[2]^(2068275813&0xff)^(1807188350&0xff);
	sub_240();
	sub_1552();
}
void sub_238()	//depth: 239
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[2],b=2068275813&0xff,c=1807188350&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_239();
	else
		exit(0);
	sub_1553();
}
void sub_237()	//depth: 238
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[8]=flag[8]+617082290%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_238();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1554();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1555();
	else
		exit(0);
}
void sub_236()	//depth: 237
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[17]=flag[17]^(1418740062&0xff)^(72784170&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_237();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1556();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1557();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1558();
	else
		exit(0);
}
void sub_235()	//depth: 236
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[17],b=1418740062&0xff,c=72784170&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_236();
	else
		exit(0);
	sub_1559();
}
void sub_234()	//depth: 235
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[8]=~(~flag[8]+617082290%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_235();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1560();
	else
		exit(0);
}
void sub_233()	//depth: 234
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[0]=flag[0]+1664133310%12;
	sub_234();
	sub_1561();
}
void sub_232()	//depth: 233
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[0]=~(~flag[0]+1664133310%12);
	if((x-y)==(~(~x+y)))
		sub_233();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1562();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1563();
	else
		exit(0);
}
void sub_231()	//depth: 232
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[9]=~(~flag[9]+112624521%12);
	if((x-y)==(~(~x+y)))
		sub_232();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1564();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1565();
	else
		exit(0);
	sub_1566();
}
void sub_230()	//depth: 231
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[21]=~(~flag[21]+1776392749%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_231();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1567();
	else
		exit(0);
}
void sub_229()	//depth: 230
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[2]=~(~flag[2]-2051166275%12);
	sub_230();
	sub_1568();
}
void sub_228()	//depth: 229
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[2]=flag[2]^(974636116&0xff)^(584556192&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_229();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1569();
	else
		exit(0);
	sub_1570();
}
void sub_227()	//depth: 228
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[8]=flag[8]^(1835065421&0xff)^(1909610013&0xff);
	if((x-y)==(~(~x+y)))
		sub_228();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1571();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1572();
	else
		exit(0);
}
void sub_226()	//depth: 227
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[8],b=1835065421&0xff,c=1909610013&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_227();
	sub_1573();
	sub_1574();
}
void sub_225()	//depth: 226
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[2],b=974636116&0xff,c=584556192&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_226();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1575();
	else
		exit(0);
}
void sub_224()	//depth: 225
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[2]=flag[2]+1116381274%12;
	sub_225();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1576();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1577();
	else
		exit(0);
}
void sub_223()	//depth: 224
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[2]=~(~flag[2]+1116381274%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_224();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1578();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1579();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1580();
	else
		exit(0);
}
void sub_222()	//depth: 223
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[2]=~(~flag[2]+2051166275%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_223();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1581();
	else
		exit(0);
	sub_1582();
}
void sub_221()	//depth: 222
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[7]=flag[7]^(803199909&0xff)^(495083773&0xff);
	sub_222();
	sub_1583();
}
void sub_220()	//depth: 221
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[2]=~(~flag[2]-135740737%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_221();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1584();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1585();
	else
		exit(0);
}
void sub_219()	//depth: 220
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[2]=~(~flag[2]+135740737%12);
	sub_220();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1586();
	else
		exit(0);
}
void sub_218()	//depth: 219
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[7],b=803199909&0xff,c=495083773&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_219();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1587();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1588();
	else
		exit(0);
}
void sub_217()	//depth: 218
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[14]=flag[14]+136138413%12;
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_218();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1589();
	else
		exit(0);
}
void sub_216()	//depth: 217
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[17]=flag[17]+2048352944%12;
	sub_217();
	if((x-y)==(~(~x+y)))
		sub_1590();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1591();
	else
		exit(0);
	sub_1592();
}
void sub_215()	//depth: 216
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[17]=~(~flag[17]+2048352944%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_216();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1593();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1594();
	else
		exit(0);
}
void sub_214()	//depth: 215
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[14]=~(~flag[14]+136138413%12);
	sub_215();
	sub_1595();
}
void sub_213()	//depth: 214
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[6]=flag[6]^(317081940&0xff)^(747926094&0xff);
	if((x-y)==(~(~x+y)))
		sub_214();
	else
		exit(0);
	sub_1596();
	sub_1597();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1598();
	else
		exit(0);
}
void sub_212()	//depth: 213
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[8]=~(~flag[8]-1162900719%12);
	sub_213();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1599();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1600();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1601();
	else
		exit(0);
}
void sub_211()	//depth: 212
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[8]=~(~flag[8]+1162900719%12);
	if((x-y)==(~(~x+y)))
		sub_212();
	else
		exit(0);
	sub_1602();
}
void sub_210()	//depth: 211
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[6],b=317081940&0xff,c=747926094&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_211();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1603();
	else
		exit(0);
}
void sub_209()	//depth: 210
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[15],b=67391421&0xff,c=1918877575&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_210();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1604();
	else
		exit(0);
}
void sub_208()	//depth: 209
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[5]=flag[5]^(369860647&0xff)^(156483554&0xff);
	sub_209();
	sub_1605();
}
void sub_207()	//depth: 208
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[5],b=369860647&0xff,c=156483554&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_208();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1606();
	else
		exit(0);
	sub_1607();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1608();
	else
		exit(0);
}
void sub_206()	//depth: 207
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[2]=flag[2]^(2146764008&0xff)^(1298677954&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_207();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1609();
	else
		exit(0);
}
void sub_205()	//depth: 206
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[8]=flag[8]^(1030126311&0xff)^(1862185343&0xff);
	sub_206();
	sub_1610();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1611();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1612();
	else
		exit(0);
}
void sub_204()	//depth: 205
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[0]=flag[0]^(1597593003&0xff)^(1738433391&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_205();
	else
		exit(0);
	sub_1613();
	if((x-y)==(~(~x+y)))
		sub_1614();
	else
		exit(0);
}
void sub_203()	//depth: 204
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[21]=~(~flag[21]-1293927391%12);
	sub_204();
	sub_1615();
	sub_1616();
}
void sub_202()	//depth: 203
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[21]=~(~flag[21]+1293927391%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_203();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1617();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1618();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1619();
	else
		exit(0);
}
void sub_201()	//depth: 202
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[0],b=1597593003&0xff,c=1738433391&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_202();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1620();
	else
		exit(0);
}
void sub_200()	//depth: 201
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[8],b=1030126311&0xff,c=1862185343&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_201();
	else
		exit(0);
	sub_1621();
}
void sub_199()	//depth: 200
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[0]=flag[0]^(1297713497&0xff)^(251827992&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_200();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1622();
	else
		exit(0);
}
void sub_198()	//depth: 199
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[5]=flag[5]^(292313770&0xff)^(397618779&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_199();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1623();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1624();
	else
		exit(0);
}
void sub_197()	//depth: 198
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[5],b=292313770&0xff,c=397618779&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_198();
	sub_1625();
	if((x-y)==(~(~x+y)))
		sub_1626();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1627();
	else
		exit(0);
}
void sub_196()	//depth: 197
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[18]=~(~flag[18]-89169159%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_197();
	else
		exit(0);
	sub_1628();
	if((x-y)==(~(~x+y)))
		sub_1629();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1630();
	else
		exit(0);
}
void sub_195()	//depth: 196
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[10]=flag[10]+65599618%12;
	if((x-y)==(~(~x+y)))
		sub_196();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1631();
	else
		exit(0);
	sub_1632();
	if((x-y)==(~(~x+y)))
		sub_1633();
	else
		exit(0);
}
void sub_194()	//depth: 195
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[10]=flag[10]^(20797322&0xff)^(310013493&0xff);
	sub_195();
	if((x-y)==(~(~x+y)))
		sub_1634();
	else
		exit(0);
	sub_1635();
	sub_1636();
}
void sub_193()	//depth: 194
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[16]=flag[16]^(1462135635&0xff)^(2023997278&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_194();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1637();
	else
		exit(0);
}
void sub_192()	//depth: 193
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[16],b=1462135635&0xff,c=2023997278&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_193();
	sub_1638();
}
void sub_191()	//depth: 192
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[10],b=20797322&0xff,c=310013493&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_192();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1639();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1640();
	else
		exit(0);
}
void sub_190()	//depth: 191
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[10]=~(~flag[10]+65599618%12);
	sub_191();
	sub_1641();
	sub_1642();
}
void sub_189()	//depth: 190
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[18]=~(~flag[18]+89169159%12);
	sub_190();
	if((x-y)==(~(~x+y)))
		sub_1643();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1644();
	else
		exit(0);
}
void sub_188()	//depth: 189
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[0],b=1297713497&0xff,c=251827992&0xff;
	flag[0]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_189();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1645();
	else
		exit(0);
}
void sub_187()	//depth: 188
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[15]=flag[15]^(614615870&0xff)^(1650246631&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_188();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1646();
	else
		exit(0);
}
void sub_186()	//depth: 187
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[15],b=614615870&0xff,c=1650246631&0xff;
	flag[15]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_187();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1647();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1648();
	else
		exit(0);
	sub_1649();
}
void sub_185()	//depth: 186
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[8]=flag[8]^(1268226500&0xff)^(2089245031&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_186();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1650();
	else
		exit(0);
	sub_1651();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1652();
	else
		exit(0);
}
void sub_184()	//depth: 185
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	unsigned char a=flag[8],b=1268226500&0xff,c=2089245031&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_185();
	if((x-y)==(~(~x+y)))
		sub_1653();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1654();
	else
		exit(0);
}
void sub_183()	//depth: 184
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[8]=~(~flag[8]-229568598%12);
	if((x-y)==(~(~x+y)))
		sub_184();
	else
		exit(0);
	sub_1655();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1656();
	else
		exit(0);
}
void sub_182()	//depth: 183
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[8]=~(~flag[8]+229568598%12);
	if((x-y)==(~(~x+y)))
		sub_183();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1657();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1658();
	else
		exit(0);
}
void sub_181()	//depth: 182
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[2],b=2146764008&0xff,c=1298677954&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_182();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1659();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1660();
	else
		exit(0);
}
void sub_180()	//depth: 181
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[15]=flag[15]+1900536496%12;
	sub_181();
	if((x-y)==(~(~x+y)))
		sub_1661();
	else
		exit(0);
}
void sub_179()	//depth: 180
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[14]=flag[14]^(1918862080&0xff)^(1089699100&0xff);
	sub_180();
	sub_1662();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1663();
	else
		exit(0);
}
void sub_178()	//depth: 179
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[12]=flag[12]+409742195%12;
	if((x-y)==(~(~x+y)))
		sub_179();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1664();
	else
		exit(0);
}
void sub_177()	//depth: 178
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[12]=flag[12]^(1130276051&0xff)^(679533369&0xff);
	sub_178();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1665();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1666();
	else
		exit(0);
	sub_1667();
}
void sub_176()	//depth: 177
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[12],b=1130276051&0xff,c=679533369&0xff;
	flag[12]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_177();
	sub_1668();
}
void sub_175()	//depth: 176
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[5]=flag[5]+437089413%12;
	if((x-y)==(~(~x+y)))
		sub_176();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1669();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1670();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1671();
	else
		exit(0);
}
void sub_174()	//depth: 175
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[5]=~(~flag[5]+437089413%12);
	sub_175();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1672();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1673();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1674();
	else
		exit(0);
}
void sub_173()	//depth: 174
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[12]=~(~flag[12]+409742195%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_174();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1675();
	else
		exit(0);
}
void sub_172()	//depth: 173
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[14],b=1918862080&0xff,c=1089699100&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_173();
	else
		exit(0);
	sub_1676();
}
void sub_171()	//depth: 172
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[2]=~(~flag[2]-159129798%12);
	sub_172();
	if((x-y)==(~(~x+y)))
		sub_1677();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1678();
	else
		exit(0);
}
void sub_170()	//depth: 171
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[10]=flag[10]^(2118939207&0xff)^(776816407&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_171();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1679();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1680();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1681();
	else
		exit(0);
}
void sub_169()	//depth: 170
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[20]=flag[20]^(911512162&0xff)^(1425748125&0xff);
	if((x-y)==(~(~x+y)))
		sub_170();
	else
		exit(0);
	sub_1682();
}
void sub_168()	//depth: 169
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[1]=~(~flag[1]-1804822064%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_169();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1683();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1684();
	else
		exit(0);
}
void sub_167()	//depth: 168
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[14]=flag[14]+2144557395%12;
	sub_168();
	sub_1685();
	sub_1686();
}
void sub_166()	//depth: 167
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[7]=flag[7]^(1184863515&0xff)^(859772813&0xff);
	sub_167();
	sub_1687();
}
void sub_165()	//depth: 166
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[18]=flag[18]+787420858%12;
	sub_166();
	if((x-y)==(~(~x+y)))
		sub_1688();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1689();
	else
		exit(0);
	sub_1690();
}
void sub_164()	//depth: 165
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[18]=~(~flag[18]+787420858%12);
	sub_165();
	sub_1691();
	sub_1692();
}
void sub_163()	//depth: 164
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[7],b=1184863515&0xff,c=859772813&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_164();
	if((x-y)==(~(~x+y)))
		sub_1693();
	else
		exit(0);
}
void sub_162()	//depth: 163
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[14]=~(~flag[14]+2144557395%12);
	if((x-y)==(~(~x+y)))
		sub_163();
	else
		exit(0);
	sub_1694();
	if((x-y)==(~(~x+y)))
		sub_1695();
	else
		exit(0);
}
void sub_161()	//depth: 162
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[1]=~(~flag[1]+1804822064%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_162();
	else
		exit(0);
	sub_1696();
	sub_1697();
}
void sub_160()	//depth: 161
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[18]=flag[18]^(1717616764&0xff)^(1422409412&0xff);
	sub_161();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1698();
	else
		exit(0);
	sub_1699();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1700();
	else
		exit(0);
}
void sub_159()	//depth: 160
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[18],b=1717616764&0xff,c=1422409412&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_160();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1701();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1702();
	else
		exit(0);
}
void sub_158()	//depth: 159
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[10]=flag[10]^(165922897&0xff)^(265148848&0xff);
	sub_159();
	sub_1703();
	sub_1704();
}
void sub_157()	//depth: 158
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[10],b=165922897&0xff,c=265148848&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_158();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1705();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1706();
	else
		exit(0);
}
void sub_156()	//depth: 157
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	unsigned char a=flag[20],b=911512162&0xff,c=1425748125&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_157();
	sub_1707();
	sub_1708();
}
void sub_155()	//depth: 156
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[10],b=2118939207&0xff,c=776816407&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_156();
	else
		exit(0);
	sub_1709();
}
void sub_154()	//depth: 155
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[2]=~(~flag[2]+159129798%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_155();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1710();
	else
		exit(0);
}
void sub_153()	//depth: 154
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[15]=~(~flag[15]+1900536496%12);
	if((x-y)==(~(~x+y)))
		sub_154();
	else
		exit(0);
	sub_1711();
	sub_1712();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1713();
	else
		exit(0);
}
void sub_152()	//depth: 153
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	unsigned char a=flag[16],b=1147550923&0xff,c=1556971199&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_153();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1714();
	else
		exit(0);
	sub_1715();
}
void sub_151()	//depth: 152
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	unsigned char a=flag[21],b=1178594114&0xff,c=1579020623&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_152();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1716();
	else
		exit(0);
}
void sub_150()	//depth: 151
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[9],b=266047248&0xff,c=1117027687&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_151();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1717();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1718();
	else
		exit(0);
}
void sub_149()	//depth: 150
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[11]=~(~flag[11]-2062811167%12);
	sub_150();
	sub_1719();
}
void sub_148()	//depth: 149
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[11]=~(~flag[11]+2062811167%12);
	sub_149();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1720();
	else
		exit(0);
}
void sub_147()	//depth: 148
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[9]=~(~flag[9]-1189741133%12);
	sub_148();
	sub_1721();
	if((x-y)==(~(~x+y)))
		sub_1722();
	else
		exit(0);
}
void sub_146()	//depth: 147
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[9]=~(~flag[9]+1189741133%12);
	if((x-y)==(~(~x+y)))
		sub_147();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1723();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1724();
	else
		exit(0);
	sub_1725();
}
void sub_145()	//depth: 146
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[8]=~(~flag[8]+1301568253%12);
	sub_146();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1726();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1727();
	else
		exit(0);
	sub_1728();
}
void sub_144()	//depth: 145
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[9]=~(~flag[9]+2101182556%12);
	if((x-y)==(~(~x+y)))
		sub_145();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1729();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1730();
	else
		exit(0);
}
void sub_143()	//depth: 144
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[1]=flag[1]^(1784179166&0xff)^(694671886&0xff);
	sub_144();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1731();
	else
		exit(0);
	sub_1732();
}
void sub_142()	//depth: 143
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[1],b=1784179166&0xff,c=694671886&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_143();
	else
		exit(0);
	sub_1733();
	sub_1734();
}
void sub_141()	//depth: 142
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[13]=~(~flag[13]+1199890716%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_142();
	else
		exit(0);
	sub_1735();
	sub_1736();
	sub_1737();
}
void sub_140()	//depth: 141
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	flag[14]=~(~flag[14]-1124251187%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_141();
	else
		exit(0);
	sub_1738();
	sub_1739();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1740();
	else
		exit(0);
}
void sub_139()	//depth: 140
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[7]=flag[7]^(192200961&0xff)^(1412380684&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_140();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1741();
	else
		exit(0);
	sub_1742();
	sub_1743();
}
void sub_138()	//depth: 139
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[7],b=192200961&0xff,c=1412380684&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_139();
	if((x-y)==(~(~x+y)))
		sub_1744();
	else
		exit(0);
}
void sub_137()	//depth: 138
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[12]=flag[12]+1370317760%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_138();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1745();
	else
		exit(0);
	sub_1746();
}
void sub_136()	//depth: 137
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[6]=flag[6]^(123566092&0xff)^(2122531750&0xff);
	if((x-y)==(~(~x+y)))
		sub_137();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1747();
	else
		exit(0);
}
void sub_135()	//depth: 136
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[6],b=123566092&0xff,c=2122531750&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_136();
	else
		exit(0);
	sub_1748();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1749();
	else
		exit(0);
	sub_1750();
}
void sub_134()	//depth: 135
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[12]=~(~flag[12]+1370317760%12);
	sub_135();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1751();
	else
		exit(0);
}
void sub_133()	//depth: 134
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[8]=flag[8]^(1362431412&0xff)^(948294523&0xff);
	sub_134();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1752();
	else
		exit(0);
	sub_1753();
	if((x-y)==(~(~x+y)))
		sub_1754();
	else
		exit(0);
}
void sub_132()	//depth: 133
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[6]=flag[6]^(1855673653&0xff)^(138386535&0xff);
	sub_133();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1755();
	else
		exit(0);
}
void sub_131()	//depth: 132
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[0]=flag[0]+1623694714%12;
	if((x-y)==(~(~x+y)))
		sub_132();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1756();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1757();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1758();
	else
		exit(0);
}
void sub_130()	//depth: 131
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[0]=~(~flag[0]+1623694714%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_131();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1759();
	else
		exit(0);
}
void sub_129()	//depth: 130
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[6],b=1855673653&0xff,c=138386535&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_130();
	if((x-y)==(~(~x+y)))
		sub_1760();
	else
		exit(0);
}
void sub_128()	//depth: 129
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[9]=~(~flag[9]-1291008126%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_129();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1761();
	else
		exit(0);
}
void sub_127()	//depth: 128
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[15]=~(~flag[15]-211080047%12);
	sub_128();
	if((x-y)==(~(~x+y)))
		sub_1762();
	else
		exit(0);
}
void sub_126()	//depth: 127
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[11]=~(~flag[11]-1426164316%12);
	if((x-y)==(~(~x+y)))
		sub_127();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1763();
	else
		exit(0);
}
void sub_125()	//depth: 126
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[11]=~(~flag[11]+1426164316%12);
	sub_126();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1764();
	else
		exit(0);
	sub_1765();
}
void sub_124()	//depth: 125
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[18]=flag[18]^(546609887&0xff)^(313482114&0xff);
	sub_125();
	sub_1766();
	sub_1767();
}
void sub_123()	//depth: 124
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[5]=flag[5]^(666204356&0xff)^(570046516&0xff);
	if((x-y)==(~(~x+y)))
		sub_124();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1768();
	else
		exit(0);
}
void sub_122()	//depth: 123
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[9]=flag[9]^(1755966853&0xff)^(985218370&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_123();
	else
		exit(0);
	sub_1769();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1770();
	else
		exit(0);
}
void sub_121()	//depth: 122
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[9],b=1755966853&0xff,c=985218370&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_122();
	sub_1771();
}
void sub_120()	//depth: 121
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[7]=flag[7]^(1103721958&0xff)^(549554142&0xff);
	sub_121();
	sub_1772();
	if((x-y)==(~(~x+y)))
		sub_1773();
	else
		exit(0);
}
void sub_119()	//depth: 120
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[7],b=1103721958&0xff,c=549554142&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_120();
	sub_1774();
}
void sub_118()	//depth: 119
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[7]=flag[7]^(1480744399&0xff)^(579672288&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_119();
	else
		exit(0);
	sub_1775();
}
void sub_117()	//depth: 118
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[7],b=1480744399&0xff,c=579672288&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_118();
	if((x-y)==(~(~x+y)))
		sub_1776();
	else
		exit(0);
}
void sub_116()	//depth: 117
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[20]=flag[20]+1326134347%12;
	sub_117();
	if((x-y)==(~(~x+y)))
		sub_1777();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1778();
	else
		exit(0);
}
void sub_115()	//depth: 116
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[20]=~(~flag[20]+1326134347%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_116();
	else
		exit(0);
	sub_1779();
}
void sub_114()	//depth: 115
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[10]=flag[10]^(2060295194&0xff)^(1824141080&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_115();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1780();
	else
		exit(0);
}
void sub_113()	//depth: 114
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[8]=~(~flag[8]-2093703903%12);
	sub_114();
	sub_1781();
	sub_1782();
}
void sub_112()	//depth: 113
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[7]=~(~flag[7]-803528905%12);
	if((x-y)==(~(~x+y)))
		sub_113();
	else
		exit(0);
	sub_1783();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1784();
	else
		exit(0);
}
void sub_111()	//depth: 112
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[19]=flag[19]^(1102738673&0xff)^(1717359066&0xff);
	if((x-y)==(~(~x+y)))
		sub_112();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1785();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1786();
	else
		exit(0);
}
void sub_110()	//depth: 111
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	unsigned char a=flag[19],b=1102738673&0xff,c=1717359066&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_111();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1787();
	else
		exit(0);
	sub_1788();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1789();
	else
		exit(0);
}
void sub_109()	//depth: 110
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[7]=~(~flag[7]+803528905%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_110();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1790();
	else
		exit(0);
}
void sub_108()	//depth: 109
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[17]=flag[17]^(1602193940&0xff)^(496515312&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_109();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1791();
	else
		exit(0);
	sub_1792();
	sub_1793();
}
void sub_107()	//depth: 108
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[20]=flag[20]^(279439658&0xff)^(1909903490&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_108();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1794();
	else
		exit(0);
}
void sub_106()	//depth: 107
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[20],b=279439658&0xff,c=1909903490&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_107();
	sub_1795();
}
void sub_105()	//depth: 106
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[11]=~(~flag[11]-1282826659%12);
	if((x-y)==(~(~x+y)))
		sub_106();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1796();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1797();
	else
		exit(0);
}
void sub_104()	//depth: 105
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[11]=~(~flag[11]+1282826659%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_105();
	else
		exit(0);
	sub_1798();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1799();
	else
		exit(0);
}
void sub_103()	//depth: 104
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[17],b=1602193940&0xff,c=496515312&0xff;
	flag[17]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_104();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1800();
	else
		exit(0);
}
void sub_102()	//depth: 103
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[11]=flag[11]^(1812902324&0xff)^(1180932049&0xff);
	sub_103();
	sub_1801();
	sub_1802();
}
void sub_101()	//depth: 102
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	unsigned char a=flag[11],b=1812902324&0xff,c=1180932049&0xff;
	flag[11]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_102();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1803();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1804();
	else
		exit(0);
	sub_1805();
}
void sub_100()	//depth: 101
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[6]=flag[6]^(1674930603&0xff)^(1465028355&0xff);
	sub_101();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1806();
	else
		exit(0);
	sub_1807();
}
void sub_99()	//depth: 100
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[6],b=1674930603&0xff,c=1465028355&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_100();
	else
		exit(0);
	sub_1808();
	sub_1809();
	if((x-y)==(~(~x+y)))
		sub_1810();
	else
		exit(0);
}
void sub_98()	//depth: 99
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[8]=~(~flag[8]+2093703903%12);
	sub_99();
	sub_1811();
}
void sub_97()	//depth: 98
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[17]=~(~flag[17]-330018142%12);
	sub_98();
	sub_1812();
	sub_1813();
}
void sub_96()	//depth: 97
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[10]=flag[10]+524760546%12;
	sub_97();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1814();
	else
		exit(0);
	sub_1815();
}
void sub_95()	//depth: 96
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[6]=flag[6]^(1315115851&0xff)^(658989394&0xff);
	if((x-y)==(~(~x+y)))
		sub_96();
	else
		exit(0);
	sub_1816();
}
void sub_94()	//depth: 95
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	unsigned char a=flag[6],b=1315115851&0xff,c=658989394&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_95();
	else
		exit(0);
	sub_1817();
}
void sub_93()	//depth: 94
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[2]=flag[2]^(1552571612&0xff)^(2125007962&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_94();
	else
		exit(0);
	sub_1818();
	sub_1819();
}
void sub_92()	//depth: 93
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[17]=~(~flag[17]-997328790%12);
	sub_93();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1820();
	else
		exit(0);
	sub_1821();
}
void sub_91()	//depth: 92
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[17]=~(~flag[17]+997328790%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_92();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1822();
	else
		exit(0);
}
void sub_90()	//depth: 91
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[2],b=1552571612&0xff,c=2125007962&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_91();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1823();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1824();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1825();
	else
		exit(0);
}
void sub_89()	//depth: 90
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[19]=flag[19]^(1797810367&0xff)^(903241283&0xff);
	if((x-y)==(~(~x+y)))
		sub_90();
	else
		exit(0);
	sub_1826();
	sub_1827();
}
void sub_88()	//depth: 89
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[1]=flag[1]^(1413645657&0xff)^(1379840671&0xff);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_89();
	else
		exit(0);
	sub_1828();
}
void sub_87()	//depth: 88
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[1],b=1413645657&0xff,c=1379840671&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_88();
	else
		exit(0);
	sub_1829();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1830();
	else
		exit(0);
	sub_1831();
}
void sub_86()	//depth: 87
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[19],b=1797810367&0xff,c=903241283&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_87();
	else
		exit(0);
	sub_1832();
}
void sub_85()	//depth: 86
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[20]=flag[20]+800728601%12;
	if((x-y)==(~(~x+y)))
		sub_86();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1833();
	else
		exit(0);
}
void sub_84()	//depth: 85
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[4]=flag[4]^(112428266&0xff)^(1849392081&0xff);
	sub_85();
	sub_1834();
	sub_1835();
}
void sub_83()	//depth: 84
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[1]=flag[1]^(1593228260&0xff)^(907134183&0xff);
	sub_84();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1836();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1837();
	else
		exit(0);
}
void sub_82()	//depth: 83
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[1],b=1593228260&0xff,c=907134183&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_83();
	else
		exit(0);
	sub_1838();
	sub_1839();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1840();
	else
		exit(0);
}
void sub_81()	//depth: 82
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	unsigned char a=flag[4],b=112428266&0xff,c=1849392081&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_82();
	else
		exit(0);
	sub_1841();
}
void sub_80()	//depth: 81
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[3]=flag[3]^(488388182&0xff)^(316567340&0xff);
	sub_81();
	sub_1842();
	if((x-y)==(~(~x+y)))
		sub_1843();
	else
		exit(0);
}
void sub_79()	//depth: 80
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[3],b=488388182&0xff,c=316567340&0xff;
	flag[3]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_80();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1844();
	else
		exit(0);
}
void sub_78()	//depth: 79
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[6]=flag[6]^(1023703315&0xff)^(699438943&0xff);
	if((x-y)==(~(~x+y)))
		sub_79();
	else
		exit(0);
	sub_1845();
	if((x-y)==(~(~x+y)))
		sub_1846();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1847();
	else
		exit(0);
}
void sub_77()	//depth: 78
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[6],b=1023703315&0xff,c=699438943&0xff;
	flag[6]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_78();
	else
		exit(0);
	sub_1848();
	sub_1849();
}
void sub_76()	//depth: 77
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[20]=~(~flag[20]+800728601%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_77();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1850();
	else
		exit(0);
	sub_1851();
}
void sub_75()	//depth: 76
{
	x=(x&flag[0])^(y|flag[0])^(x<<1);
	y=(y&flag[0])^(x|flag[0])^(y<<1);
	flag[11]=~(~flag[11]-1519140537%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_76();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1852();
	else
		exit(0);
	sub_1853();
	if((x-y)==(~(~x+y)))
		sub_1854();
	else
		exit(0);
}
void sub_74()	//depth: 75
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=~(~flag[7]-963674999%12);
	if((x-y)==(~(~x+y)))
		sub_75();
	else
		exit(0);
	sub_1855();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1856();
	else
		exit(0);
	sub_1857();
}
void sub_73()	//depth: 74
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[0]=flag[0]+1271072824%12;
	if((x-y)==(~(~x+y)))
		sub_74();
	else
		exit(0);
	sub_1858();
	sub_1859();
}
void sub_72()	//depth: 73
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[0]=~(~flag[0]+1271072824%12);
	sub_73();
	if((x-y)==(~(~x+y)))
		sub_1860();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1861();
	else
		exit(0);
}
void sub_71()	//depth: 72
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[7]=~(~flag[7]+963674999%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_72();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1862();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1863();
	else
		exit(0);
}
void sub_70()	//depth: 71
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[11]=~(~flag[11]+1519140537%12);
	sub_71();
	sub_1864();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1865();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1866();
	else
		exit(0);
}
void sub_69()	//depth: 70
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[10]=~(~flag[10]+524760546%12);
	if((x-y)==(~(~x+y)))
		sub_70();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1867();
	else
		exit(0);
}
void sub_68()	//depth: 69
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[9]=flag[9]^(632114572&0xff)^(1026829408&0xff);
	if((x-y)==(~(~x+y)))
		sub_69();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1868();
	else
		exit(0);
}
void sub_67()	//depth: 68
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[9],b=632114572&0xff,c=1026829408&0xff;
	flag[9]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_68();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1869();
	else
		exit(0);
}
void sub_66()	//depth: 67
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[17]=~(~flag[17]+330018142%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_67();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1870();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1871();
	else
		exit(0);
}
void sub_65()	//depth: 66
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[14]=flag[14]^(1178855948&0xff)^(216796800&0xff);
	sub_66();
	if((x-y)==(~(~x+y)))
		sub_1872();
	else
		exit(0);
	sub_1873();
	sub_1874();
}
void sub_64()	//depth: 65
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[21]=flag[21]^(1803857518&0xff)^(1896217760&0xff);
	if((x-y)==(~(~x+y)))
		sub_65();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1875();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1876();
	else
		exit(0);
}
void sub_63()	//depth: 64
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[21],b=1803857518&0xff,c=1896217760&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_64();
	if((x-y)==(~(~x+y)))
		sub_1877();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1878();
	else
		exit(0);
	sub_1879();
}
void sub_62()	//depth: 63
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	unsigned char a=flag[14],b=1178855948&0xff,c=216796800&0xff;
	flag[14]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_63();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1880();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1881();
	else
		exit(0);
}
void sub_61()	//depth: 62
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	unsigned char a=flag[10],b=2060295194&0xff,c=1824141080&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_62();
	else
		exit(0);
	sub_1882();
}
void sub_60()	//depth: 61
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[5],b=666204356&0xff,c=570046516&0xff;
	flag[5]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_61();
	if((x-y)==(~(~x+y)))
		sub_1883();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1884();
	else
		exit(0);
	sub_1885();
}
void sub_59()	//depth: 60
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[18],b=546609887&0xff,c=313482114&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_60();
	sub_1886();
}
void sub_58()	//depth: 59
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[15]=~(~flag[15]+211080047%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_59();
	else
		exit(0);
	sub_1887();
}
void sub_57()	//depth: 58
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[18]=flag[18]^(1642275461&0xff)^(228623469&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_58();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1888();
	else
		exit(0);
}
void sub_56()	//depth: 57
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[18],b=1642275461&0xff,c=228623469&0xff;
	flag[18]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_57();
	if((x-y)==(~(~x+y)))
		sub_1889();
	else
		exit(0);
}
void sub_55()	//depth: 56
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	flag[9]=~(~flag[9]+1291008126%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_56();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1890();
	else
		exit(0);
}
void sub_54()	//depth: 55
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	unsigned char a=flag[8],b=1362431412&0xff,c=948294523&0xff;
	flag[8]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_55();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1891();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1892();
	else
		exit(0);
	sub_1893();
}
void sub_53()	//depth: 54
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[14]=~(~flag[14]+1124251187%12);
	if((x-y)==(~(~x+y)))
		sub_54();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1894();
	else
		exit(0);
}
void sub_52()	//depth: 53
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=~(~flag[15]+1208421245%12);
	sub_53();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1895();
	else
		exit(0);
}
void sub_51()	//depth: 52
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	unsigned char a=flag[1],b=545325298&0xff,c=1728837090&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_52();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1896();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1897();
	else
		exit(0);
}
void sub_50()	//depth: 51
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[16],b=527905498&0xff,c=526944405&0xff;
	flag[16]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_51();
	else
		exit(0);
	sub_1898();
}
void sub_49()	//depth: 50
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[10]=~(~flag[10]+852966582%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_50();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1899();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1900();
	else
		exit(0);
	sub_1901();
}
void sub_48()	//depth: 49
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[2]=flag[2]^(1770601962&0xff)^(198958822&0xff);
	if((x-y)==(~(~x+y)))
		sub_49();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1902();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1903();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1904();
	else
		exit(0);
}
void sub_47()	//depth: 48
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	unsigned char a=flag[2],b=1770601962&0xff,c=198958822&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_48();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1905();
	else
		exit(0);
	sub_1906();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1907();
	else
		exit(0);
}
void sub_46()	//depth: 47
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	flag[12]=~(~flag[12]+861318128%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_47();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1908();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1909();
	else
		exit(0);
	sub_1910();
}
void sub_45()	//depth: 46
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[21],b=1327010722&0xff,c=1047026605&0xff;
	flag[21]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_46();
	else
		exit(0);
	sub_1911();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1912();
	else
		exit(0);
	sub_1913();
}
void sub_44()	//depth: 45
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[16]=~(~flag[16]+127847136%12);
	if((x-y)==(~(~x+y)))
		sub_45();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1914();
	else
		exit(0);
	sub_1915();
}
void sub_43()	//depth: 44
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[5]=flag[5]+1080939305%12;
	/* put your code here! */
    for (int i = 0; i < 22; i++) {
        char a = flag[i] >> 4;
        flag[i] ^= a;
    }
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_44();
	else
		exit(0);
	sub_1916();
}
void sub_42()	//depth: 43
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[7]=~(~flag[7]-1994650192%12);
	sub_43();
	sub_1917();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1918();
	else
		exit(0);
}
void sub_41()	//depth: 42
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[7]=~(~flag[7]+1994650192%12);
	sub_42();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1919();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1920();
	else
		exit(0);
}
void sub_40()	//depth: 41
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[5]=~(~flag[5]+1080939305%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_41();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1921();
	else
		exit(0);
}
void sub_39()	//depth: 40
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[1]=flag[1]^(1429565822&0xff)^(1154380904&0xff);
	/* put your code here! */
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_40();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1922();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1923();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1924();
	else
		exit(0);
}
void sub_38()	//depth: 39
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[1],b=1429565822&0xff,c=1154380904&0xff;
	flag[1]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_39();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1925();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1926();
	else
		exit(0);
}
void sub_37()	//depth: 38
{
	x=(x&flag[3])^(y|flag[3])^(x<<1);
	y=(y&flag[3])^(x|flag[3])^(y<<1);
	flag[7]=flag[7]^(1344810177&0xff)^(1613980410&0xff);
	/* put your code here! */
	if((x-y)==(~(~x+y)))
		sub_38();
	else
		exit(0);
	sub_1927();
}
void sub_36()	//depth: 37
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[7],b=1344810177&0xff,c=1613980410&0xff;
	flag[7]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_37();
	sub_1928();
	if((x-y)==(~(~x+y)))
		sub_1929();
	else
		exit(0);
}
void sub_35()	//depth: 36
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[5]=~(~flag[5]-108212936%12);
	/* put your code here! */
	if((x-y)==(~(~x+y)))
		sub_36();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1930();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1931();
	else
		exit(0);
}
void sub_34()	//depth: 35
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[5]=~(~flag[5]+108212936%12);
	if((x-y)==(~(~x+y)))
		sub_35();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1932();
	else
		exit(0);
	sub_1933();
}
void sub_33()	//depth: 34
{
	x=(x&flag[7])^(y|flag[7])^(x<<1);
	y=(y&flag[7])^(x|flag[7])^(y<<1);
	flag[2]=flag[2]^(1919379046&0xff)^(1282920556&0xff);
	/* put your code here! */
	sub_34();
	if((x-y)==(~(~x+y)))
		sub_1934();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1935();
	else
		exit(0);
}
void sub_32()	//depth: 33
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[0]=~(~flag[0]-1966272346%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_33();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1936();
	else
		exit(0);
	sub_1937();
	sub_1938();
}
void sub_31()	//depth: 32
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[10]=flag[10]^(1688716100&0xff)^(582100036&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_32();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1939();
	else
		exit(0);
}
void sub_30()	//depth: 31
{
	x=(x&flag[21])^(y|flag[21])^(x<<1);
	y=(y&flag[21])^(x|flag[21])^(y<<1);
	flag[4]=flag[4]^(59867360&0xff)^(944531155&0xff);
	sub_31();
	if((x-y)==(~(~x+y)))
		sub_1940();
	else
		exit(0);
	sub_1941();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1942();
	else
		exit(0);
}
void sub_29()	//depth: 30
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	flag[21]=~(~flag[21]-1850729501%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_30();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1943();
	else
		exit(0);
	sub_1944();
}
void sub_28()	//depth: 29
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[2]=flag[2]^(750049606&0xff)^(1845080099&0xff);
	sub_29();
	sub_1945();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1946();
	else
		exit(0);
	sub_1947();
}
void sub_27()	//depth: 28
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	flag[1]=~(~flag[1]-505514470%12);
	if((x-y)==(~(~x+y)))
		sub_28();
	else
		exit(0);
	sub_1948();
	sub_1949();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1950();
	else
		exit(0);
}
void sub_26()	//depth: 27
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[1]=~(~flag[1]+505514470%12);
	sub_27();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1951();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1952();
	else
		exit(0);
}
void sub_25()	//depth: 26
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[2],b=750049606&0xff,c=1845080099&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_26();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1953();
	else
		exit(0);
	sub_1954();
	sub_1955();
}
void sub_24()	//depth: 25
{
	x=(x&flag[18])^(y|flag[18])^(x<<1);
	y=(y&flag[18])^(x|flag[18])^(y<<1);
	flag[21]=~(~flag[21]+1850729501%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_25();
	else
		exit(0);
	sub_1956();
	if((x-y)==(~(~x+y)))
		sub_1957();
	else
		exit(0);
	sub_1958();
}
void sub_23()	//depth: 24
{
	x=(x&flag[16])^(y|flag[16])^(x<<1);
	y=(y&flag[16])^(x|flag[16])^(y<<1);
	unsigned char a=flag[4],b=59867360&0xff,c=944531155&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_24();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1959();
	else
		exit(0);
}
void sub_22()	//depth: 23
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[20]=flag[20]^(1055310745&0xff)^(1566594867&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_23();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1960();
	else
		exit(0);
}
void sub_21()	//depth: 22
{
	x=(x&flag[14])^(y|flag[14])^(x<<1);
	y=(y&flag[14])^(x|flag[14])^(y<<1);
	flag[15]=flag[15]+1367753279%12;
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_22();
	else
		exit(0);
	sub_1961();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1962();
	else
		exit(0);
}
void sub_20()	//depth: 21
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[15]=~(~flag[15]+1367753279%12);
	if((x-y)==(~(~x+y)))
		sub_21();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1963();
	else
		exit(0);
	sub_1964();
	sub_1965();
}
void sub_19()	//depth: 20
{
	x=(x&flag[11])^(y|flag[11])^(x<<1);
	y=(y&flag[11])^(x|flag[11])^(y<<1);
	unsigned char a=flag[20],b=1055310745&0xff,c=1566594867&0xff;
	flag[20]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_20();
	sub_1966();
}
void sub_18()	//depth: 19
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	unsigned char a=flag[10],b=1688716100&0xff,c=582100036&0xff;
	flag[10]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_19();
	else
		exit(0);
	sub_1967();
}
void sub_17()	//depth: 18
{
	x=(x&flag[6])^(y|flag[6])^(x<<1);
	y=(y&flag[6])^(x|flag[6])^(y<<1);
	flag[0]=~(~flag[0]+1966272346%12);
	if((x-y)==(~(~x+y)))
		sub_18();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1968();
	else
		exit(0);
	sub_1969();
}
void sub_16()	//depth: 17
{
	x=(x&flag[15])^(y|flag[15])^(x<<1);
	y=(y&flag[15])^(x|flag[15])^(y<<1);
	flag[6]=~(~flag[6]-733994580%12);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_17();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1970();
	else
		exit(0);
}
void sub_15()	//depth: 16
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	flag[6]=~(~flag[6]+733994580%12);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_16();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1971();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1972();
	else
		exit(0);
}
void sub_14()	//depth: 15
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	unsigned char a=flag[2],b=1919379046&0xff,c=1282920556&0xff;
	flag[2]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_15();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1973();
	else
		exit(0);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1974();
	else
		exit(0);
}
void sub_13()	//depth: 14
{
	x=(x&flag[19])^(y|flag[19])^(x<<1);
	y=(y&flag[19])^(x|flag[19])^(y<<1);
	flag[17]=flag[17]+11723724%12;
	/* put your code here! */
	sub_14();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1975();
	else
		exit(0);
}
void sub_12()	//depth: 13
{
	x=(x&flag[8])^(y|flag[8])^(x<<1);
	y=(y&flag[8])^(x|flag[8])^(y<<1);
	flag[17]=~(~flag[17]+11723724%12);
	sub_13();
	sub_1976();
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1977();
	else
		exit(0);
}
void sub_11()	//depth: 12
{
	x=(x&flag[10])^(y|flag[10])^(x<<1);
	y=(y&flag[10])^(x|flag[10])^(y<<1);
	flag[4]=flag[4]^(1036318340&0xff)^(554695728&0xff);
	/* put your code here! */
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_12();
	else
		exit(0);
	sub_1978();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1979();
	else
		exit(0);
	sub_1980();
}
void sub_10()	//depth: 11
{
	x=(x&flag[5])^(y|flag[5])^(x<<1);
	y=(y&flag[5])^(x|flag[5])^(y<<1);
	unsigned char a=flag[4],b=1036318340&0xff,c=554695728&0xff;
	flag[4]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_11();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1981();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1982();
	else
		exit(0);
}
void sub_9()	//depth: 10
{
	x=(x&flag[20])^(y|flag[20])^(x<<1);
	y=(y&flag[20])^(x|flag[20])^(y<<1);
	flag[13]=flag[13]^(247988990&0xff)^(1665072971&0xff);
	/* put your code here! */
	sub_10();
	sub_1983();
}
void sub_8()	//depth: 9
{
	x=(x&flag[13])^(y|flag[13])^(x<<1);
	y=(y&flag[13])^(x|flag[13])^(y<<1);
	unsigned char a=flag[13],b=247988990&0xff,c=1665072971&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_9();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1984();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1985();
	else
		exit(0);
}
void sub_7()	//depth: 8
{
	x=(x&flag[4])^(y|flag[4])^(x<<1);
	y=(y&flag[4])^(x|flag[4])^(y<<1);
	flag[21]=flag[21]+381669149%12;
	/* put your code here! */
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_8();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1986();
	else
		exit(0);
}
void sub_6()	//depth: 7
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[13]=flag[13]^(136510579&0xff)^(352898793&0xff);
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_7();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1987();
	else
		exit(0);
	if((x-y)==(~(~x+y)))
		sub_1988();
	else
		exit(0);
}
void sub_5()	//depth: 6
{
	x=(x&flag[1])^(y|flag[1])^(x<<1);
	y=(y&flag[1])^(x|flag[1])^(y<<1);
	unsigned char a=flag[13],b=136510579&0xff,c=352898793&0xff;
	flag[13]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	if((x-y)==(~(~x+y)))
		sub_6();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1989();
	else
		exit(0);
}
void sub_4()	//depth: 5
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[21]=~(~flag[21]+381669149%12);
	sub_5();
	if((x-y)==(~(~x+y)))
		sub_1990();
	else
		exit(0);
}
void sub_3()	//depth: 4
{
	x=(x&flag[12])^(y|flag[12])^(x<<1);
	y=(y&flag[12])^(x|flag[12])^(y<<1);
	flag[19]=flag[19]^(72667133&0xff)^(1559506029&0xff);
	/* put your code here! */
	sub_4();
	sub_1991();
	if((x-y)==(~(~x+y)))
		sub_1992();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1993();
	else
		exit(0);
}
void sub_2()	//depth: 3
{
	x=(x&flag[2])^(y|flag[2])^(x<<1);
	y=(y&flag[2])^(x|flag[2])^(y<<1);
	unsigned char a=flag[19],b=72667133&0xff,c=1559506029&0xff;
	flag[19]=(a|b|c)^(a&b)^(b&c)^(c&a)^(a&b&c);
	sub_3();
	sub_1994();
	if((x+y)^2>=0 && (x-y)^2>=0)
		sub_1995();
	else
		exit(0);
}
void sub_1()	//depth: 2
{
	x=(x&flag[9])^(y|flag[9])^(x<<1);
	y=(y&flag[9])^(x|flag[9])^(y<<1);
	flag[9]=~(~flag[9]-792811747%12);
	/* put your code here! */
	if((x-y)==(~(~x+y)))
		sub_2();
	else
		exit(0);
	if((x*(x-1)%2+2*y)^((x*(x-1)%2+2*y)|1)==1)
		sub_1996();
	else
		exit(0);
	sub_1997();
}
void sub_0()	//depth: 1
{
	x=(x&flag[17])^(y|flag[17])^(x<<1);
	y=(y&flag[17])^(x|flag[17])^(y<<1);
	flag[9]=~(~flag[9]+792811747%12);
	if((x-y)==(~(~x+y)))
		sub_1();
	else
		exit(0);
	sub_1998();
	if((x-y)==(~(~x+y)))
		sub_1999();
	else
		exit(0);
}
int main() {
    cout << "Welcome to MoeCTF 2020!\nPlease input your flag here >>";
    scanf("%22s", flag);
    sub_0();
    for (int i = 0; i < 22; i++) {
        if(flag[i]!=key[i]){
            cout << "Ruaaaaa~Wrong!" << endl;
            return 0;
        }
    }
    cout << "Congratulations!!!\nWhat you input here is the true flag!!" << endl;
    return 0;
}
