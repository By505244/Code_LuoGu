#include<bits/stdc++.h>
using namespace std;
int a[500000];
int main(){
	int n,x;long long ans=0;
	cin>>n>>x;
	for(int b=1;b<=n;b++){
		cin>>a[b];
		if(a[b]>x){
			ans+=a[b]-x;
			a[b]=x;
		}
	}
	for(int b=1;b<n;b++){
		if(a[b]+a[b+1]>x){
		    ans+=a[b]+a[b+1]-x;
		    a[b+1]=x-a[b];
		//	a[b+1]-=a[b]+a[b+1]-x;
		}
		cout<<a[b]<<" ";
	}
	cout<<a[n];
	cout<<ans;
}
