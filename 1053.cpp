#include<bits/stdc++.h>
int a[200005][2],c,num,b1;
bool flag=0;
int n;
int main(){
    cin>>n;
	for(int b=0;b<n;b++){	
	    cin>>c;
	    flag=0;
	    for(b1=0;b1<num;b1++){
	    	if(a[b1][1]==c){
	    		a[b][0]=a[b][0]++;
	    		flag=1;
	    		break;
			}
		}
		if(flag==0){
			
		}
	}
} 
