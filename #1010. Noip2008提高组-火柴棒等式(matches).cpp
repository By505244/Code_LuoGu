#include <bits/stdc++.h>
using namespace std;
int num[1999] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
inline int q(int b, int c, int d) {
    int sum = 0;
    if (b == 0) {
        if (c == 0) {
            if (d == 0) {
                return 0;
            } else {
                return num[d];
            }
        } else {
            sum = num[c] + num[d];
            return sum;
        }
    } else {
        sum = num[c] + num[d] + num[b];
        return sum;
    }
}
int main() {
    int sum, sum1, ans = 0;
    int n;
    cin >> n;
    n = n - 4;
    for (int b = 0; b <= 1; b++) {
        for (int c = 0; c <= 9; c++) {
            for (int d = 0; d <= 9; d++) {
                for (int e = 0; e <= 9; e++) {
                    num[1000 * b + 100 * c + 10 * d + e] = q(b, c, d) + num[e];
                }
            }
        }
    }
    for (int b = 0; b <= 1111; b++) {
        for (int c = 0; c <= 1111; c++) {
            sum = n - num[b] - num[c];
            sum1 = b + c;
            if (sum1 > 1111) {
                break;
            }
            sum = sum - num[sum1];
            if (sum == 0) {
                ans++;
            }
        }
    }
    cout << ans;
}

