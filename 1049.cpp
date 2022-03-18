#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d;
	cin>>n;
	int ch[n],ma[n],eng[n],num[n],sum[n]; 
	for(int b=0;b<n;b++){
		cin>>ch[b]>>ma[b]>>eng[b];
		sum[b]=ch[b]+ma[b]+eng[b];
		num[b]=b+1;
	}
	for(int a=1;a<=n-1;a++){
		for(int b=0;b<n-a;b++){
			if(sum[b]<sum[b+1]){
				d=sum[b];
				sum[b]=sum[b+1];
				sum[b+1]=d;
				//Ñ§ºÅ½»»»
				d=num[b];
				num[b]=num[b+1];
				num[b+1]=d;
			}
			else if(sum[b]==sum[b+1]){
				if(ch[b]<ch[b+1]){
					d=num[b];
				    num[b]=num[b+1];
				    num[b+1]=d;
				}
				else if(num[b]>num[b+1]){
					d=num[b];
				    num[b]=num[b+1];
				    num[b+1]=d;
				}
			}
		}
	}
	for(int b=0;b<5;b++){
		cout<<num[b]<<" "<<sum[b]<<endl;
	}
}
