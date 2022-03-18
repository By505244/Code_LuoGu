#include<bits/stdc++.h>
//#define int long long
//#define int short
#define ll long long
using namespace std;
//快读
inline ll read() {
	ll x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9') {
		if(ch=='-')
			f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		x=(x<<1)+(x<<3)+(ch^48);
		ch=getchar();
	}
	return x*f;
}
//高斯求和
inline long long dc(long long n) {
	return (1+n)*n>>1;
}
inline long long dd(long long st,long long n) {
	return (st+n)*(n-st+1)>>1;
}
int main() {
	long long n;
	n=read();
	for(register long long b=1; b<=n; b++) {
		long long k,a,ans;
		k=read(),a=read(),ans=read();
		ll yy=dc(a);
		if(ans>k*a-yy+a||ans<yy) {
			printf("No\n");
		} else {
			printf("Yes\n");
		}
	}
}
