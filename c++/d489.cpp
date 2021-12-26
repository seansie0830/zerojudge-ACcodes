#include<iostream>>
using namespace std;
int main (){
    int a,b,c,s,ans;
    while(cin>>a>>b>>c){
       s=(a+b+c)/2;
        ans=s*(s-a)*(s-b)*(s-c);
        cout<<ans;
    }

    return 0;
}
