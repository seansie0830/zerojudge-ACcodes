#include<bits/stdc++.h>
using namespace std;
int mod(int b,int p,int m){
	int r=1,nr=b%m;
	while(p>0){
		if(p&1) r=(r*nr)%m;
		nr=(nr*nr)%m, p=p>>1;
	}
	return (b>=0&&m>0)?r:-1;
}
int main(){
	int b,p,m;
	while(cin>>b>>p>>m) cout<<mod(b,p,m)<<endl;
}
