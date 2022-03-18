#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum[50005];
ll n;
ll ans=0; /*void dfs(ll k,ll sum,ll ans1) { if(sum%7==0) { ans=max(ans,ans1); } if(k==n) { return; } dfs(k+1,sum+a[k],ans1++); dfs(k+1,sum,ans1); }*/ int main() {
	cin>>n;
	for(int b=1; b<=n; b++) {
		int h;
		scanf("%d",&h);
		h%=7;
		sum[b]=sum[b-1]+h;
	}
	for(ll b=1;b<=n;b++){
		if(sum[b+1]-sum[b]==0){
			continue;
		}
		for(ll i=1;i<b;i++){
			if((sum[b]-sum[i])%7==0){
				ans=max(ans,b-i);
			}
		}
	}
	cout<<ans;
}
