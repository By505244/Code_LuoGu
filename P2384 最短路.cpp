#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 0x7ffffff*2;
ll d[100005],next[200005],val[200005],edge[200005],first[200005];
ll num;
ll flag[100005];
ll s;
ll n,m;
priority_queue<pair<ll,ll> >q;
void di() {
	d[1]=0;
	q.push(make_pair(0,1));
	
	while(!q.empty()) {
		int x=q.top().second;
		q.pop();
		if(flag[x]==1)continue;
		flag[x]=1;
		for(int i=first[x]; i; i=next[i]) {
			int y=val[i],z=edge[i];
			if(d[y]>d[x]+z) {
				d[y]=d[x]+z;
				q.push(make_pair(-d[y],y));
			}
		}
	}
}
void add(int x,int y,int z) {
	if(x!=y)val[++num]=y,edge[num]=z,next[num]=first[x],first[x]=num;
}
int main() {
	cin>>n>>m>>s;
	for(int i=0; i<100005; i++)d[i]=1000000001;
	for(int i=1; i<=m; i++) {
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(x,y,z);
	}
	di();
	for(int i=1; i<=n; i++) {
		cout<<d[i]<<" ";
	}
}
