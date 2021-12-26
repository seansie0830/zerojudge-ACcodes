#include<iostream>
#include<cmath>
using namespace std;

int main (){
    char input[7];
    int i;
    while(cin>>input){
       for(i=0;i<6;i++){
        cout<<abs(input[i]-input[i+1]);
        }
        cout<<endl;
    }

}
