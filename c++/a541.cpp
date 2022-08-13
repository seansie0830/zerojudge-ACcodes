//  AC  (5.3s, 4.2MB)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> memory;
    string temp;
    int n,i,j;
    bool isExist;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        memory.push_back(temp);
    }
    cin>>n;
    for(i=0;i<n;i++){
        isExist = false;
        cin>>temp;
        for(j=0;j<memory.size();j++){
            if(memory[j]==temp){
                isExist = true;
                printf("yes\n");
                break;
            }
        }
        if(!isExist){
            printf("no\n");
            memory.push_back(temp);
        }
    }
    return 0;
}