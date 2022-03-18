#include<bits/stdc++.h>
using namespace std;
int n,ave,a[5000000],ans;
int main(){
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
		ave=ave+a[b]; 
	}
	ave=ave/n;
	for(int b=1;b<=n;b++){
		if(a[b]>ave){
			a[b+1]=a[b+1]+a[b]-ave;
			ans++;
		}else if(a[b]<ave){
			a[b+1]=a[b+1]+a[b]-ave;
			ans++;
		}
	}
	cout<<ans;
}
