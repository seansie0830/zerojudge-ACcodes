#include<iostream>
using namespace std;
int main (){
    int mod0=0,mod1=0,mod2=0,nums,i,in;
    cin>>nums;
    for(i=0;i<nums;i++){
        cin>>in;
        if(in%3==0) mod0++;
        else if(in%3==1) mod1++;
        else if(in%3==2) mod2++;
    }
    cout<<mod0<<" "<<mod1<<" "<<mod2;
    return 0;
}
