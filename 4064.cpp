#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[8];
	int b=0,c=0;
	cin>>a;
	for(b=0;b<8;b++){
		if(a[b]==49){
			c=c+1;
		}
	}
	cout<<c<<endl;
	return 0;
	}
