#include<bits/stdc++.h>
#define ll long long
inline int read() {
	char ch;
	int a=0;
	ch=getchar();
	while(ch<'0'||ch>'9') {
		ch=getchar();
	}
	while(ch>='0'&&ch<='9') {
		a=(a<<1)+(a<<3)+(ch^48);
		ch=getchar();
	}
	return a;
}
using namespace std;
int ans;
bool flag[20005][20005];
int n,m,k;
void pz(int x,int y) {
	for(register int b=1; b<=n; b++) {
		flag[b][y]=1;
	}
	int b1=x+1;
	for(register int b=y+1; b<=n; b++) {
		flag[x][b]=1;
	}
	b1=x-1;
	for(register int b=y+1; b<=n; b++) {
		if(b1>=1&&a[b]==b1) {
			return false;
		}
		b1--;
	}
	b1=x+1;
	for(register int b=y-1; b>=1; b--) {
		if(b1<=n&&a[b]==b1) {
			return false;
		}
		b1++;
	}
	b1=x-1;
	for(register int b=y-1; b>=1; b--) {
		if(b1>=1&&a[b]==b1) {
			return false;
		}
		b1--;
	}

}
int main() {
	n=read(),m=read(),k=read();
	for(int i=1; i<=k; i++) {
		int x,y;
		x=read(),y=read();
		pz(x,y);
	}
}

