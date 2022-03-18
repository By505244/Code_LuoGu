#include<bits/stdc++.h>
using namespace std;
int main(){
	char a;
	int b,c;
	cin>>a;
	a=a-32;
	for(b=65;b<=90;b++){
		if(a==b){
			c=b-65+1;
		}
	}
	cout<<a<<endl<<c<<endl;
}
