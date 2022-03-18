#include<bits/stdc++.h>
#define ll long long

using namespace std;
char a[10005];
int n=0;
int g=0,r=0,s=0,h=0;
bool G=0,R=0,S=0,H=0;
int minn;
void dfs(int k) {
	if(k==n) {
		minn=min(min(g,r),min(s,h));
		if(minn==g) {
			G=1;
		}
		if(minn==r) {
			R=1;
		}
		if(minn==s) {
			S=1;
		}
		if(minn==h) {
			H=1;
		}
		return;
	}
	if(a[k]=='G')g++,dfs(k+1),g--;
	else if(a[k]=='R')r++,dfs(k+1),r--;
	else if(a[k]=='S')s++,dfs(k+1),s--;
	else if(a[k]=='H')h++,dfs(k+1),h--;
	else if(a[k]=='?') {
		minn=min(min(g,r),min(s,h));
		if(minn==g)g++,dfs(k+1),g--;
		if(minn==r)r++,dfs(k+1),r--;
		if(minn==s)s++,dfs(k+1),s--;
		if(minn==h)h++,dfs(k+1),h--;
	}
}
int main() {
	cin>>n;
	for(int i=0; i<=10000; i++)a[i]=0;
	scanf("%s",&a);
	dfs(0);
	if(G==1)cout<<"Gryffindor\n";
	if(H==1)cout<<"Hufflepuff\n";
	if(R==1)cout<<"Ravenclaw\n";
	if(S==1)cout<<"Slytherin\n";
}

