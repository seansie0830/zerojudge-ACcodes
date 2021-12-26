#include<iostream>
#include<cmath>
using namespace std;
int prime(int);
int main(){
    int input,i,powers,factors=0;
    cin>>input;
    int storeinput=input;
    for(i=2;i<=storeinput;i++){
        powers=0;
        if(prime(i)==0) continue;
        //if(factors>=1) cout<<"*";
        while(input%i==0) {
            if(powers==0){
                if(factors>=1) cout<<" * ";
                cout<<i;
                factors++;
            }
            powers++;
            input=input/i;

        }
        if(powers>1)cout<<"^"<<powers;
        //cout<<factors<<endl;
        //else continue;
        if(input==1) break;
    }
    //cout<<"這是質數"<<endl;
    return 0;

}
int prime(int input){
    int i;
    for(i=2;i<(int)sqrt(input)+1;i++){
        if(input%i==0) {

            return 0;
        }
        else continue;
    }
    return 1;
}
