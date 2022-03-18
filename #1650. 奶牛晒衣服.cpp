#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;
int h[500005]; 
int timee=0;
void sr(int n){
	for(int b=1;b<n;b++){
		q.push(h[b]);
	}
}
int main(){
	int a,b,n;
	cin>>n>>a>>b;
	for(int b1=1;b1<=n;b1++){
		cin>>h[b1];
		//cout<<h<<endl;
		q.push(h[b1]);
	}
	bool flag=1;
	int b2=1;
	while(!q.empty()){
		int w=q.top();
		q.pop();
		if(flag){
			flag=0;
			w=w-b;
		}
		w=w-a;
		//cout<<w<<endl<<endl;
		if(w>0){
			h[b2]=w;
		    b2++;
		}
		if(q.empty()&&b2!=1){
			//cout<<timee<<endl;
			timee++;
			flag=1;
			sr(b2);
			b2=1;
		}
	}
	cout<<timee;
} 
