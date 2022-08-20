#include<bits/stdc++.h>
using namespace std;    
int main(){
    string a,b;
    while(cin>>a>>b){
        cout<<(b[0]-a[0]+26)%26<<endl;
    }
    return 0;
}