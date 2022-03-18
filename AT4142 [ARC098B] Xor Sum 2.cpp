#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int a[200015];
inline int read(){
	char ch;
	int returns=0;
	ch=getchar();
	while(ch<'0'||ch>'9'){ch=getchar();}
	while(ch>='0'&&ch<='9'){
		
		returns=(returns<<1)+(returns<<3)+(ch^48);
		ch=getchar();
	}
	return returns;
}
int j;
unsigned long long now;
unsigned long long ans=0;
int n;

int main(){
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	j=1;
	for(int i=1;i<n;i++){
		while(j<=n&&(now^a[j])==(now+a[j])){
			now^=a[j];
			j++;
		}
		now^=a[i];
		ans+=j-i;
	}
	cout<<ans+1;
	return 0;
	
}

