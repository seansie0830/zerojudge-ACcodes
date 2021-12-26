#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int a,b;
    while(cin>>a>>b){
        if(a<b)cout<<b-a<<endl;
        else cout<<100-abs(b-a)<<endl;
    }



}
