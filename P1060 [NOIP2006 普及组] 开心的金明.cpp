#include <bits/stdc++.h>
using namespace std;
struct Node {
    int v, p, num, z;
} a[1500000];
int f[150000000], n;
int main() {
    int m;
    cin >> n >> m;
    for (int b = 1; b <= m; b++) {
        scanf("%d%d", &a[b].v, &a[b].p);
        a[b].z = a[b].v * a[b].p;
    }
    for (int b = 1; b <= m; b++) {
        for (int i = n; i >= a[b].v; --i) {
            f[i] = max(f[i], f[i - a[b].v] + a[b].z);
             
        }
    }
    cout << f[n];
    return 0;
}
