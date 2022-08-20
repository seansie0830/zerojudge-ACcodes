#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string t;
        cin>>t;
        int ans=1;
        for(int j=0;j<t.length();j++){
            ans=ans*(t[j]-'0');
        }
        cout<<ans<<endl;
    }
}