// TODO 斜率 找到第一格，類推
#include <iostream>
#include<cmath>
using namespace std;
long long gcd(long x, long y){
    if(x%y==0) return y;
    else return gcd(y,x%y);
}
int main (){
    long long x1, y1, x2, y2,gcdTemp;
    double r;
    long long t,dx,dy,i;
    cin>>t;
    for(i=0; i<t;i++){
        cin>>x1>>y1>>x2>>y2;
        if(x1==x2) {
            cout<<abs(y1-y2)+1<<endl;
            continue;
        }
        if(y1==y2) {
            cout<<abs(x1-x2)+1<<endl;
            continue;
        }
        dx=abs(x1-x2);
        dy=abs(y1-y2);
        gcdTemp=gcd(dx,dy);
        dx=dx/gcdTemp;
        dy=dy/gcdTemp;
        cout<<abs(x1-x2)/dx+1<<endl;
        }
    }
