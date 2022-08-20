#include<bits/stdc++.h>
using namespace std;
int main()  {
    long long n,cnt;
    map<string,long long> mp;
    string t;
    while(cin>>n){
        cnt=0;
        for(int i=0;i<n; i++){
            cin>>t;
            if(mp.find(t)==mp.end()){
                cnt++;
                mp.insert({t,cnt});
                cout<<"New! "<<cnt<<endl;
            }
            else{
                cout<<"Old! "<<mp[t]<<endl;
            }
        }
    }
}