#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int max1=0,max2=0,maxn=0,min1=0x7fffffff,min2=0x7fffffff,minn=0x7fffffff;
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            int a,b;
            scanf("%d%d",&a,&b);
            b=abs(b);
            if(a*b>maxn){
                max1=a,max2=b,maxn=a*b;
            }
            if(a*b<minn){
                min1=a,min2=b,minn=a*b;
            }
        }
        printf("%d\n",abs(max1-min1)*min(max1,min2));
    }
}
