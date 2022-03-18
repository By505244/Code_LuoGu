#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,j=0,j1,a,b[1000],c=0,c1=0;
	cin>>n>>k;
	for(a=2;a<=n;a++){
		j1=k%a;
		if(k<=n){
		if(b[c]==j1){
			c=c+1;
		}else {
			b[c1]=j1;
			c1++;
		}
		if(c==c1){
			j=0;
			break;
		}}
		j=j+j1;
}
	for(a=0;a<c1;a++){
		j=b[a]+j;
	}
	j=k/c1*j;
	j1=k/c1*c1;
	for(a=j1;a<=n;a++){
		j=k%a+j;
	}
	cout<<j;
}
