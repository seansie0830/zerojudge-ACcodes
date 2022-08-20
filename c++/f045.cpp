#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cin>>t;
    int num[t.length()];
    for(int i=0;i<t.length();i++){
        num[i]=t[i]-'0';
    }
    sort(num,num+9);
    int end=(t[6]-'0')*100+(t[7]-'0')*10+t[8]-'0';
    int sq=(num[8]-'0')*(num[8]-'0')+(num[7]-'0') * (num[7]-'0');
    if(sq==end) cout<<"Good Morning";
    else cout<<"SPY!";
    cout<<endl;
    return 0;
}