//n�ʺ�λ����
#include <iostream>
using namespace std;
int lim,sum;

void test(int row,int left,int right)
{
    int pos,p;
    if(row!=lim)//δ����������Ϊ11111111ʱ
    {
        pos=lim & ~(row | left | right);//ȡ����õ����п��Էŵ�λ��
        while(pos!=0)
        {
        p=pos & -pos;//ȡ�����ұߵ�1���г���
        pos=pos-p;//����λ�õ�P��pos���Ƴ�
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
    lim=(1 << n)-1;//���Ϊ11111111
    test(0,0,0);//���У���Խ��ߣ��ҶԽ���
    cout<<sum<<endl;
    return 0;
}

