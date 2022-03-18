#include<bits/stdc++.h>
#define ll long long

using namespace std;
unsigned long long m;
unsigned long long a[40],b[(2<<18)+10],tot_b=0,c[(2<<18)+10],tot_c=0;
void dfs(int now,int finish,unsigned long long sum) {
	if(now==finish+1) {
		b[tot_b++]=sum%m;
		return;
	}
	//printf("%d %d %d\n",now,sum+a[now],sum);
	dfs(now+1,finish,sum+a[now]%m);
	dfs(now+1,finish,sum);
}
void dfs2(int k,int n,unsigned long long sum) {
	if(k==n+1) {
		c[tot_c++]=sum;
		return;
	}
	dfs2(k+1,n,(sum+a[k])%m);
	dfs2(k+1,n,sum);
}
int main() {
	int n;
	scanf("%d%d",&n,&m);
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		a[i]%=m;
	}
	dfs(1,n/2,0);
	dfs2(n/2+1,n,0);
	sort(b,b+tot_b);
	sort(c,c+tot_c);
	int i=0,k=tot_c-1;
	unsigned long long ans=0; 
	
	bool flag=1;
	while(i<tot_b) {
		flag=1;
		while(b[i]+c[k]>=m) {
			if(k<0)flag=0;
			if(flag==0)break;
			//printf("%d %d %lld\n",i,k,b[i]+c[k]);
			--k;
		}
		if(flag==0)break;
		
		//cout<<ans<<endl;
		ans=max(ans,b[i]+c[k]);
		i++;
	}
	//cout<<b[tot_b-1]<<" "<<c[tot_c-1]<<endl;\
	
	cout<<max(ans,(b[tot_b-1]+c[tot_c-1])%m);
	return 0;
}

