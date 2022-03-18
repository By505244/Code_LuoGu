#include<bits/stdc++.h>
//#define int long long
//#define int short
using namespace std;
int sum;
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
int a[50000];int z[5000];
int main(){
	int n;
	n=read();
	for(int b=1;b<=n;b++){
		if(sum==n){
			break;
		}
		printf("? 2 %d",b);
		int h;
		h=read();
		for(int i=1;i<=h;i++){
			z[i]=read();
		}
		fflush(stdout);
		for(int i=1;i<=h;i++){
			if(a[z[i]]!=0||z[i]==b){
				continue;
			}
			printf("? 1 %d %d",b,z[i]);
			int j=read();
			fflush(stdout);
			if(j==1){
				a[z[i]]=b;
				sum++;
			}
		}
	}
	printf("! ");
	for(int b=2;b<=n;b++){
		printf("%d ",a[b]);
	}
	fflush(stdout);
}

