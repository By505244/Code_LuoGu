#include<bits/stdc++.h>
#define ll long long
const int INF = 0x7fffffff;

using namespace std;
int side[500005],father[500005],d[500005];
int find(int x){
	if(father[x]==x)return x;
	int aaa=find(father[x]);
	d[x]+=d[father[x]];
	father[x]=aaa;
	return aaa;
}
void t(int a,int b){
	int aa=find(a),bb=find(b);
	father[aa]=bb;
	d[aa]=side[bb];
	side[bb]+=side[aa];
}
int main(){
	for(int i=1;i<500005;i++)side[i]=1,father[i]=i;
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		char a;
		int x,y;
		cin>>a>>x>>y;
		if(a=='M'){
			t(x,y);
		}
		else if(a=='C'){
			if(find(x)==find(y)){
				printf("%d\n",abs(d[y]-d[x])-1); 
			}else{
				printf("-1\n");
			}
		}
	}
}

