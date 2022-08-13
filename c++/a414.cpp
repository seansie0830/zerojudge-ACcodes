#include<bits/stdc++.h>
using namespace std; 
bitset<32> convert(int input){
    int count=0;
    bitset<32> result ;
    result.reset();
    if(input%2==0){
        result[count++]=false;
    }
    else{
        result[count++]=true;
    }
    input>>1;
}  
int main() {
    int n;
    bitset<32> temp;
    while (cin >> n) 
    {
        temp=convert(n);
        cout<<endl;
    }
    
}