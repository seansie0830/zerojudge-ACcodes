#include<iostream>
using namespace std;
int main(){
    int n,k,i,l,r,mid,x;
    bool found;
    cin>>n>>k;
    int list[n];
    for(i=0;i<n;i++){
        cin>>list[i];
    }
    for(i=0;i<k;i++){
        l=0;
        r=n-1;
        cin>>x;
        while(l<=r){
            found=false;
            mid=(l+r)/2;
            if(list[mid]<x){
                l=mid+1;
            }
            else {
                r=mid-1;
            }
            if(list[mid]==x){
                cout<<mid+1<<endl;
                found=true;
                break;
            }
        }
        if(!found) cout<<0<<endl;
    }

}
