#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        long long d=b*b-4*a*c;
        if(sqrt(d)==(int)sqrt(d)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}