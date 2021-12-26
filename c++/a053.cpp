#include<iostream>
using namespace std;
int main (){
    int num;
    while(cin>>num){
        if(num<=10) cout<<num*6;
        else if (num>10&&num<=20) cout<<60+(num-10)*2;
        else if (num>20&&num<=40) cout<<80+(num-20);
        else cout<<"100";
        cout<<endl;
    }
    return 0;

}
