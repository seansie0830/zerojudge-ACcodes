#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int a,b,c,delta,ans1,ans2,temp1,temp2;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    ans1=(-b+sqrt(b*b-4*a*c))/(2*a);
    ans2=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(delta>0) {
        if(a>0)cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2<<endl;
        else if (a<0) cout<<"Two different root x1="<<ans2<<" , x2="<<ans1<<endl;
    }
    else if (delta==0) cout<<"Two same roots x="<<ans1<<endl;
    else cout<<"No real root"<<endl;
    return 0;

}
