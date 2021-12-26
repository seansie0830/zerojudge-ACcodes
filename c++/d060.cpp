#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int in,out;

    cin>>in;
    out=(in>25)? 60-abs(25-in):25-in;
    cout<<out;
    return 0;
}
