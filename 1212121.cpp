#include<bits/stdc++.h>
using namespace std;
int main(){
int n,b,c,d,e,x,z,z1;
cin>>n;
int a[n],q[n];
for(c=0;c<n;c++){
	cin>>a[c];
	q[c]=0;
}
z1=0;
for(c=0;c<n;c++){
for(d=0;d<n;d++){
	z=c+d;
	if(z>=n){
		z=z-n;
	}
	e=a[z]*d;
	q[c]=q[c]+e; 
}
}
x=1001111;
for(c=0;c<n;c++){
	if(x>q[c])x=q[c];
}
cout<<x;
return 0;
} 
