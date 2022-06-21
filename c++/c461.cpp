#include<bits/stdc++.h>
using namespace std;
int main (){
    bool A,B,ANS;
    int a,b,ans;
    cin>>a>>b>>ans;
    if(a>0) A=true;
    else A=false;
    if(b>0) B=true;
    else B=false;
    if(ans>0) ANS=true;
    else ANS=false;
    bool isok=false;
    if((A&&B)==ANS){
        cout<<"AND"<<endl;
        isok=true;
    }
    if((A||B)==ANS){
        cout<<"OR"<<endl;
        isok=true;
    }
    if((A^B)==ANS){
        cout<<"XOR"<<endl;
        isok=true;
    }
    if(!isok){
        cout<<"IMPOSSIBLE";
        cout<<endl;
    }
    return 0;
}