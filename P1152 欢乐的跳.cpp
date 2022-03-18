#include<bits/stdc++.h>
using namespace std;
int a[5000000],c[50000000];
bool cmp(const int a,const int b){
	return a<b;
}
int main(){
	int n;
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
	}
	for(int b=1;b<n;b++){
		c[b]=abs(a[b]-a[b+1]);
	}
	sort(c+1,c+n,cmp);
	for(int b=n-1;b>=1;b--){
		if(c[b]!=b){
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
}
