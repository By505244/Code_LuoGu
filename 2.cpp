#include<bits/stdc++.h>
using namespace std;
int main() {
  int n,a,b,c;
  cin>>n;//����n 
  int i[n];
  for(a=0;a<n;a++){
  	cin>>i[a];//���ζ���������� 
  }
  for(a=0;a<n-2;a++){
  	for(b=0;b<n-2;b++){
  		if(i[b]>i[b+1]){
  			c=i[b];
  			i[b]=i[b+1];
  			i[b+1]=c;
		  }
	  }
  }
  for(b=0;b<n;b++){
  cout<<i[b]<<endl; 
   }
  return 0 ;
}
