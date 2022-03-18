#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;

int father[10005];
int find(int x) {
	if(father[x]==x)return x;
	father[x]=find(father[x]);
	return father[x];
}
void t(int a,int b){
	a=find(a),b=find(b);
	father[a]=b;
}
int n,m,p;
int main(){
	scanf("%d%d%d",&n,&m,&p);
	for(int i=1;i<10005;i++)father[i]=i; 
	for(int i=1;i<=m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		t(a,b);
	}
	for(int i=1;i<=p;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		//cout<<find(a)<<" "<<find(b)<<endl;
		if(find(a)==find(b)){
			printf("Yes\n");
		}else{
			printf("No\n"); 
		}
	}
}

