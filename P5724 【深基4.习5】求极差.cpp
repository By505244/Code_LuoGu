#include<bits/stdc++.h>
using namespace std;
int main(){
	int minn=0x7fffffff,maxn=-0x7fffffff;
	int n;
	cin>>n;
	int h;
	for(int b=1;b<=n;b++){
		cin>>h;
		minn=min(minn,h);
		maxn=max(maxn,h);
	}
	cout<<maxn-minn;
}