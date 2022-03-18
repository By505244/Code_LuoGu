#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	if(a>89){
		cout<<"A";
	}
	if(a<90 & a>79){
		cout<<"B";
	}
	if(a<80&a>69){
		cout<<"c";
	}
	if(a<70&a>59){
		cout<<"D";
	}
	if(a<60){
		cout<<"E";
	}
	return 0 ;
}
