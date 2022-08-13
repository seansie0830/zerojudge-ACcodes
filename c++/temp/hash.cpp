#include<bits/stdc++.h>
using namespace std;
int main (){
    hash<string> stHash;
    string testdata;
    while(cin>>testdata){
        cout<<stHash(testdata)<<endl;
    }
    return 0;
}