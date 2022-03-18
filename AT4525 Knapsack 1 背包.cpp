#include<bits/stdc++.h>
using namespace std;
long long f[100005],wi[105],v[105]; 
int main(){
	int n,w;
	cin>>n>>w;
	for(int b=1;b<=n;b++){
		cin>>v[b]>>wi[b];
	}
	long long ans=0;
	for(int b=1;b<=n;b++){
		for(int i=w;i>=v[b];i--){
			f[i]=max(f[i],f[i-v[b]]+wi[b]);
			ans=max(ans,f[i]);
		}
	}
	cout<<ans;
}

