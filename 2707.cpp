#include<bits/stdc++.h>
using namespace std;
int sum[6000000];
int main(){
	int m,h=0;
	cin>>m;
	//首项+末项的和乘项数/2；
	m=m/2;
	for(int a=2;a<=m;a=a+2) {
		for(int b=1;b<=m/2;b++){
			for(int c=2;c<=m/2;c++){
				sum[a-1]=b+c;
				sum[a-1]=sum[a-1]*a;
				if(sum[a-1]==m){
					cout<<b<<" "<<c<<endl;
				}
			}
		}
	}
	return 0;
}
