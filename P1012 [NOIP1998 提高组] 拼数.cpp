#include<bits/stdc++.h>
using namespace std;
string a[500000];
int n;
bool cmp(const string a,const string b){
	return a+b<b+a;
}
int main(){
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a[b];
	}
	sort(a+1,a+n+1,cmp);
	for(int b=n;b>=1;b--){
		cout<<a[b]<<" ";
	}
}
