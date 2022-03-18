#include<bits/stdc++.h>
//#define int long long
//#define int short
using namespace std;
int m,h;
int ans;
void dfs(int k,int sum,int d) {
	if(k==m&&sum==0) {
		ans++;
		return;
	}
	if(k==m){
		return;
	}
	for(int b=sum; b>=0; --b) {
		if(b>=d) {
			//cout<<k<<" "<<d<<" "<<b<<endl;
			dfs(k+1,sum-b,b);
		} else {
			break;
		}
	}
}
int main() {
	int n;
	cin>>n;
	for(int b=1; b<=n; b++) {
		ans=0;
		scanf("%d%d",&h,&m);
		dfs(0,h,0);
		cout<<ans<<endl;
	}
}

