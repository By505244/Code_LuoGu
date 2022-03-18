#include<bits/stdc++.h>
//#define int long long
//#define int short
using namespace std;
int a[15][15]; 
bool te(int x,int y,int k){
	for(int h=1;h<=9;h++){
		if(h==y){
			continue;
		}
		if(a[x][h]==k){
			return false;
		}
	}
	for(int h=1;h<=9;h++){
		if(h==x){
			continue;
		}
		if(a[h][y]==k){
			return false;
		}
	}
	int xx=x/3+1;
	int yy=y/3+1;
	xx*=3;
	yy*=3;
	for(int xxx=xx;xxx>=xx-3;xxx--){
		for(int yyy=yy;yyy>=yy-3;yyy--){
			if(xxx==x&&yyy==y){
				continue;
			}
			if(a[xxx][yyy]==k){
				return false;
			}
		}
	}
	return true;
}
void dfs(int x,int y){
	if(y==10){
		for(int b=1;b<=9;b++){
			for(int i=1;i<=9;i++){
				cout<<a[b][i]<<" ";
			}
			cout<<endl;
		}
		exit(0);
	}
	if(x==10){
		dfs(1,y+1);
		return;
	}
	if(a[x][y]!=0){
		dfs(x+1,y);
		return;
	}
	for(int b=1;b<=9;b++){
		if(te(x,y,b)){
			a[x][y]=b;
			dfs(x+1,y);
		}
	}
}
int main(){
	for(int b=1;b<=9;b++){
		for(int i=1;i<=9;i++){
			cin>>a[b][i];
		}
	}
	dfs(1,1);
	for(int b=1;b<=9;b++){
			for(int i=1;i<=9;i++){
				cout<<a[b][i]<<" ";
			}
			cout<<endl;
		}
}

