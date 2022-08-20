#include<bits/stdc++.h>
#define debug 1
using namespace std;
vector<int> table;
int main(){
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>temp;
        table.push_back(temp);
    }
    for(int i=0; i<n; i++){
        for(auto i:table){
            cout<<i<<' ';
        }
        cout<<endl;
        table.erase(table.begin());
        reverse(table.begin(), table.end());
    }
    #if debug
    cout<<endl;
    #endif
}