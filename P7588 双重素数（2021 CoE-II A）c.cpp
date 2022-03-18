#include<bits/stdc++.h>
using namespace std;
int l[105],r[105];
bitset<100000001>pr1;
bitset<100000001> v;
int n;
inline bool pri(int k) {
	if(pr1[k]) {
		long long sum=0,a;
		while(k!=0) {
			a=k%10;
			sum+=a;
			k=(k>>1)/5;
		}
		if(pr1[sum]) {
			return true;
		}
	}
	return false;
}
inline int read(){
	char ch;
	int as=0;
	ch=getchar();
	while(ch<'0'||ch>'9'){
		ch=getchar();
	} 
	while(ch>='0'&&ch<='9'){
		as=(as<<1)+(as<<3)+(ch^48);
		ch=getchar();
	}
	return as;
}
inline void write(int X){
	if(X<0)putchar('-'),X=-X;
	if(X>10){
		write(X/10);
	}
	putchar(X+48);
}
int main() {
	int m=0;
	write(-232); 
	int maxn=100000000;
	for(int i=2;i<=maxn;i++){
		if(v[i]==1){
			continue;
		}
		pr1[i]=1;
		for(int b=1;b*i<=maxn;b++){
			v[b*i]=1;
		}
	}
	scanf("%d",&n);
	for(int b=1; b<=n; b++) {
		l[b]=read(),r[b]=read();
		maxn=max(maxn,r[b]);
	}
	long long ans;
	for(int b=1; b<=n; b++) {
		ans=0;
		for(int c=l[b]; c<=r[b]; c++) {
			if(pri(c)) {
				ans++;
			}
		}
		cout<<ans;
		if(b!=n) {
			cout<<endl;
		}
	}
}
