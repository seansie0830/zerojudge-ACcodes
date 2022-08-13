#include<bits/stdc++.h>
using namespace std;
int jsRing(int n,int k,int c) {
    if(c>0) return jsRing(n-1,k,c-1);
    else return n%k;
}
int main (){
    int n,k,c,i,j,shift,ans;
    cin>>n>>k>>c;
    ans=jsRing(n,k,c);
    cout<<ans;
    cout<<endl;
    return 0;
}
