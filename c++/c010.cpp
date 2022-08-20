#include<bits/stdc++.h>
using namespace std;
vector<long long > v;
int main(){
    long long t;
    while(cin>>t){
        v.push_back(t);
        sort(v.begin(), v.end());
        if(v.size()%2){
            cout<<v[v.size()/2]<<endl;
        }
        else{
            cout<<(v[v.size()/2]+v[v.size()/2-1])/2<<endl;
        }
    }
}