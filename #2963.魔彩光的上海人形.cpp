#include<bits/stdc++.h>
using namespace std;
int a[1000005],sum,c;
long long ave=0;
int main(){
	int n;
	cin>>n;
	for(int b=0;b<n;b++){
		cin>>a[b];
		ave=a[b]+ave;
	}
	ave=ave/n
	//cout<<ave<<" ";
	for(int b=0;b<n;b++){
		if(a[b]<ave){
			c=c-ave+a[b];
			if(c!=0){
			sum++;
		}
		}else if(a[b]==ave&&c==0){
			
		}
		else{
			c=a[b]-ave+c;
			if(c!=0){
				sum++;
			}
		}
	}
	cout<<sum;
}
