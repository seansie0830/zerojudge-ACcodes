#include<bits/stdc++.h>
using namespace std;
int main()  {
    int x,y;
    cin>>x>>y;
    if(y+30>=60){
        y=(y+30)%60;
        x++;
    }
    x=x+2;
    cout<<x<<" "<<setw(2)<<setfill('0')<<y<<endl;
    return 0;
}