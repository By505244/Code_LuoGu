#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main() { 
    char a[1000],b[1000];
    int e,f;
    for(e=0;e<=1000;e++){
    	a[e]=0;
    	b[e]=0;
	}
    gets (a); 
    gets(b);
	for(e=0;e<=1000;e++){
		for(f=0;f<=1000;f++){
			if(a[e]==b[f])  a[e]=8;
		}
	}
    cout<<a;
    return 0; 
}
