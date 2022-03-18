#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
struct Node{
	int maxn,minn;
}spf[2505];
struct node{
	int num,spf;
}a[2505]; 
bool cmp(const Node a,const Node b){
	return a.minn>b.minn;
}
int main(){
	int n,l;
	cin>>n>>l;
	for(int i=1;i<=n;i++)scanf("%d%d",&spf[i].minn,&spf[i].maxn);
	for(int i=1;i<=l;i++)scanf("%d%d",&a[i].spf,&a[i].num);
	sort(spf+1,spf+n+1,cmp);
	int ans=0;
	for(int i=1;i<=n;i++){
		int maxn=0,maxx=-1;
		for(int k=1;k<=l;k++){
			if(a[k].num!=0&&a[k].spf>=spf[i].minn&&a[k].spf<=spf[i].maxn){
				if(a[k].spf>maxn){
					maxn=a[k].spf,maxx=k;
				}
			}
		}
		if(maxx!=-1)a[maxx].num--,ans++;
	}
	printf("%d\n",ans);
}

