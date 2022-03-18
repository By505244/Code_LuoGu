#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d,x,a1;
	long long sum,sum1;
	ifstream ifile;
	ifile.open("buy.in");
	ifile>>a>>b>>c>>d>>x; 
	sum1=c*d;
	sum=a*b+sum1;
	ofstream write;  
    write.open("buy.out"); 
	if(sum<=x){
		write<<"YES"<<endl;
		a1=x-sum;
		write<<a1<<endl;
	}
	else{
		a1=sum-x;
		write<<"NO"<<endl;
		write<<a1<<endl;
	}
	write.close();
	return 0;
}
