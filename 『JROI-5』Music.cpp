#include<bits/stdc++.h>
using namespace std;
bool flag[10000005];
int main(){
    int n;
    cin>>n;
    long long ans=0;
    while(n--){
        int x,t;
        scanf("%d%d",&x,&t);
        if(t<=1)continue;
        if(flag[x]==1)continue;
        ans+=t;
        flag[x]=1;
    }
    cout<<ans;
}
