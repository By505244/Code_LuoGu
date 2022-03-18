#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;
const int INFF = 0x3f3f3f3f;

using namespace std;
struct Node {
	int num,d;
};
bool operator <(const Node a,const Node b) {
	return (a.d>b.d);
}

bool flag[55];
int d[55],n,m,k,a,b;
int head[55],edge[55*55],to[55*55],Next[55*55],tot=0;
int Head[55],Edge[55*55],To[55*55],NEXT[55*55];
struct node {
	bool goes[55];
	int gos[55];
	int num,sum,nows,sums;
	bool operator <(const node b)const {
		bool aaa=sum>b.sum;
		if(sum==b.sum){
			for(int i=1;i<=min(sums,b.sums);i++){
				if(gos[i]>b.gos[i]){
					aaa=1;break;
				}
			}
		}
		return aaa;
	}
};

void add(int x,int y,int z) {
	Next[++tot]=head[x],head[x]=tot,edge[tot]=z,to[tot]=y;
	NEXT[++tot]=Head[y],Head[y]=tot,Edge[tot]=z,To[tot]=x;
}

priority_queue<Node>q;

void dij() {
	for(int i=1; i<=54; i++)d[i]=0x3f3f3f3f;
	d[b]=0;
	Node bb;
	bb.num=b,bb.d=0;
	for(int i=1; i<=54; i++) {
		flag[i]=0;
	}
	q.push(bb);
	while(!q.empty()) {
		Node c;
		c=q.top();
		q.pop();
		if(flag[c.num])continue;
		flag[c.num]=1;
		int x=c.num;
		for(int i=head[c.num]; i; i=Next[i]) {
			int y=to[i],z=edge[i];
			if(d[y]>d[x]+z) {
				d[y]=d[x]+z;
				c.d=d[y],c.num=y;
				q.push(c);
			}
		}
	}
}
int sum=0;
priority_queue<node>qq;

int main() {
	scanf("%d%d%d%d%d",&n,&m,&k,&a,&b);

	for(int i=1; i<=m; i++) {
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		add(y,x,z);
	}
	dij();
	//cout<<d[1];
	node aa;
	aa.sum=d[a],aa.num=a;
	aa.nows=0;
	aa.sums=0;
	qq.push(aa);
	for(int i=1; i<55; i++)aa.goes[i]=0;
	aa.goes[a]=1;
	while(!qq.empty()) {
		aa=qq.top();
		qq.pop();
		//printf("%d ",aa.sums);
		if(aa.num==b) {
			
			sum++;
		}
		if(sum==k) {
			//printf("%d   ",aa.sum);
			printf("%d-",a);
			for(int i=1; i<aa.sums; i++) {
				printf("%d-",aa.gos[i]);
			}
			printf("%d",aa.gos[aa.sums]);
			printf("\n");
			return 0;
		}
		node bb;
		for(int i=Head[aa.num]; i; i=NEXT[i]) {
			if(aa.goes[To[i]]==1)continue;
			if(To[i]==a)continue;
			for(int j=1; j<=54; j++)bb.goes[j]=aa.goes[j];
			bb.goes[To[i]]=1;
			bb.sums=aa.sums;
			for(int j=1; j<=aa.sums; j++)bb.gos[j]=aa.gos[j];
			bb.gos[++bb.sums]=To[i];
			//printf("%d",aa.sums);
			int y=To[i],z=Edge[i];
		//	printf("%d\n" ,y);
			bb.num=y; 
			bb.nows=aa.nows+z;
			bb.sum=bb.nows+d[y];
			qq.push(bb);
		}
	}
	cout<<"No";
	//printf("\n%d\n",aa.sums);

	return 0;
}

