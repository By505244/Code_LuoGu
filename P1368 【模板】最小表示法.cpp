#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int a[100005],n,ans;
void work(){
	for(int i=1;i<=n;i++)a[n+i]=a[i];
	int j=2,i=1,k;
	
	while(j<=n&&i<=n){
	    printf("%d %d\n",i,j);
		for(k=0;k<n&&a[j+k]==a[i+k];k++);
		if(k==n)break;
		if(a[j+k]>a[i+k]){
			j=j+k+1;
			if(i==j)j++;
		}else{
			i=i+k+1;
			if(i==j)i++;
		}
		
	}
	ans=min(i,j);
}
int main(){ 
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	work();
	//cout<<ans;
	for(int i=ans;i<ans+n;i++){
		printf("%d ",a[i]);
	}
}

