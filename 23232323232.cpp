#include <iostream>
#include <cmath>
using namespace std;
int main() { 
    long long a,b,c,d,e,f;
    cin>>a;
    e=a/2;
    f=a/2+5;
    for(b=100;b<f;b=b+2){
    	for(c=1;c<e;c++){
    		d=(b+c)*(b-c+1);
    		if(d==(a*2)){
    			cout<<c<<" "<<b<<endl;
			}
		}
	}
    return 0; 
}
