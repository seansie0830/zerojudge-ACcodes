#include<bits/stdc++.h>
#define debug 1
using namespace std;
int main()  {
    int n;
    cin>>n;
    bool attend[n+1];
    memset (attend,true,sizeof (attend));
    for(int i=0;i<3;i++){
        int leave;
        cin>>leave;
        attend[leave] = false;
    }
    for(int i=n;i>0;i--){
        if(attend[i]){
            cout<<"No. "<<i<<endl;
        }
    }
    #if debug
    cout<<endl;
    #endif
    return 0;
}