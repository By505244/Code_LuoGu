#include<bits/stdc++.h>
using namespace std;
int l[105],r[105];
int prime[100000005],v[100000005];
int n;
inline int read(){
	char ch;
	int w1=1,ans=0;
	ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch='-'){
			w1=-1;
		}
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		ans=(ans<<1)+(ans<<3)+(ch^48);
		ch=getchar();
	}
	return ans*w1;
}
inline void write(int X)
{
	if(X<0) {X=~(X-1); putchar('-');}
	if(X>9) write(X/10);
	putchar(X%10+'0');
}
int main() {
	freopen("fff.txt","w",stdout);
	n=read();
	int m=0;
	memset(v,0,sizeof(v));
	for(int i=2; i<=n; i++) {
		if(v[i]==0) {
			v[i]=i;
			prime[++m]=i;
		}
		for(int j=1; j<=m; j++) {
			if(prime[j]>v[i]||prime[j]>n/i)break;
			v[i*prime[j]]=prime[j];
		}
	}
	//cout<<prime[1];
	int q;
	q=read();
	for(int i=1; i<=q; i++) {
		int h=read();
		write(prime[read()]);
		printf("\n");
	}
}
