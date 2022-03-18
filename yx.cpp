#include<bits/stdc++.h>
using namespace std;
long long p[10][10],o,h,k,most,flag,flag_[10][10],score;
char a;
bool l(){
    for(int i=1;i<=4;++i)for(int j=1;j<=4;++j)if(p[i][j]==-1)return 1;
    return 0;
}
int main(){
    memset(p,-1,sizeof(p));
    printf("请选择是否继续：");
    while(1){scanf("%c",&a);if(a=='\n')break;}
    system("cls");
    srand((int)time(0));
    while(1){
        o=rand()%16;
        if(p[o/4+1][o%4+1]==-1){
            if(rand()%10==0)p[o/4+1][o%4+1]=4;
            else p[o/4+1][o%4+1]=2;
            break;
        }
    }
    while(l()){
        flag=0;
        memset(flag_,1,sizeof(flag_));
        for(int i=1;i<=4;++i){
            for(int j=1;j<=4;++j){
                if(p[i][j]>0)printf("%10lld ",p[i][j]);
                else printf("         0 ");
            }
            printf("\n");
        }
        printf("得分：%lld\n",score);
        scanf("%lld",&h);
        if(h==2){
            k=4;
            for(int i=1;i<=4;++i){
                for(int j=4;j>=1;--j){
                    if(p[j][i]>0){
                        if(p[k+1][i]==p[j][i]&&flag_[k+1][i])
                            p[k+1][i]*=2,p[j][i]=-1,flag=1,flag_[k+1][i]=0,score+=max(p[k+1][i],(long long)0);
                        else{p[k--][i]=p[j][i];
                        if(j!=k+1)p[j][i]=-1,flag=1;}
                    }
                }
                k=4;
            }
        }
        if(h==4){
            k=1;
            for(int i=1;i<=4;++i){
                for(int j=1;j<=4;++j){
                    if(p[i][j]>0){
                        if(p[i][k-1]==p[i][j]&&flag_[k-1][i])
                            p[i][k-1]*=2,p[i][j]=-1,flag=1,flag_[k-1][i]=0,score+=max(p[i][k-1],(long long)0);
                        else{p[i][k++]=p[i][j];
                        if(j!=k-1)p[i][j]=-1,flag=1;}
                    }
                }
                k=1;
            }
        }
        if(h==8){
            k=1;
            for(int i=1;i<=4;++i){
                for(int j=1;j<=4;++j){
                    if(p[j][i]>0){
                        if(p[k-1][i]==p[j][i]&&flag_[k-1][i])
                            p[k-1][i]*=2,p[j][i]=-1,flag=1,flag_[k-1][i]=0,score+=max(p[k-1][i],(long long)0);
                        else{p[k++][i]=p[j][i];
                        if(j!=k-1)p[j][i]=-1,flag=1;}
                    }   
                }
                k=1;
            }
        }
        if(h==6){
            k=4;
            for(int i=1;i<=4;++i){
                for(int j=4;j>=1;--j){
                    if(p[i][j]>0){
                        if(p[i][k+1]==p[i][j]&&flag_[k+1][i])
                            p[i][k+1]*=2,p[i][j]=-1,flag=1,flag_[k+1][i]=0,score+=max(p[i][k+1],(long long)0);
                        else{p[i][k--]=p[i][j];
                        if(j!=k+1)p[i][j]=-1,flag=1;}
                    }   
                }
                k=4;
            }
        }
        if(flag)while(1){
            o=rand()%16;
            if(p[o/4+1][o%4+1]==-1){
                if(rand()%10==0)p[o/4+1][o%4+1]=4;
                else p[o/4+1][o%4+1]=2;
                break;
            }
        }
        system("cls");
    }
    for(int i=1;i<=4;++i)for(int j=1;j<=4;++j)if(p[i][j]>most)most=p[i][j];
    printf("GAME OVER!!!\nYOU HAVE REACHED THE %ld\n",most);
    if(most<2048)printf("给文明以岁月，终将在一次次的进化中留以文明");
    else if(most==2048)printf("2048，你值得拥有");
    else if(most<16384)printf("给岁月以文明，你已然达到"); 
    else if(most>=16384)printf("穿越高维时空的大师，请收下我们的一拜吧");
    return 0;
} 
