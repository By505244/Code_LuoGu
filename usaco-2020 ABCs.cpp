#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    for(int i=1;i<=7;i++)scanf("%d",&a[i]);
    for(int i=1;i<=7;i++){//A
        for(int i2=1;i2<=7;i2++){//B
            if(i==i2)continue;
            for(int i3=1;i3<=7;i3++){//C
                if(i3==i||i2==i3)continue;
                for(int i4=1;i4<=7;i4++){//A+B-i4
                    if(i4==i||i4==i2||i4==i3)continue;
                    for(int i5=1;i5<=7;i5++){//B+C-i5
                        if(i5==i||i5==i2||i5==i3||i5==i4)continue;
                        for(int i6=1;i6<=7;i6++){//C+A-i6
                            if(i6==i||i6==i2||i6==i3||i6==i4||i6==i5)continue;
                            for(int i7=1;i7<=7;i7++){//A+B+c-I7
                                if(i7==i||i7==i2||i7==i3||i7==i4||i7==i5||i7==i6)continue;
                                if(
								a[i]+a[i2]==a[i4]
								&&
								a[i]+a[i3]==a[i6]
								&&
								a[i2]+a[i3]==a[i5]
								&&
								a[i]+a[i2]+a[i3]==a[i7]){
									int aa=a[i],b=a[i2],c=a[i3];
									if(c<b)b^=c,c^=b,b^=c;
									if(b<aa)aa^=b,b^=aa,aa^=b;
									if(c<aa)aa^=c,c^=aa,aa^=c;
									printf("%d %d %d",aa,b,c);
									return 0;
								}
                            }
                        }
                    }
                }
            }
        }
    }
}
