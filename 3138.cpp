#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[105];
	cin>>a;
	int n;
	n=strlen(a);
	int sum=0;
	for(int c=0;c<n;c++){
		for(int d=48;d<=57;d++){
			if(a[c]==d){
				a[c]=a[c]-48;
				sum=sum+a[c];
			}
		}
	}
	cout<<sum;
}
