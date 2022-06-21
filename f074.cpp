#include<bits/stdc++.h>
using namespace std;
int main (){
    queue<string> army;
    vector<string> army3[3];
    int now=0;
    string temp;
    while(cin>>temp){
        army.push(temp);
    }
    while(!army.empty()){
        army3[now].push_back(army.front());
        army.pop();
        now++;
        now=now%3;
    }
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<army3[i].size();j++){
            cout<<army3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}