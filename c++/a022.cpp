#include<iostream>
using namespace std;
int main (){
    string input;
    cin>>input;
    int half,i;
    if(half%2==0) half=input.size();
    else half=input.size()-1;
    //cout<<input.size()<<endl;
    for(i=0;i<half;i++){
        if(input[i]==input[input.size()-i-1]) continue;
        else {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes";
    return 0;
}
