#include <stdio.h>

#define ll long long
#define db double

const int mod = 999911659;

ll n;
int p;
ll numberOfRemainder[505];    // 记录余数为i的形如11111的数的个数
int remainder;                // 形如11111求模p的余数
int lastPosOfRemainder[505];  // 记录余数上一次的位置
int inv[11];                  // 逆元
int C[505][11];               // 组合数
int DP[505][505][11];         // DP数组
int ans;                      // 答案
int main() {
    scanf("%lld%d", &n, &p);
    inv[1] = 1;
    if (n <= p)  // 如果n比p小就直接计数了
        for (int i = 1; i <= n; i++) {
            remainder = (remainder * 10 + 1) % p;
            numberOfRemainder[remainder]++;
        }
    else {
        int total = 1 % p;
        int m, lastPos;
        for (int i = 1; i <= p + 1; i++) {
            if (lastPosOfRemainder[total]) {
                lastPos = lastPosOfRemainder[total];
                m = i - lastPos;
                break;
            }
            lastPosOfRemainder[total] = i;
            numberOfRemainder[total]++;
            total = (total * 10 + 1) % p;
        }
        for (int i = 0; i < p; i++)
            if (lastPosOfRemainder[i] && lastPosOfRemainder[i] >= lastPos) {
                numberOfRemainder[i] += (n - lastPosOfRemainder[i]) / m % mod;
                if ((lastPosOfRemainder[i] - lastPos + 1) % m ==
                    (n - lastPos + 1) % m)
                    remainder = i;
            }
    }
    for (int i = 2; i < 9; i++)
        inv[i] = (ll)(mod - mod / i) * inv[mod % i] % mod;
    for (int i = 0; i < p; i++) {
        C[i][0] = 1;
        if (!numberOfRemainder[i]) continue;
        for (int j = 1; j < 9;
             j++, numberOfRemainder[i] = (numberOfRemainder[i] + 1) % mod)
            C[i][j] =
                (ll)C[i][j - 1] * numberOfRemainder[i] % mod * inv[j] % mod;
    }
    DP[0][remainder][0] = 1;
    for (int i = 0; i < p; i++)
        for (int j = 0; j < p; j++)
            for (int o = 0; o < 9; o++)
                for (int k = 0; k < 9 - o; k++) {
                    DP[i + 1][(j + k * i) % p][k + o] +=
                        (ll)DP[i][j][o] * C[i][k] % mod;
                    DP[i + 1][(j + k * i) % p][k + o] %= mod;
                }

    for (int i = 0; i < 9; i++) ans = (ans + DP[p][0][i]) % mod;
    printf("%d\n", ans);
    return 0;
}