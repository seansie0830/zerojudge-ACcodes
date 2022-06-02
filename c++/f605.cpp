#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,d,i,j,maxP=INT_MIN,minP=INT_MAX,cost=0,amount=0;
    cin>>n>>d;
    int price[n][3],tempPrice[n][3];
    for(i=0;i<n;i++)for(j=0;j<3;j++)cin>>price[i][j];
    for(i=0;i<n;i++){
        maxP=INT_MIN;
        minP=INT_MAX;
        for(j=0;j<3;j++){
            maxP=max(price[i][j],maxP);
            minP=min(price[i][j],minP);
        }
        if(maxP-minP>=d){
            cost=cost+(price[i][0]+price[i][1]+price[i][2])/3;
            amount++;
        }
    }
    cout<<amount<<" "<<cost;
    cout<<endl;
    return 0;
}