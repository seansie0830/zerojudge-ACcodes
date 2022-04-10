#include<bits/stdc++.h>
using namespace std;
int power(int,int);
bool ckeck(string,int);
int main(){
    int a,b,i,j;
    cin>>a>>b;
    stringstream stream;
    string out_str;
    for(i=a;i<=b;i++){
        stream<<i;
        stream>>out_str;
        if(ckeck(out_str,i)) cout<<i<<endl;
    }
    return 0;
}
bool ckeck(string in_str,int in_int){
    int power_sum=0,i;
    for(i=0;i<in_str.length();i++){
        power_sum=power_sum+pow((float)in_str[i],4.0);
    }
}
