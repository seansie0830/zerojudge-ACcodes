#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int  i=0;i<n;i++){
        int t;
        cin>>t;
        if((t%4==0)||((t%400!=0)&&(t%100==0))){
            cout<<"a leap year";
        }
        else{
            cout<<"a normal year";
        }
        cout<<endl;
    }
    return 0;
}