#include <stdio.h>
#include <string.h>

char x[] = "aouv#@!V08asdozpnma&*#%!$^&*";
char y[] = {12, 0,  16, 21, 87, 38, 90, 35, 64, 64,  62, 66,  55, 48,
            9,  25, 3,  29, 80, 67, 7,  87, 21, 126, 81, 109, 67, 87};

int main() {
    char input[30];
    printf("please input your flag: ");
    scanf("%28s", input);
    for (int i = 0; i < 28; i++) {
        if ((input[i] ^ x[i]) != y[i]) {
            printf("wrong!\n");
            return 0;
        }
    }
    printf("right!\n");

    return 0;
}  // flag:moectf{upx_1S_simp1e-t0_u3e}
