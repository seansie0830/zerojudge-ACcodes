#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
    int n;
    cin>>n;
    int a,b,cnt=0;
    while(cin>>a>>b){
        int upper=(int)sqrt(b);
        int lower=(int)sqrt(a)-1;
        unsigned long long  uupper=(upper)*(upper+1)*(upper*2+1)/6;
        unsigned long long  ulower= (lower)*(lower+1)*(lower*2+1)/6;
        cout<<"Case "<<++cnt<<": "<<uupper-ulower;
        cout<<endl;
    }
    return 0;
    }