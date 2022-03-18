#pragma GCC optimize(2)
#include <bits/stdc++.h>
using namespace std;
int r[2005], n, f;
inline int read() {
    char ch = getchar();
    int w = 0;
    while (ch < '0' || ch > '9') {
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        w *= 10;
        w += ch - 48;
        ch = getchar();
    }
    return w;
}
long long d[10000005];
int main() {
	freopen("P2946_2 (1).in","r",stdin); 
    cin >> n >> f;
    long long sum = 0;
    for (int b = 1; b <= n; b++) {
        r[b] = read();
        r[b] %= f;
        sum += r[b];
    }
    d[0] = 1;int ans = 0;
    for (int b = 1; b <= n; b++) {
        for (register long long c = sum; c >= r[b]; c--) {
            d[c] += d[c - r[b]];
            ans+=d[c-r[b]];
            if (d[c] >= 100000000) {
                d[c] -= 100000000;
            }
        }
    }
    
    /*for (long long b = 0; b <= sum; b += f) {
        ans += d[b];
        if (ans >= 100000000) {
            ans -= 100000000;
        }
        //	cout<<b<<endl;
    }*/
    cout << ans - 1;
    return 0;
}
