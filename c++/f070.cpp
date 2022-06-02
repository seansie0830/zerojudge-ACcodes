#include<bits/stdc++.h>
using namespace std;
int main (){
    int b1,b2,b3,r1,r2,r3,temp,t,x,y,z;
    cin>>b1>>r1>>b2>>r2>>b3>>r3;
    x=0;
    while(x%b1!=r1){
        x=x+b2*b3;
    }
    y=0;
    while(y%b2!=r2){
        y=y+b1*b3;
    }
    z=0;
    while(z%b3!=r3){
        z=z+b1*b2;
    }
    temp=x+y+z;
    while(temp>0){
        temp=temp-b1*b3*b2;
    }
    cout<<temp+b1*b2*b3<<endl;
    cin>>b3;

    return 0;
}