#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int INF=0X7FFFFFFF;
int n;
int fa[100005];
struct Node{
	int s,f,n;
}a[10005];
bool cmp(const Node a,const Node b){
	return a.n<b.n;
}
int c(int x){
	if(fa[x]==x)return x;
	fa[x]=c(fa[x]);
	return fa[x];
}
void m(int a,int b){
	a=c(a),b=c(b);
	fa[a]=b; 
}
int main(){
	int mm;
	for(int i=0;i<100005;i++)fa[i]=i;
	scanf("%d%d",&n,&mm);
	int side=1;
	for(int i=1;i<=mm;i++){
		scanf("%d%d%d",&a[side].s,&a[side].f,&a[side].n);
		side++;
	}
	int ans=0;
	sort(a+1,a+side+1,cmp);
	for(int i=1;i<=side;i++){
		//cout<<a[i].s<<" "<<a[i].f;
		if(c(a[i].s)!=c(a[i].f)){
			m(a[i].s,a[i].f);
			ans+=a[i].n;
			//cout<<a[i].s<<" "<<a[i].f<<endl;
		}
	}
	int father=c(1);
	for(int i=2;i<=n;i++){
	    if(c(i)!=father){
	        cout<<"orz\n";
	        return 0;
	    }
	}
	cout<<ans;
}
