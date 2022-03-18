#include<bits/stdc++.h>
using namespace std;
int f[500000],g[500000];
int main(){
	int n,m,minn=4777777777;
	cin>>m>>n;
	for(int a=0;a<m;a++){
		cin>>f[a];
	}
	for(int a=0;a<n;a++){
		cin>>g[a];
	}
	for(int a=0;a<m;a++){
		for(int b=0;b<n;b++){
			minn=min(minn,abs(f[a]-g[b]));
		}
	}
	cout<<minn;
} 
