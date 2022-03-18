
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 0x7fffffff;
int tot,head[1000005],next[1000005],fin[1000005],longs[1000005];
bool flag[1000005];
int d[1000005];
void add(int x,int y,int z){
	tot++,fin[tot]=y,longs[tot]=z,next[tot]=head[x],head[x]=tot;
}
priority_queue<pair<int,int> >q;
void di(int s){
	memset(d, 0x3f, sizeof(d));
	memset(flag, 0, sizeof(flag));
	q.push(make_pair(0,s));
	d[s]=0;
	while(!q.empty()){
		int x=q.top().second;
		q.pop();
		if(flag[x]==1)continue;
		flag[x]=1;
		for(int i=head[x];i>=1;i=next[i]){
			int y=fin[i],z=longs[i];
			if(d[y]>d[x]+z){
				d[y]=d[x]+z;
				q.push(make_pair(-d[y],y));
			}
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(x,y,z);
	}
	di(1);
	for(int i=2;i<=n;i++){
		printf("%d\n",d[i]);
	}
}

