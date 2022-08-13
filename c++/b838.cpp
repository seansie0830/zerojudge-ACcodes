// TODO wating for pair learning🕐🕐🕑
#include "bits/stdc++.h"
using namespace std;
bool valid(string);
int main (){
    int n;
    string t;
    cin>>n;
    int i;
    for(i=0; i<n; i++){
        cin>>t;
    }
}
bool valid(string input){
    stack<char> temp;
    int i;
    for(i=0;i<input.length();i++){
            if(input[i]=='['||input[i]=='{'||input[i]=='(') temp.push(input[i]);
            else if(temp.empty()){
                return false;
            }
            else if(temp.top()=='['&&input[i]==']') temp.pop();
            else if(temp.top()=='('&&input[i]==')') temp.pop();
            else if(temp.top()=='{'&&input[i]=='}') temp.pop();
        }
    return temp.empty();
}