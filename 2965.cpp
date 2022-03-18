#include<bits/stdc++.h> 
using namespace std;
int n,k;
int a[100005];
int c[105];
int maxn[70][2],d[11];
int e=0;
bool test(int c,int d){
	bool flag;
	if(c==0){
		return true;
	}
	for(int b=0;b<c;b++){
		if(maxn[b][1]==d){
			return false;
		}
	}
	return true;
}
int main(){
	cin>>n>>k;
	for(int b=0;b<n;b++){
		cin>>a[b];
		for(int d=0;d<100;d++){
			if(a[b]==d){
				c[d]++;
				break;
			}
		}
	}
	for(int b=0;b<k;b++){
		for(int d=0;d<100;d++){
			if(c[d]>maxn[b][0]&&test(b,d)){
				maxn[b][1]=d;
				maxn[b][0]=c[d];
			}
		}
		n=n-maxn[b][0];
	}
	cout<<n;
}
