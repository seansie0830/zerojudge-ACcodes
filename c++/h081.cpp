#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,d,i,profit=0,buyPrice;
    bool hold=true;
    cin>>n>>d;
    int price[n];
    for(i=0;i<n;i++){
        cin>>price[i];
    }
    buyPrice=price[0];
    for(i=0;i<n;i++){
        if(hold){
            if(price[i]-buyPrice>=d){
                profit=profit+(price[i]-buyPrice);
                hold=false;
                buyPrice=price[i];
            }
        }
        else{
            if(buyPrice-price[i]>=d){
                hold=true;
                buyPrice=price[i];
            }
        } 
    }
    cout<<profit;
    cout<<endl;
    return 0;
}