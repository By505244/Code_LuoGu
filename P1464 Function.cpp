#include<bits/stdc++.h>
using namespace std;
int h[25][25][25];
inline int w(int a,int b,int c) {
	if(a<=0||b<=0||c<=0) {
		return 1;
	}
	if(a>20||b>20||c>20) {
		if(h[20][20][20]!=0) {
			return h[20][20][20];
		} else {
			h[20][20][20]=w(20,20,20);
			return h[20][20][20];
		}
	}
	if(h[a][b][c]!=0){
		return h[a][b][c];
	}
	if(a<b&&b<c) {
		h[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		return h[a][b][c];
	}
	h[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
	return h[a][b][c];
}
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	while(a!=-1||b!=-1||c!=-1) {
		printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
		
		scanf("%d%d%d",&a,&b,&c);
	}
}
