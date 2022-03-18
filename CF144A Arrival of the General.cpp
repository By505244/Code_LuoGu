#include<bits/stdc++.h>
#define ll long long

const int INF=0X7fffffff;
using namespace std;
inline int read(){
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
struct Node{
	int k,num;
}minn,maxn;
int ans;
int n;
int a[105];

int main(){
	minn.num=INF;
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		if(a[i]<=minn.num){
			minn.k=i;
			minn.num=a[i];
		}
		if(a[i]>maxn.num){
			maxn.k=i;
			maxn.num=a[i];
		}
	}
	if(maxn.k<minn.k){
		cout<<maxn.k+n-minn.k-1;
	}else{
		cout<<maxn.k+n-minn.k-2;
	}
}

