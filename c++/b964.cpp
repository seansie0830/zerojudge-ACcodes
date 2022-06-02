#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,max_f=INT_MIN,min_p=INT_MAX;
    bool isbestcase=true,isworstcase=true;
    cin>>n;
    int i,score[n],sorted[n];
    for (i=0; i<n; i++) cin>>score[i];
    for (i=0; i<n; i++) sorted[i]=score[i];
    sort(sorted,sorted+n);
    for (i=0; i<n;i++) cout<<sorted[i]<<' ';
    cout<<endl;
    for (i=0; i<n; i++){
        if(score[i]<60){
            max_f=max(score[i],max_f);
            isbestcase=false;
        }
    }
    if(isbestcase) cout<<"best case "<<endl;
    else cout<<max_f<<endl;
    for (i=0; i<n;i++){
        if(score[i]>=60){
            min_p=min(score[i],min_p);
            isworstcase=false;
        }
    }
    if(isworstcase) cout<<"worst case "<<endl;
    else cout<<min_p<<endl;
    return 0;
}