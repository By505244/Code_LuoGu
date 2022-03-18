#include<iostream>
using namespace std;
int main() {
  int n,b,c,g,e,f;
  g=0;
  f=999;
  cin>>n;
  int d[n];
  int a[n];
  for(c=0;c<n;c++) {
  	d[c]=0;
  }
  for(c=0;c<n;c++){
  cin>>a[c];}
  for(c=0;c<n;c++){
  	for(e=0;e<n;e++){
	  g=e*a[c];
	  d[c]=d[c]+g;
	  }
	  if(f>d[c])f=d[c];
  }  
  cout<<f;
  return 0; 
}
