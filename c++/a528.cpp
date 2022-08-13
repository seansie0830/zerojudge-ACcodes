#include<bits/stdc++.h>
#define debug 0
using namespace std;
bool cmp(string a,string b){
    if(a.length()!=b.length()){
        return (a.length()<b.length());
    }
    else if((a[0]=='-')^(b[0]=='-')){
        for(int i=0; i<a.length(); i++){
            if(a[i]>b[i]) return false;
            else if (a[i]<b[i]) return true;
        }
    }
    else{
        return (a[0]=='-');
    }
    return true;
}
int main(int argc, char* argv[]){
    int n;
    while(cin>>n){
        string t[n];
        for(int i=0; i<n; i++) {
            cin>>t[i];
        }
        sort(t,t+n);
        for(int i=0; i<n; i++) {
            cout<<t[i]<<endl;
        }
    }
    
    #if debug
    cout<<endl;
    #endif
    return 0;
}