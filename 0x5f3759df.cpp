#include<bits/stdc++.h>
#define ll long long
#define debug puts("I AK IOI");
const int INF = 0x7fffffff;
using namespace std;
double qsqrt( float number )
{
	long  i;
	float x2, y;
	const float threeHalfs = 1.5;

	x2 = number * 0.5;
	y  = number;
	i  = * ( long * ) &y;
	cout<<i<<" "<<y<<endl; 
	i  = 0x5f3759df - ( i >> 1 );              
    y  = * ( float * ) &i;
	printf("%f\n",y);
	y  = y * ( threeHalfs - ( x2 * y * y ) );   
	y  = y * ( threeHalfs - ( x2 * y * y ) );   

	return y;
}

int main(){
	qsqrt(2);
	/*for(int i=1;i<=10000;i++){
		double a=sqrt(i);
		qsqrt(i);
		printf("%d %f %f\n",i,a,1/qsqrt(i));
	}*/
}

