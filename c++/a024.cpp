#include<iostream>
using namespace std;
int gcd(int,int);
int main (){
    int x,y;
    while (cin>>x>>y)
    {
        cout<<gcd(x,y)<<endl;
    }

}
int gcd(int x, int y){
    if(x%y==0) return y;
    else return gcd(y,x%y);
}
