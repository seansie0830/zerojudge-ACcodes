// todo i think i should use binary shift ....
#include<bits/stdc++.h>
#define release 1
using namespace std;
bool valid(string);
string binary(string,int);
# if release
int main (){
    int n,i,end;
    string temp;
    while(cin>>n){
        end=(int)pow(2,n);
        for(i=0;i<end;i++){
            temp=binary("",i);
            if(!valid(temp)){
                cout<<temp<<endl;
            }
        }
    }
}
#endif
#if !release
int main(){
    string n;
    while(cin>>n){
        if(valid(n))cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
}
#endif
bool valid(string input){  // todo passed
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
string binary(string input ,int id){
    
}