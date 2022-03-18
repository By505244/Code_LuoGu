#include <iostream>
#include <cstdio>
using namespace std;
int main() { 
  double a,b,c,d,e,f,d1,e1,f1,f2,e2,g;
  cin>>a>>b>>c;
  d1 = 0;
  for(d=0;d<=a;d=d+1){
  	d1=d1+d;
  } 
  e1=1;
  e2=0;
  for(e=1;e<=b;e++){
  	e1=e*e;
  	e2=e1+e2;
  }
  f2=0;
  for(;f=1.000<=c;f=f2+1.000000){
   	f1= 1.0000/f;
  	f2=f2+f1;
  }
    g=d1+e2+f2;
    printf("%.2lf\n",g);
    return 0; 
}
