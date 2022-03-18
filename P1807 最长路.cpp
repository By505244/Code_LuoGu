/*memset(d, 0x3f, sizeof(d));
	memset(flag, 0, sizeof(flag));
	q.push(make_pair(0,s));
	d[s]=0;
	while(!q.empty()){
		int x=q.top().second;
		q.pop();
		if(flag[x]==1)continue;
		flag[x]=1;
		for(int i=head[x];i>=1;i=next[i]){
			ll y=fin[i],z=longs[i];
			if(d[y]>min(d[x],z)){
				d[y]=min(d[x],z);
				q.push(make_pair(-d[y],y));
			}
		}
	}

*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF = 0x7fffffff;
int tot,head[1000005],next[1000005],fin[1000005],longs[1000005];
bool flag[1000005];
ll d[1000005];
void add(int x,int y,int z){
	tot++,fin[tot]=y,longs[tot]=z,next[tot]=head[x],head[x]=tot;
}
int n,m;
priority_queue<pair<int,int> >q;
void di(int s){
	memset(d, 0x3f, sizeof(d));
	memset(flag, 0, sizeof(flag));
	flag[s]=1;
	for(int i=1;i<n;i++){
		int x=0;
		for(int b=1;b<=n;b++){
			if(flag[b]!=0&&(x==0||d[b]<d[x]))x=b;
		}
		for(int b=head[x];b>=1;b=next[b]){
			int y=fin[b],z=longs[b];
			d[y]=min(d[y],d[x]+z);
		}
	}
}
int main(){
	
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		z+=100000;
		z*=-1;
		cout<<z<<endl;
		add(x,y,z);
	}
	di(1);
	cout<<d[n]-100000;
}

