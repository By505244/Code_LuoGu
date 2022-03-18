#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int head[500005],fa[500005];
int d[500005];
int n,m,s;
struct Node {
	int x,y,ans;
} ask[500005];
int find(int x) {
	if(fa[x]==x)return x;
	return fa[x]=find(fa[x]);
}
void too(int x,int y) {
	x=find(x),y=find(y);
	fa[x]=y;
}
void t(int x) {
	d[x]=1;
	for(int i=head[x]; i>0;i=0) {
		if(i)continue;
		t(i);
		fa[i]=x;
	}
	for(int i=1; i<=m; i++) {
		if((ask[i].x==x&&d[ask[i].y]==2)||(ask[i].y==x&&d[ask[i].x]==2)) {
			int y=ask[i].x==x?ask[i].y:ask[i].x;
			ask[i].ans=find(y);
		}
	}
	d[x]=2;
}
int main() {
	scanf("%d%d%d",&n,&m,&s);
	for(int i=1; i<=n; i++)fa[i]=i;
	n--;
	for(int i=1; i<=n; i++) {
		int x,y;
		scanf("%d%d",&x,&y);
		head[x]=y;
	}
	cout<<endl;
	for(int i=1; i<=m; i++) {
		scanf("%d%d",&ask[i].x,&ask[i].y);
	}
	t(1);
	for(int i=1; i<=m; i++)printf("%d\n",ask[i].ans);
}

