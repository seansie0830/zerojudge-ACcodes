#include<bits/stdc++.h>
using namespace std;
int main (){
    hash<string> stringHash;
    string testdata;
    vector<int> temp;
    int i,hashNum;
    while(cin>>testdata){
        hashNum=stringHash(testdata);
        for(i=0;i<temp.size();i++){
            if(hashNum==temp[i]){
                cout<<i+1<<" "<<temp.size()+1<<endl;
                return 0;
            }
        }
        temp.push_back(hashNum);
    }
}