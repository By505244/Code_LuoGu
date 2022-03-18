#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int a1[30005];
void t(int n) {
	for(int i=1; i<=n; i++) {
		a1[a[i]]++;
	}
}
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
int main() {
	a[0]=3000000;
	int n,k;
	n=read(),k=read();
	for(int i=1; i<=n; i++)a[i]=read();
	t(n);
	int b=0;
	for(int i=0; i<=30000; i++) {
		if(a1[i]!=0)b++;
		if(b==k) {
			printf("%d",i);
			return 0;
		}
	}
	printf("NO RESULT");
}
