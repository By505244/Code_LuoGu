#include<bits/stdc++.h>
using namespace std;
int main() {
	char ch;
	int w1,a;
	ch=getchar();
	while(ch>'9'||ch<'0') {
		ch=getchar();
	}
	int a2;
	while (true){
		if(ch=='.'){
			break;
		}
		a=(a<<1)+(a<<3)+(ch^48);
		ch=getchar();
	}
	ch=getchar();
	a2=ch^48;
	int l,k,j;
	l=a/100,k=a/10-(a/100*10),j=a%10;
	printf("%d.%d%d%d",a2,j,k,l);
}
