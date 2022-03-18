#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;
inline int read() {
	char ch;
	int as=0;
	ch=getchar();
	while(ch<'0'||ch>'9') {
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		as=(as<<1)+(as<<3)+(ch^48);
		ch=getchar();
	}
	return as;
}
using namespace std;
long long ans=0;
long long js(long long a,int n) {
	long long as=2;
	if(n==1)return a;
	for(int i=2; i<n; i++) {
		as*=2;
		as%=100000007;
	}
	return as*a%100000007;
}
long long bz(long long a,int n) {
	long long as=3;
	for(int i=1; i<n; i++) {
		as*=2;
		as%=100000007;
	}
	return (as*a/2)%100000007;
}
int cf[1005];
int main() {
	int t;
	t=read();
	for(int b=1; b<=t; b++) {
		int l=1;
		for(int i=0; i<1005; i++)cf[i]=0;
		ans=0;
		int n;
		n=read();
		for(int i=1; i<=n; i++) {
			long long a=read();
			int flag=0;
			for(int i1=1; i1<l; i1++) {
				if(cf[i1]==a)flag++;
			}
			cf[l]=a,l++;
			if(flag==1)ans+=100000007,ans-=js(a,n),ans+=bz(a,n);
			else if(flag==0)ans+=js(a,n);
			ans%=100000007;
		}
		printf("Case %d: %d\n",b,ans);
	}
	return 0;
}
//1 1 2 3
//1+3+4+6
//{1}{1}{2}{3}{1,1}{1,2}{1,3}{1,2}{1,3}{1,1,2}{1,1,3}{1,2,3}{1,2,3}{2,3}{1,1,2,3}
//    /                        /    /                           /
//   -4
//12
//{1}{1}{1}{3}{1,1}{1,1}{1,3}{1,1}{1,3}{1,1,1}{1,1,3}{1,1,3}{1,1,3}{1,3}{1,1,1,3}
//  /   /           /          /   /                    /       /   /
//12
//{1}{1}{1}{1}{1,1}{1,1}{1,1}{1,1}{1,1}{1,1,1}{1,1,1}{1,1,1}{1,1,1}{1,1}{1,1,1,1}
///    /  /  /        /    /    /   /             /       /      /
//12

//{1}{1}{2}{1,1}{1,2}{1,1,2}{1,2}
//6

//{1}{1,1}{1,1,1}

//{1}{1,1}
//3
