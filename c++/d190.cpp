#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[105]={0},n,i,j;
    while(true){
        cin>>n;
        if(n==0) return 0;
        int list[n]={0};
        for(i=0;i<105;i++) a[i]=0;
        for(i=0;i<n;i++) scanf("%d",&list[i]);
        for(i=0;i<n;i++){
            a[list[i]]++;
        }

        for(i=0;i<101;i++){
            if(a[i]==0) continue;
            for(j=0;j<a[i];j++) cout<<i<<" ";
        }
        cout<<endl;
    }

}