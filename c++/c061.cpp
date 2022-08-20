#include <bits/stdc++.h>
using namespace std;
__int128fact(__int128n){
    if(n>0){
        return n*fact(n-1);
    }
    else if(n==0){
        return 1;
    }
    else{
        return -1;
    }
}
int main(){
    __int128n,m;
    __int128ans=0;
    while(cin>>n>>m){
        if(n==0&&m==0) return 0;
        ans=fact(n)/(fact(n-m)*fact(m));
        cout<<ans<<endl;
    }
}