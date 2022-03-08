#include<iostream>
using namespace std;

long long func(long long i){
    if(i==1) return 1;
    else if (i%2==0) return func(i/2);
    else return func(i-1)+func(i+1);
}
int main (){
    long long i;
    cin>>i;
    cout<<func(i)<<endl;
}
