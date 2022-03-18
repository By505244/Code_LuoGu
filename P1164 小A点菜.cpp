#include<bits/stdc++.h>
using namespace std;
int n,m ,a[1000],dp[10005];
int main(){
	cin>>n>>m;
	for(int b=1;b<=n;b++){
		scanf("%d",&a[b]);
	}
	dp[0]=1;
	for(int b=1;b<=n;b++){
		for(int i=m;i>=a[b];--i){
			dp[i]+=dp[i-a[b]];
		}
	}
	cout<<dp[m];
}