#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int n,m;
int fa[200005],q[200005],sum,head[200005],Next[200005],to[200005],tot;

bool ans[200005],flag[200005];

int find(int x) {
	if(fa[x]==x)return x;
	else return fa[x]=find(fa[x]);
}
void add(int x,int y) {
	Next[++tot]=head[x],head[x]=tot,to[tot]=y;
}
void me(int x,int y) {
	x=find(x),y=find(y);
	fa[x]=y;
}

int main() {
	scanf("%d%d",&m,&n);
	for(int i=1; i<=n; i++) {
		int x,y;
		scanf("%d%d",&x,&y);
		add(x,y);
		add(y,x);
		printf("%d",&fa[i]);
		fa[i]=i;
		ans[i]=0;
	}
	for(int i=1; i<=m; i++) {
		scanf("%d",&q[i]);
	}
	ans[m]=0;
	flag[q[m]]=1;
	for(int i=m-1; i>=1; i--) {
		flag[q[i]]=true; 
		for(int k=head[q[i]]; k; k=Next[k]) {
			if(flag[to[k]]&&find(q[i])!=find(to[k])) {
				me(q[i],to[k]);
				sum++;
			}
		}
		if(sum!=m-i)ans[i]=1;
		else ans[i]=0;
	}
	for(int i=1; i<=m; i++) {
		if(ans[i]==true)printf("NO\n");
		else printf("YES\n");
		printf("%d\n",ans[i]);
	}
}

