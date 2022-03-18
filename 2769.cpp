#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s,l[100],flag[4]={0,0,0,0};
	cin>>n;
	char a[50];
	for(int b=0;b<n;b++){
		cin>>a;
		int sum;
		sum=strlen(a);
		//if(sum<8||sum>16){
		//	continue;
		//}
	    for(int d=0;d<sum;d++){
	    	for(int h=0;h<4;h++){
	    		flag[h]=0;
			}
	    	if(a[d]=='~'||a[d]=='!'||a[d]=='@'||a[d]=='#'||a[d]=='$'||a[d]=='%'||a[d]=='^'){
				if(flag[3]==0){
			        flag[3]=1;
			        //cout<<"1 ";
				}
			}
	    	else if(a[d]>='A'&&a[d]<='Z'&&flag[0]==0){
	    		flag[0]=1;
			}
			else if(a[d]>='a'&&a[d]<='z'&&flag[1]==0){
				flag[1]=1;
			}
			else if(a[d]>='0'&&a[d]<='9'&&flag[2]==0){
				flag[2]=1;
			}
		}
		s=flag[0]+flag[1]+flag[2]+flag[3];
		if(s>=3){ 
			l[b]=1;
		}
		else{
			l[b]=0;
		}
		//cout<<s;
	}
	for(int b=0;b<n;b++){
		if(l[b]==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	//cout<<flag[3]<<" "<<flag[2]<<" "<<flag[1]<<" "<<flag[0];
}
