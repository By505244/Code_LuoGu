#include<bits/stdc++.h>
using namespace std;
int a[300005];
int main(){
	int n,w;
	cin>>w>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
	}
	sort(a+1,a+n+1);
	int ans=0;
	int h=0;
	int l=1,r=n;
	while(l<=r){
		if(a[l]+a[r]<=w){
			l++,r--;
			ans++;
		}else {
			ans++;
			--r;
		}
	}
	cout<<ans;
}
