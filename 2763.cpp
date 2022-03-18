#include<bits/stdc++.h>
using namespace std;
int f(int x){
	if(x==1){
		return 10;
	}
	if(x>1){
		return f(x-1)+2;
	}
}
int main(){
	int x;
	cin>>x;
	cout<<f(x);
}
