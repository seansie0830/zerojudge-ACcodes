#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int l=a.length();
    a=a+a;
    for(int i=0;i<l;i++){
        int f=i+l;
        for(int j=i;j<f;j++){
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}