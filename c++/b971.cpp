#include<bits/stdc++.h>
using namespace std;
int main()  {
    int a1,an,d;
    cin>>a1>>an>>d;
    if(d>0){
        for(int i=a1;i<=an;i=i+d){
            cout<<i<<" ";
        }
    }
    else{
        for(int i=a1;i>=an;i=i+d){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}