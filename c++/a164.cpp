// * O(n^2)前綴和寫法
#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,q,i;
    cin>>n>>q;
    int list[n],prefix[n]={0};
    for(i=0;i<n;i++){
        cin>>list[i];
    }
    prefix[0]=list[0];
    for(i=1;i<n;i++){
        prefix[i]=prefix[i-1]+list[i];
    }
    // prefix sum passed
    cout<<endl;
    return 0;
}