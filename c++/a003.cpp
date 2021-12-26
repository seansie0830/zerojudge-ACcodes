#include <iostream>

using namespace std;

int main()
{
    //char in[100];
    int a,b,out;
    cin>>a>>b;
    out=(a*2+b)%3;
    if(out==2) cout<<"¤j¦N";
    else if (out==1) cout<<"¦N";
    else cout<<"´¶³q";
    //cout<<(a*2+b)%3;//<<"hello, "<<in;
    //S=(M*2+D)%3
    return 0;
}
