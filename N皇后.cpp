//n皇后位运算
#include <iostream>
using namespace std;
int lim,sum;

void test(int row,int left,int right)
{
    int pos,p;
    if(row!=lim)//未填满，即不为11111111时
    {
        pos=lim & ~(row | left | right);//取反后得到所有可以放的位置
        while(pos!=0)
        {
        p=pos & -pos;//取出最右边的1进行尝试
        pos=pos-p;//将该位置的P从pos中移除
        test(row+p,(left+p)<<1,(right+p)>>1);
        }  
    }
    else
        sum++;
}

int main()
{
    int n;
    cin>>n;
    lim=(1 << n)-1;//结果为11111111
    test(0,0,0);//纵列，左对角线，右对角线
    cout<<sum<<endl;
    return 0;
}

