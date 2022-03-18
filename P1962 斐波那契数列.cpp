#include<bits/stdc++.h>
using namespace std;
#define ll long long
inline ll f(ll n){
	if(n<=2){
		return 1; 
	}
	return f(n-1)+f(n-2)%1000000000;
}
int main(){
	ll n;
	cin>>n;
	cout<<f(n);
}
//9223372036854775807

