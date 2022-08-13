#include<bits/stdc++.h>
using namespace std;
int main(){
	string testdata;
	cin>>testdata;
	long long differ=0;
	int i;
	for(i=0;i<testdata.length();i++){
		if(i%2==0) differ=differ+(testdata[i]-48);
		else differ=differ-(testdata[i]-48);
	}
	differ=abs(differ);
	cout<<differ;
	return 0;
}