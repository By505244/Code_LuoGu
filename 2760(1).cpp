#include<bits/stdc++.h>
using namespace std;
int a[1000],c,c1=1;
int main(){
	int n;
	cin>>n;
	for(int b=0;b<1000;b++){
		a[b]=0;
	}
	for(int b=0;b<n;b++){
		for(c=0;c<c1;c++){
			if(a[c]>=3){
				c1++;
			}
			a[c]++;
		}
	}
	cout<<c1;
} 
