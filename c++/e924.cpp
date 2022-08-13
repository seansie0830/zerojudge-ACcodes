#include<bits/stdc++.h>
using namespace std;
bool valid(string input){
    stack<char> temp;
    int i;
    for(i=0;i<input.length();i++){
            if(input[i]=='['||input[i]=='{'||input[i]=='('||input[i]=='<') temp.push(input[i]);
            else if(temp.empty()){
                return false;
            }
            else if(temp.top()=='['&&input[i]==']'){
                temp.pop();
                continue;
            }
            else if(temp.top()=='('&&input[i]==')') {
                temp.pop();
                continue;
            }
            else if(temp.top()=='{'&&input[i]=='}'){
                temp.pop();
                continue;
            }
            
            else if(temp.top()=='<'&&input[i]=='>') {
                temp.pop();
                continue;
            }
        }
    return temp.empty();
}
int main (){
    int i,j;
    string in;
    cin>>i;
    for(j=0;j<i;j++){
        cin>>in;
        if(valid(in)) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}
