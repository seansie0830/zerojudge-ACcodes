// AC (58ms, 348KB)
#include<bits/stdc++.h>
using namespace std;
int power(int,int);
bool check(string,int);
bool isnum=false;
int main(){
    int a,b,i,j;
    cin>>a>>b;
    stringstream stream;
    string out_str;
    for(i=a;i<=b;i++){
        stream.str("");
        stream.clear();
        stream<<i;
        stream>>out_str;
        if(check(out_str,i)) cout<<i<<" ";
    }
    if(isnum==false) cout<<"none"<<endl;
    else cout<<"\b";
    return 0;
}
bool check(string in_str,int in_int){
    bool out;
    int power_sum=0,i;
    for(i=0;i<in_str.length();i++){
        power_sum=power_sum+pow((float)in_str[i]-48,in_str.length());
    }
    out=(power_sum==in_int);
    if(isnum==false&&out==true){
        isnum=true;
    }  
    return out;
}
