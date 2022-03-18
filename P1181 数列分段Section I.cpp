#include<bits/stdc++.h>
using namespace std;
int a[1500000];
int main(){
	int n,m;
	int ans;
	cin>>n>>m;
	for(int b=1;b<=n;b++){
		scanf("%d",&a[b]);
		if(b!=1&&a[b]+a[b-1]<=m){
			a[b]=a[b]+a[b-1];
		}else {
			ans++;
		}
	}
	cout<<ans;
}
