#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2;
    char cmd;
    cin>>a1>>cmd>>a2;
    if(cmd='+') cout<<a1+a2;
    else if(cmd=='-') cout<<a1-a2;
    else if(cmd=='/') cout<<a1/a2;
    else if(cmd=='*') cout<<a1*a2;
    cout<<endl;
    return 0;
}