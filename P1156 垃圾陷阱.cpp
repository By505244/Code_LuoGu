#include<bits/stdc++.h>
using namespace std;
int dp[5000000];
struct rec{
	int t,f,h;
}l[101];
bool cmp(const rec a,const rec b){
	return a.t<b.t;
}
int main(){
	int d,n;
	cin>>d>>n;
	int sum=0;
	for(int b=1;b<=n;b++){
		scanf("%d%d%d",&l[b].t,&l[b].f,&l[b].h);
	}
	l[0].t=0,l[0].f=10,l[0].h=1;
	sort(l,l+n,cmp);
	for(int b=0;b<=n;b++){
		for(int i=d;i>=l[b].f;i--){
			dp[i]=max(dp[i],dp[i-l[b].f]+l[b].h);
		}
	}
	int ans=0;
	for(int b=1;b<=d;b++){
		ans=max(ans,dp[b]);
		if(dp[b]>=d){
			cout<<dp[b]<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
} 
