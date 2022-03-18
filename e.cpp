/*
*/
#include<bits/stdc++.h>
using namespace std;
int main() { 
  int n,d,e,f;
  cin>>n; 
  int a[n],b[n],c[n],g[n],g1[n];
  for(d=0;d<n;d++){
  	cin>>a[d]>>b[d]>>c[d];
  	g[d]=a[d]+b[d]+c[d];
  	g1[d]=d+1;
  }
  	for(d=0;d<n-1;d++) 
 {
for(e=0;e<n-d;e++) 
   {
if(g[e]<g[e+1]) 
  { f=g[e]; 
g[e]=g[e+1];  
g[e+1]=f; 
f=g1[e];
g1[e]=g1[e+1];
g1[e+1]=f;
}
}
}
for(d=0;d<n;d++){
	if(g[d]==g[d+1]){
		if(a[d]<a[d+1]){
			f=g1[d];
			g1[d]=g1[d+1];
			g1[d+1]=f;
		}
		else if(g1[d]<g1[d+1]){
			f=g1[d];
			g1[d]=g1[d+1];
			g1[d+1]=f;
		}
	}
}
for(d=0;d<5;d++){ 
	cout<<g1[d]<<" "<<g[d]<<endl;}
  return 0;
}
