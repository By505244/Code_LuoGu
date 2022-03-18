#include<bits/stdc++.h>
using namespace std;
inline int read(){
	char ch;
	int w=1,ab=0;
	ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-'){
			w=-1;
		}
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		ab=(ab<<1)+(ab<<3)+(ch^48);
		ch=getchar();
	}
	return w*ab;
}
inline void write(int X)
{
	if(X<0) {X=~(X-1); putchar('-');}
	if(X>9) write(X/10);
	putchar(X%10+'0');
}
int a[605];
int main(){
	int n,w;
	cin>>n>>w;
	for(int b=1;b<=n;b++){
		a[read()]++;
		int maxn=max(1,b*w/100),h=0;
		for(int i=600;i>=0;i--){
			if(a[i]>=1){
				h+=a[i];
			}
			if(h>=maxn){
				write(i);
				break;
			}
		}
		putchar(' ');
	}
} 
