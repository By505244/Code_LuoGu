#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100],b,maxn=-1000000;
	for(b=1;a[b-2]!=-1;b++){
		cin>>a[b-1];
	}
	b=b-1;
	for(int c=0;c<b;c++){
		if(a[c]>maxn){
			maxn=a[c];
		}
	}
	cout<<maxn<<endl;
}
