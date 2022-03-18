#include<bits/stdc++.h>
using namespace std;
int n,tot,a[105],want_long,want_number;
bool cmp(int a,int b) {
	return a>b;
}
bitset<105>flag;
bool dfs(int now_stick,int now_sum,int last) {
	if(now_stick>want_number)return true;
	if(now_sum==want_long)return dfs(now_stick+1,0,1);
	int last_=-1;
	for(int i=last; i<=tot; i++) {
		if(flag[i]==0&&a[i]+now_sum<=want_long&&a[i]!=last_) {
			flag[i]=1;
			if(dfs(now_stick,now_sum+a[i],i+1))return true;
			flag[i]=0;
			//if(a[i]+now_sum==want_long||now_sum==0)return false;
			last_=a[i];
			//if(now_stick+a[i]<=wantlong)break;
		}
	}
	//cout<<1;
	return false;
}
int main() {
	scanf("%d",&n);
	int sum=0,maxn=0;
	for(int i=1; i<=n; i++) {
		int bb;
		scanf("%d",&bb);
		if(bb<=50)a[++tot]=bb,maxn=max(maxn,bb),sum+=a[tot];
	}
	sort(a+1,a+tot+1,cmp);
	for(int i=maxn; i<=sum; i++) {
		if(sum%i!=0)continue;
		for(int ii=1; ii<=tot; ii++)flag[ii]=0;
		want_long=i;
		want_number=sum/i;
		if(dfs(1,0,1)) {
			printf("%d",i);
			return 0;
		}
	}
	return 0;
}
