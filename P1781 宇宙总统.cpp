#include<bits/stdc++.h>
using namespace std;
struct Node{
	string a=" ";
	int num;
}maxn,a;
bool cmp(const Node a,const Node b){
	return a.a<b.a;
}
int main(){
	int n;
	cin>>n;
	for(int b=1;b<=n;b++){
		cin>>a.a;
		a.num=b;
		int b1=a.a.size();
		int max1=maxn.a.size();
		if(b1>max1||a.a>maxn.a&&b1==max1){
			maxn.a=a.a;
			maxn.num=a.num;
		}
	}
	cout<<maxn.num<<endl<<maxn.a;
}
