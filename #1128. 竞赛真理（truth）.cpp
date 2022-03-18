#include<bits/stdc++.h>
using namespace std;
int n,t,w[15000],t1[1500],f[15000],w1[150000],t2[150000],ans;
int main() {
	cin>>n>>t;
	for(int b=1; b<=n; b++) {
		cin>>w[b]>>t1[b]>>w1[b]>>t2[b];
	}
	for(int b=1; b<=n; b++) {
		for(int i=t; i>=t2[b]; i--) {
			if(i>=t1[b]) {
				f[i]=max(max(f[i],f[i-t1[b]]+w[b]),max(f[i],f[i-t2[b]]+w1[b]));
			} else {
				f[i]=max(f[i],f[i-t2[b]]+w1[b]);
			}
		}
	}
	for(int b=1;b<=t+10;b++){
		ans=max(ans,f[b]);
	}
	cout<<ans;
}
