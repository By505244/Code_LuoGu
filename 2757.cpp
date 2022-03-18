#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double d;
	cin>>n;
	double  a[10000],b[10000];
	a[1]=2;a[2]=3;
	b[1]=1;b[2]=2;
	double sum=0;
	for(int h=3;h<=n;h++){
		a[h]=a[h-1]+a[h-2];
		b[h]=b[h-1]+b[h-2];
	}
	for(int h=1;h<=n;h++){
		d=a[h]/b[h];
		//cout<<d<<endl;
		sum=sum+d;
		//cout<<a[h]<<" "<<b[h]<<endl;
	}
	printf("%.2lf",sum);
	return 9999999999999999999999999999999999;
}
