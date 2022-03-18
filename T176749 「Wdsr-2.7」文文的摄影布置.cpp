#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;
int a[500005],b[500005];
int n,m; 
using namespace std;
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
void work(){
	
}
void add(int a,int b,int c){
	
}
int main(){
	/*n=read(),m=read();
	for(int i=1;i<=n;i++)a[i]=read();
	for(int i=1;i<=n;i++)b[i]=read();
	for(int i=1;i<=m;i++){
		int x,y,z;
		z=read(),x=read(),y=read();
		if(z==1){
			a[x]=y;
			continue;
		}
		if(z==2){
			b[x]=y;
			continue; 
		}
		if(z==3){
			work();
			
		}
	}
	return 0;*/
	int b,c;
	int &a=b;
	a=5;
	cout<<a<<" "<<b<<c;
}

