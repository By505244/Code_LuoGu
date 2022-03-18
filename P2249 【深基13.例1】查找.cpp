#include<bits/stdc++.h>
using namespace std;
int n,m,d[2500000],x;
bool cmp(const int a,const int b){
	return a<b;
}
int main(){
	cin>>n>>m;
	for(int b=1;b<=n;b++){
		cin>>d[b];
	}
	sort(d+1,d+n+1,cmp);
	for(int b=1;b<=m;b++){
		cin>>x;
		if(binary_search(d+1,d+n+1,x)){
			cout<<lower_bound(d+1,d+1+n,x)-d<<" ";
		}else {
			cout<<-1<<" ";
		}
	}
	
}
