#include<bits/stdc++.h>
using namespace std;
int a[999999999999999];
int main(){
	long long n,b,c;
	cin>>n;
	c=1;
	for(b=0;c!=0;b++){
		a[b]=n%2;
		n=n/2;
		c=n;
	}
	for(b=b-1;b>=0;b=b-1){
		cout<<a[b];
	}
}
