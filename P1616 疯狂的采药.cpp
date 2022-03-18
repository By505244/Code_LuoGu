#include <bits/stdc++.h>
using namespace std;
int t, m, v[10005], ti[100005];
long long f[10000005];
int main() {
    cin >> t >> m;
    for (int b = 1; b <= m; b++) {
        cin >> ti[b] >> v[b];
    }
    for (int b = 1; b <= m; b++) {
        for (int c = ti[b]; c <=t; c++) {
            f[c] = max(f[c], f[c - ti[b]] + v[b]);
        }
    }
    while(!q.empty()){
    	
	}
    long long ans = 0;
    for (int b = 1; b <= t; b++) {
        // cout<<f[b]<<" "<<b<<endl;
        ans = max(ans, f[b]);
    }
    cout << ans;
}
