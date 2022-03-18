#include<bits/stdc++.h>
using namespace std;
int main() {
  char a[100];
  int b,c,b1,d,e[3],f[3],g,e1[3],f1[3],h,h1;
  h=0;
  h1=0;
  for(b=0;b<3;b++){
  	e[b]=f[b]=e1[b]=f1[b]=0;
  }
  for(b=0;b<100;b++){
  	cin>>a[b];
  	if(a[b]==69)break; 
  }
  d=b;
  for(b=0;b<d;b++){
  	if(a[b]==87)e[h]=e[h]+1;e1[h1]=e1[h1]+1;
  	if(a[b]==76)f[h]=f[h]+1;f1[h1]=f1[h1]+1;
  	if(e[h]==11||f[h]==11)cout<<e[h]<<":"<<f[h]<<endl;h=h+1;
  	if(e1[h1]==21||e1[h1]==21)h1=h1+1;
}
  cout<<e[2]<<":"<<f[2]<<endl;
  for(b=0;b<h1;b++){
  	cout<<e1[b]<<":"<<f1[b]<<endl;
  }
  return 0 ;
}
