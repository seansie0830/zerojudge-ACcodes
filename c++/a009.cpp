#include<iostream>
#include<string>
using namespace std;
int main (){
    string in;
    int i;
    getline(cin,in);
    for(i=0;i<in.size();i++){
        in[i]=in[i]-7;
    }
    cout<<in;
    return 0;
}
