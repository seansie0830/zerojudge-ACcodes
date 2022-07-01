// decoding
#include<bits/stdc++.h>
using namespace std;
int main() {
    string in,num,out;
    stringstream transfer;
    int intNum,i,t,iT;
    cin>>t;
    for(iT=0; iT<t; iT++) {
        cin>>in;
        char letter;
        out.erase(0,out.length());
        while(in.length()>0){
            letter = in[0];
            in.erase(0,1);
            num.erase(0,num.length());
            while(isdigit(in[0])){
                num=num+in[0];
                in.erase(0,1);
            }
            transfer.clear();
            transfer<<num;
            transfer>>intNum;
            for(i=0;i<intNum;i++){
                out=out+letter;
            }
        }
        cout<<"Case "<<iT+1<<": "<<out<<endl;
    }
    
    return 0;
}