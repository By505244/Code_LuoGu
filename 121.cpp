#include<bits/stdc++.h> 
using namespace std;
signed main(void){
    int ans=0,arr[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    std::string ID,map="10X98765432";
    std::cout<<"���֤��:(ǰʮ��λ)";
    std::cin>>ID;
    if(ID.length()!=17)
        std::cout<<"incorect input";
    else{
        for(int i=0;i<17;i++)
            ans+=(ID[i]-'0')*arr[i];
        std::cout<<"���֤��18λ:"<<map[ans%11];
    }
}
