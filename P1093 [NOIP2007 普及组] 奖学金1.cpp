#include<bits/stdc++.h>
using namespace std;
struct sru{
	int num,c,m,e,sum;
}stu[100000];
bool cmp(sru a,sru b){
	if(a.sum>b.sum){
		return 1;
	}else if(a.sum<b.sum){
		return 0;
	}else{
		if(a.c>b.c){
			return 1;
		}else if(a.c<b.c){
			return 0;
		}else{
			if(a.num>b.num){
				return 0;
			}else{
				return 1;
			}
		}
	}
}
int n;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		stu[i].num=i+1;
		cin>>stu[i].c>>stu[i].m>>stu[i].e;
		stu[i].sum=stu[i].c+stu[i].m+stu[i].e;
	}
	sort(stu,stu+n,cmp);
	for(int i=0;i<5;i++){
		cout<<stu[i].num<<" "<<stu[i].sum<<endl;
	}
	return 0;
}
