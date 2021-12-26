#include<iostream>
#include<string>
using namespace std;
int main (){
    string input;
    cin>>input;
    int i,j=0,outnumbers=0,Weights=1;
    char outTemp[input.length()];
    for(i=input.size()-1,j=0; i>=0; i--,j++){
        outTemp[j]=input[i];
    }
    for(i=input.size()-1;i>=0;i--){
        outnumbers=outnumbers+Weights*(outTemp[i]-48);
        Weights=Weights*10;
    }
    cout<<outnumbers;
    //  cout<<outTemp<<endl;
    return 0;
}
