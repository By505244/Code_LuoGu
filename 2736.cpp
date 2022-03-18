#include<bits/stdc++.h>
using namespace std;
int main(){
	double m,n,b=0;
	cin>>m>>n;
	for(int a=0;a<n;a++){
		b=m+b;
		m=m/2;
		b=b+m;
	}
	b=b-m;
	printf("%.2lf %.2lf",m,b);
}
