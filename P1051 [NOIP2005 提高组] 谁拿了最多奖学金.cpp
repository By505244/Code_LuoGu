#include<bits/stdc++.h>
using namespace std;
int n,sum,ans[10],cj[1500],lw[1500],yj[1500],bcj[1500],b1=1;
string a[1500];
bool flag[1500],flag1[1500];
int main(){
	cin>>n;
	char a1,a2;
	for(int b=1;b<=n;b++){
		cin>>a[b];
		cin>>cj[b]>>bcj[b]>>a1>>a2>>lw[b];
		if(a1=='Y'){
			flag[b]=1;
		}else {
			flag[b]=0;
		}
		if(a2=='Y'){
			flag1[b]=1;
		}else {
			flag1[b]=0;
		}
		if(cj[b]>80&&lw[b]>=1){
			yj[b]+=8000;
			sum+=8000;
		}
		if(cj[b]>85&&bcj[b]>80){
			yj[b]+=4000,sum+=4000;
		}
		if(cj[b]>90){
			yj[b]+=2000,sum+=2000;
		}
		if(cj[b]>85&&flag1[b]){
			yj[b]+=1000,sum+=1000;
		}
		if(bcj[b]>80&&flag[b]){
			yj[b]+=850,sum+=850;
		}
		if(yj[b]>yj[ans[b1]]){
			b1=1;
			ans[b1]=b;
		}
	}
	for(int b=1;b<=b1;b++){
		cout<<a[ans[b]]<<endl<<yj[ans[b]]<<endl;
	}
	cout<<sum<<endl;
}
