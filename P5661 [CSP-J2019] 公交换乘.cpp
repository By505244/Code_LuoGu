#include<bits/stdc++.h>
using namespace std;
struct Node{
	bool vehicle;
	int price,t;
}a[100005];
queue<Node>q;
int main(){
	int n;
	int ans=0;
	scanf("%d",&n);
	for(int b=1;b<=n;b++){
		scanf("%d%d%d",&a[b].vehicle,&a[b].price,&a[b].t);
		if(a[b].vehicle==0){
			q.push(a[b]);
			ans+=a[b].price;
			//cout<<ans<<endl; 
		}else{
			bool flag=1;
			int h=q.size();
			for(int i=1;i<=h;i++){
				Node v=q.front();
				q.pop();
				if(a[b].t-v.t<=45){
					if(v.price>=a[b].price&&flag){
						//cout<<a[b].t-v.t<<endl;
						flag=0;
					}else {
						q.push(v);
					}
				}
			}
			if(flag){
				ans+=a[b].price;
			}//cout<<ans<<endl; 
		}
	}
	cout<<ans;
}

