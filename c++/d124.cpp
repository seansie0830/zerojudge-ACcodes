#include<bits/stdc++.h>
using namespace std;
int main()  {
    string t;
    long long ans=0;
    while(cin>>t){
        ans=0;
        for(int i=0;i<t.length();i++){
            if(t[i]=='-') continue;
            ans=ans+(t[i]-'0');
            ans=ans%3;
        }
        if(ans>0){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}