#include<bits/stdc++.h>
using namespace std;
string a,maxm;
int max1,max2,max3;
int a1,a2,a3,sum,ans;
int main(){
	int n;
	cin>>n;
	for(int b=1;b<=n;b++){
		sum=0;
		cin>>a>>a1>>a2>>a3;
		sum=a1+a2+a3;
		if(sum>ans){
			maxm=a;
			max1=a1,max2=a2,max3=a3;
			ans=sum;
		} 
	}
	cout<<maxm<<" "<<max1<<" "<<max2<<" "<<max3;
}
