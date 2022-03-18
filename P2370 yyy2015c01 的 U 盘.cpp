#include<bits/stdc++.h>
#define ll long long

using namespace std;
int n,p,s,dp[1005];
struct Node{
	int w,v;
}a[1005];
bool cmp(const Node a,const Node b){
	return a.w<b.w;
}
int main(){
	cin>>n>>p>>s;
	for(int i=1;i<=n;i++){
		cin>>a[i].w>>a[i].v;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int i1=s;i1>=a[i].w;i1--){
			dp[i1]=max(dp[i1],dp[i1-a[i].w]+a[i].v);
			if(dp[i1]>=p){
				cout<<a[i].w<<endl;
				return 0;
			}
		}
	}
	cout<<"No Solution!";
}

