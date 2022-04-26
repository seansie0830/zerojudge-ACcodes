// TODO fixed the bool 
#include<iostream>
using namespace std;
int main (){
    int a,b;
    bool Ba,Bb,answer,isexist=false;
    cin >> a >> b>>answer;
    if((a!=0)&&(b!=0)==answer){
        isexist=true;
        cout<<"AND"<<endl;
    }
    if((a!=0)||(b!=0)==answer){
        isexist=true;
        cout<<"OR"<<endl;
    }
    if((a!=0)^(b!=0)==answer){
        isexist=true;
        cout<<"XOR"<<endl;
    }
    if(!isexist){
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}