#include<bits/stdc++.h>
using namespace std;
int get[6]={65535,65535,65535,65535,65535,65535};
string base64() {
	//for(int i=0; i<=6; i++)get[i]=65535;
	char base64_[80]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',\
	                   'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f',\
	                   'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',\
	                   'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'
	                  };
	string returns="";
	for(int i=0; i<6; i+=3) {
		unsigned long long bb=0;
		//cout<<get[i]<<endl;
		for(int j=0; j<16; j++) {bb=bb<<1;if((get[i]>>j)&1==1) {bb+=1;}}
		for(int j=0; j<16; j++) {bb=bb<<1;if((get[i+1]>>j)&1==1) {bb+=1;}}
		for(int j=0; j<16; j++) {
			bb=bb<<1;
			if((get[i+2]>>j)&1==1) {
				bb+=1;
			}
		}
		short q1,q2,q3,q4,q5,q6,q7,q8;
		//cout<<bb<<endl;
		bb=bb<<16;
		//cout<<(bb>>16)<<endl;
		q1=bb>>58,bb=bb<<6;
		q2=bb>>58,bb=bb<<6;
		q3=bb>>58,bb=bb<<6;
		q4=bb>>58,bb=bb<<6;
		q5=bb>>58,bb=bb<<6;
		q6=bb>>58,bb=bb<<6;
		q7=bb>>58,bb=bb<<6;
		q8=bb>>58,bb=bb<<6;
		printf("%d %d %d %d %d %d %d %d",q1,q2,q3,q4,q5,q6,q7,q8);
		returns+=base64_[q1];
		returns+=base64_[q2];
		returns+=base64_[q3];
		returns+=base64_[q4];
		returns+=base64_[q5];
		returns+=base64_[q6];
		returns+=base64_[q7];
		returns+=base64_[q8];
	}
	return returns;
}
int main() {
	cout<<base64();
}
