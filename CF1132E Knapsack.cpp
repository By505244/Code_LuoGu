#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll ans=0, w, a[15];
inline void dfs(ll x, ll sum) {
	if (x == 9) {
		ans = max(ans, sum);
		return;
	}
	ll v=min((w-sum)/x,a[x]);
	for (ll b=1; b<=9; b++) {
		dfs(x+1,sum+max((long long)0,(v--)*x));
	}
}
int main() {
	cin>>w;
	for (ll b=1; b<=8; b++) cin>>a[b];
	dfs(1, 0);
	cout<<ans;
	return 0;
}

