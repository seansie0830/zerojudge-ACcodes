#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n,k,i,l,r,d,ans,now,APs;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    l=1;
    r=a[n-1];

    while(l<r){
        d=(l+r)/2;
        now=l;
        APs=1;
        for(i=0;i<n;i++){
            if(abs(a[i]-now)<=d){
               continue;
            }
            else {
                APs++;
                now=now+d;
            }
        }
        // binary search the r
        cout<<"APs"<<APs;
        if(APs>k){
            cout<<"right ";
            l=d+1;
        }
        else {
            cout<<"left ";
            r=d-1;
        }
        cout<<"l="<<l<<" r="<<r<<endl;
    }
    d=(l+r)/2;
    cout<<d<<endl;
}
