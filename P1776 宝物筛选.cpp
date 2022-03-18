#include<bits/stdc++.h>
#define ll long long

using namespace std;
int dp[40005],n,w;
struct Node {
	int v,w,num[500],l;
} a[100005];
inline int read() {
	char ch;
	int w1=1,as=0;
	ch=getchar();
	while(ch>'9'||ch<'0') {
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		as=(as<<1)+(as<<3)+(ch^48);
		ch=getchar();
	}
	return as;
}
int main() {
	n=read(),w=read();
	for(int i=1; i<=n; i++) {
		int h;
		a[i].v=read(),a[i].w=read(),h=read();
		a[i].l=1;
		int sum=0;
		for(int b=1; sum+b<=h; b=b<<1) {
			sum+=b;
			a[i].num[a[i].l]=b;
			a[i].l++;
		}
		a[i].num[a[i].l]=h-sum;
	}
	for(int i=1; i<=n; i++) {
		for(int o=1; o<=a[i].l; o++) {
			for(int b=w; b>=a[i].w*a[i].num[o]; --b) {
				dp[b]=max(dp[b],dp[b-(a[i].w*a[i].num[o])]+(a[i].v*a[i].num[o]));
			}
		}
	}
	cout<<dp[w];
}
/*
2 20
1 5 4*/
