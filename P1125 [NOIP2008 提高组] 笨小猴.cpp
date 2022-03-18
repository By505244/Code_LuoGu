#include<bits/stdc++.h>
#define ll long long
const int INF=0x7fffffff;

using namespace std;
int h[250];
int main() {
	char a[100];
	cin>>a;
	int b=strlen(a);
	for(int i=0; i<b; i++) {
		h[int(a[i])]++;
	}
	int minn=INF,maxn=0;
	for(int i=int('a'); i<=int('z'); i++) {
		if(h[i]!=0) {
			minn=min(minn,h[i]);
			maxn=max(maxn,h[i]);
		}
	}
	if((maxn-minn)==0||maxn-minn==1) {
		printf("No Answer\n0");
		return 0;
	}
	for(int i=2; i<sqrt(maxn-minn); i++) {
		if((maxn-minn)%i==0||(maxn-minn)==0||maxn-minn==1) {
			printf("No Answer\n0");
			return 0;
		}
	}
	printf("Lucky Word\n%d",maxn-minn);
}

