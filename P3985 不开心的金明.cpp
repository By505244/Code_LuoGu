#include<bits/stdc++.h>
using namespace std;
int dp[10005][10005];
struct Node {
	int important,price;
} a[1000];

int main() {
	int n,w;
	int minn=0x7fffffff;
	cin>>n>>w;
	int sum=0;
	for(int i=1; i<=n; i++) {
		cin>>a[i].price>>a[i].important;
		minn=min(minn,a[i].price);
	}
	for(int i=1; i<=n; i++) {
		a[i].price-=minn-1;
		sum+=a[i].price;
	}
	for(int b=1; b<=n; b++) {
		for(int i=sum; i>=a[b].price; i--) {
			for(int h=n; h>=1; --h) {
				dp[i][h]=max(dp[i][h],dp[i-a[b].price][h-1]+a[b].important);
				//cout<<dp[i][h]<<" ";
			}
			//cout<<endl;
		}
		//cout<<endl<<endl;
	}
	int ans=0;
	for(int b=1;b<=sum;b++){
		for(int i=1;i<=n;i++){
			if(w-(i*(minn-1))>=b)ans=max(ans,dp[b][i]);//cout<<dp[b][i]<<endl;
		}
		//cout<<endl;
	}
	cout<<ans;
}
/*
5 10
2 800
5 400
5 300
3 400
2 200

1 800
4 400
4 300
2 400
1 200
*/
