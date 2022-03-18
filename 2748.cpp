#include<bits/stdc++.h>
using namespace std;
int a[100][10],b1[10]={0,0,0,0,0,0,0,0,0,0},b,n;
int sortmp(){
	int d;
	for(int d1=0;d1<n;d1++){
	    for(b=0;b<b1[d1]-1;b++){
	        for(int h=0;h<b1[d1]-b;h++){
	    	    if(a[h][d]>a[h+1][d1]){//小到大进行排序 
	    		    d=a[h][d1];
	    		    a[h][d1]=a[h+1][d1];
	    		    a[h+1][d1]=d;
			    }
		    } 
	    }
	}
	return 0;
}
int main (){
	char a1[100]={' '};
	cin>>n;
	for(int c=0;c<n;c++){
		b=1;
	    	do{
	    		b=b+1;
	    	    b1[c]=b1[c]+1;
		        cin>>a[b-1][c]>>a1[b-1];
		        cout<<"!!!"<<endl;
				while(cin.get()?!=?:'\n');
				}
	    }
    }
    sortmp();
    cout<<b1[0]<<"!"<<endl;
    for(int c=0;c<b1[0];c++){
    	cout<<a[c][0]<<endl;
	}
} 
