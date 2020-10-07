#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
const char base[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz01234{}789+/=";

static char find_pos(char ch) {
    char *ptr = (char *)strrchr(base, ch);
    return (ptr - base);
}

char *RxEncode(const char *data, int data_len) {
    int ret_len = (data_len / 4) * 3;
    int equal_count = 0;
    char *ret = NULL;
    char *f = NULL;
    int tmp = 0;
    int temp = 0;
    int prepare = 0;
    int i = 0;
    if (*(data + data_len - 1) == '=') {
        equal_count += 1;
    }
    if (*(data + data_len - 2) == '=') {
        equal_count += 1;
    }
    if (*(data + data_len - 3) == '=') {  // seems impossible
        equal_count += 1;
    }
    switch (equal_count) {
        case 0:
            ret_len += 4;  // 3 + 1 [1 for NULL]
            break;
        case 1:
            ret_len += 4;  // Ceil((6*3)/8)+1
            break;
        case 2:
            ret_len += 3;  // Ceil((6*2)/8)+1
            break;
        case 3:
            ret_len += 2;  // Ceil((6*1)/8)+1
            break;
    }
    ret = (char *)malloc(ret_len);
    if (ret == NULL) {
        printf("No enough memory.\n");
        return NULL;
    }

    memset(ret, 0, ret_len);
    f = ret;
    while (tmp < (data_len - equal_count)) {
        temp = 0;
        prepare = 0;
        while (temp < 4) {
            if (tmp >= (data_len - equal_count)) {
                break;
            }
            prepare = (prepare << 6) | (find_pos(data[tmp]));
            temp++;
            tmp++;
        }
        prepare = prepare << ((4 - temp) * 6);
        for (i = 0; i < 3; i++) {
            if (i == temp) {
                break;
            }
            *f = (char)((prepare >> ((2 - i) * 8)) & 0xFF);
            f++;
        }
    }
    *f = '\0';
    return ret;
}

int main() {
    cout << "Welcome To RxEncode Program!" << endl;
    cout << "Input Your flag:" << endl;
    char flag[] = {-102, -121, -100, -75, -2,  88,  -47, 74,  -2, 11,   -19,
                   108,  -6,   -3,   -21, -53, -24, 52,  -93, 67, -114, -93,
                   71,   122,  4,    0,   0,   0,   0,   0,   0,  0,    0};
    char inp[33];
    scanf("%33s", inp);
    char *result = RxEncode(inp, 33);
    //for (int i = 0; i < 33; i++) {
    //    cout << int(result[i]) << ", ";
    //}
    if (strlen(inp) != 32) {
        cout << strlen(inp) << endl;
        cout << "Wrong!" << endl;
        return 0;
    }
    if (!strcmp(result, flag)) {
        cout << "Congratulations!" << endl;
    } else
        cout << "Wrong!" << endl;
    cin.get();
    cin.get();
    return 0;
}
// moectf{Y0Ur+C+1s+v3ry+g0o0OOo0d}