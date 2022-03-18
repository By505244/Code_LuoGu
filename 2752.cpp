#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10],b,h=0 ;
	for(int b=0;b<10;b++){
	    cin>>a[b];
	}
	for( b=0;b<9;b++){
	    if(a[9]>a[b]){
	    	if(a[9]<a[b+1]){
		    break;}
		}
	}
	for(int d=0;d<9;d++){
	   if(d==b&&h==0){
	   	cout<<a[d]<<endl;
	      cout<<a[9]<<endl;
	   }
	   else{
	      cout<<a[d]<<endl;
	   }
	}
	return 0;
}
