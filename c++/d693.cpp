#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
int main(){
    long long temp=1;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int  N;
        cin>>N;
        temp=(temp*N)/gcd(N,temp);
    }
    cin>>n;
    cout<<temp;
    cout<<endl;
    return 0;
}