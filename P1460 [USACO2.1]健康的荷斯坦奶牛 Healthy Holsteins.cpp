#include<bits/stdc++.h>
//#define int long long
//#define int short
using namespace std;
int v,a[500],s[500][500],g;
int sum[500];
int ans=0x7ffffff;
int ans1[500];
int ans2[500];
bool can() {
	for(int b=1; b<=v; b++) {
		if(sum[b]<a[b]) {
			//cout<<b<<" "<<sum[b]<<" "<<a[b]<<endl;;
			return false;
		}
	}
	return true;
}
void dfs(int k,int sum1) {
	if(k-1>g) {
		return;
	}
	if(can()) {
		if(sum1<ans) {
			cout<<sum1;
			ans=sum1;
			for(int b=0; b<=499; b++) {
				ans1[b]=ans2[b];
			}
		}
	}
	dfs(k+1,sum1);
	for(int b=1; b<=v; b++) {
		sum[b]+=s[k][b];
		//cout<<sum[b]<<" ";
	}
//	cout<<k+1<<endl;
	ans2[sum1]=k;
	dfs(k+1,sum1+1);
	for(int b=1; b<=v; b++) {
		sum[b]-=s[k][b];
	//	cout<<sum[b]<<" ";
	}
//	cout<<k+1<<endl;
	
}
int main() {
	cin>>v;
	for(int b=1; b<=v; b++) {
		cin>>a[b];
	}
	cin>>g;
	for(int b=1; b<=g; b++) {
		for(int i=1; i<=v; i++) {
			cin>>s[b][i];
		}
	}
	dfs(1,0);
	cout<<ans<<" ";
	for(int b=0;b<ans;b++){
		cout<<ans1[b]<<" ";
	}
}

