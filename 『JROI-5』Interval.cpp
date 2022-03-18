#include<bits/stdc++.h>
#define ll long long
#define debug puts("I AK IOI");
#define INF  0x7fffffff

using namespace std;
inline int read() {
	int x=0;
	bool flag=1;
	char c=getchar();
	while(c<'0'||c>'9') {
		if(c=='-')
			flag=0;
		c=getchar();
	}
	while(c>='0'&&c<='9') {
		x=(x<<1)+(x<<3)+c-'0';
		c=getchar();
	}
	return (flag?x:~(x-1));
}
struct Node {
	int a,k;
} a[4000005];
bool cmp(const Node a,const Node b) {
	return a.a<b.a;
}
int n,f[4000005];
bool flag[4000005];
int main() {
	int n;
	printf("%.2lf",flag);
	
	scanf("%d",&n);
	for(int i=1; i<=n; i++)a[i].a=read(),a[i].k=i;
	int minn=INF;
	int ans_=INF;
	for(int i=1; i<=n; i++) {
		f[i]=read();
		if(f[i]>i)f[i]=INF;
		if(f[i]!=INF&&minn==INF) {
			minn=i;
		}
		if(ans_==INF&&f[i]<1)ans_=i;
	}
	if(minn==INF){
		printf("0");
		return 0;
	}else if(ans_!=INF){
		printf("%d",ans_);
	}else{
		printf("%d",minn);
	}
}

