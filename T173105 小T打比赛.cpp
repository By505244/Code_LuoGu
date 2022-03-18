#include<bits/stdc++.h>
using namespace std;
int a[150000],b,ans=0,flag=1;
int main(){
	int n,k;
	cin>>n>>k;
	for(b=1;b<=n;b++){
		cin>>a[b];
	}
	for(b=1;b<=n;b++){
		if(a[b]<=k){
			ans++;
		}else{
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<n;
		return 0;
	}
	for(int b=n;b>=1;--b){
		if(a[b]<=k){
			ans++;
		}else {
			break;
		}
	}
	cout<<ans;
}
