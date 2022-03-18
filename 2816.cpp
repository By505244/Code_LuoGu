#include<bits/stdc++.h>
using namespace std;
int main(){
	bool flag=1;
	int n=1,k,sum=0,n1=0,a;
	cin>>k;
	while(flag){
		for(a=0;a<n;a++){
			sum=sum+n;
		}
		n++;
		n1=n1+a;
		if(n1==k-1){
			flag=0;
		}
	}
	cout<<sum<<endl;
} 
