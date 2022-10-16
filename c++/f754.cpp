#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i < n; i++){
        int m,k,share;
        if(k==0) continue;
        cout<<"Case "<<i+1<<" :\n";
        cin>>m>>k;
        share=m/k;
        for(int j=1;j<k;j++){
            cout<<"第"<<j<<"位 : 拿"<<share<<"元並說DD! BAD!"<<endl;
        }
        cout<<"第"<<k<<"位 : 拿"<<share+(m%k)<<"元並說DD! BAD!"<<endl;
    }
}