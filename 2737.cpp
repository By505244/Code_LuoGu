#include<bits/stdc++.h>
using namespace std;
int Fun(long long a){
for(;a!=1;){
		if(a%2==1){
			cout<<a<<"*3+1=";
			a=a*3+1;
			cout<<a<<endl;
		}
		else if(a%2==0){
			cout<<a<<"/2=";
			a=a/2;
			cout<<a<<endl;
		}
	}}
int main(){
	long long  a;
	for(a=10;a<9999999999999999;a++){
	Fun(a);
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;}
	return 0;
}
