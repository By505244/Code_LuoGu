#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF =0x7fffffff;
ll k,n,a[55];
ll dp[2000015] ;
int main(){
	cin>>k>>n;
	for(ll i=0;i<=2000004;i++){
		dp[i]=INF;
	}
	ll maxn=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	maxn*=k;
	maxn+=10;
	dp[0]=1;
	for(ll i=1;i<=n;i++){
		for(ll i1=a[i];i1<=maxn;i1++){
			if(dp[i1-a[i]]!=INF&&dp[i1-a[i]]+1<=k+1){
				dp[i1]=min(dp[i1],dp[i1-a[i]]+1);
			}
		}
	}
	for(ll i=0;i<=maxn;i++){
		//cout<<i<<" "<<dp[i]<<endl;
		if(dp[i]>k+1||dp[i]==INF){
			cout<<i-1;
			return 0;
		}
	}
}
