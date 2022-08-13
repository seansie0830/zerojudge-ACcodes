#include "bits/stdc++.h"
using namespace std;
int main (){
    queue<long long> q;
    long long temp,profit=0,price,x,maxProfit=INT_MIN,nowBuy;
    while(cin>>temp){
        q.push(temp);
    }
    nowBuy =100;
    while(q.size()>0){
        if(q.front()>nowBuy){
            maxProfit = max(maxProfit, q.front()-nowBuy);
        }
        else {
            nowBuy = q.front();
        }
        q.pop();
    }
    cout<<maxProfit;
    cout<<endl;
    return 0;
}