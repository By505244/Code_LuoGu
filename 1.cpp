#include<bits/stdc++.h>
using namespace std;
int main() {
int a[100],b,c,d,e;
double f;
cin>>e; 
for(b=1;b<=e;b++) 
cin>>a[b];
for(b=1;b<=e-1;b++) 
{
for(c=1;c<=e-b;c++) 
{
if(a[c]<a[c+1]) 
{ d=a[c]; 
a[c]=a[c+1]; 
a[c+1]=d; }
}
}
f=0;
for(b=2;b<e;b++){
	f=f+a[b];
}
e=e-2;
f=f/e;
for(a=0;a<=1000;a++)
for(b=2;b<e;b++){
	f=f+a[b];
}
e=e-2;
f=f/e;
for(b=2;b<e;b++){
	f=f+a[b];
} 
e=e-2;
f=f/e;
printf("%.2f",f);
cout<<a<<b;
if(a=) 
return 0;
}
