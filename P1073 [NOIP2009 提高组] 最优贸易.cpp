#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;

int n,m;
int price[100005],head[100005],to[500005],Next[500005],tot=0;
int head_[100005],to_[500005],Next_[500005];
int d[100005],d_[100005];
bool flag[100005],flag_[100005];

struct Node {
	int edge,num;
	bool operator < (const Node b) const {
		return edge<b.edge;
	}
};
struct node {
	int edge,num;
	bool operator <(const node b)const {
		return edge>b.edge;
	}
};

priority_queue<Node>q;
priority_queue<node>q_;

void add(int x,int y) {
	Next[++tot]=head[x],head[x]=tot,to[tot]=y;
	Next_[tot]=head_[y],head_[y]=tot,to_[tot]=x;
}

void _() {
	//正向
	for(int i=1; i<=n; i++) {
		flag[i]=0;
		//d[i]=0;
		d[i]=0x3f3f3f3f;
	}
	d[1]=price[1];
	Node a;
	a.edge=d[1],a.num=1;
	q.push(a);
	while(q.size()) {
		a=q.top();
		q.pop();
		if(flag[a.num])continue;
		flag[a.num]=true;
		for(int i=head[a.num]; i>0; i=Next[i]) {
			int x=a.num,y=to[i];
			if(d[y]>min(d[x],price[y])) {
				d[y]=min(d[x],price[y]);
				Node b;
				b.edge=min(d[x],price[y]);
				b.num=y;
				q.push(b);
			}
		}
	}
}

void __() {
	//反向
	for(int i=1; i<=n; i++) {
		flag_[i]=0;
		//d_[i]=0;
		d_[i]=0xcfcfcfcf;
	}
	d_[n]=price[n];
	node a;
	a.edge=d_[n],a.num=n;
	q_.push(a);

	while(q_.size()) {
		a=q_.top();
		q_.pop();
		if(flag_[a.num])continue;
		flag_[a.num]=1;
		
		//cout<<head[5];
		//printf("%d\n",a.num);
		for(int i=head_[a.num]; i; i=Next_[i]) {
			//cout<<i<<endl;
			int x=a.num,y=to_[i];
			if(d_[y]<d_[x]) {
				d_[y]=d_[x];
				d_[y]=max(d_[y],price[y]);
				node b;
				b.edge=d_[y],b.num=y;
				//printf("%d %d\n",y,d_[y]);
				q_.push(b);
			}
		}
	}
}

int main() {
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) scanf("%d",&price[i]);
	for(int i=1; i<=m; i++) {
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		//printf("%d\n",i);
		add(x,y);
		if(z==2)add(y,x);
	}
	_();
	__();
	int ans=0;
	for(int i=1; i<=n; i++) {
		ans=max(ans,d_[i]-d[i]);
		//printf("%d %d\n",d_[i],d[i]);
	}
	printf("%d\n",ans);
}
