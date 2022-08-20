#include<bits/stdc++.h>
#define debug 0
using namespace std;
vector<int> psudofibo;
int main()  {
    int n,temp;
    cin>>n;
    for(int i = 0,N; i < n; i++){
        cin>>N;
        for(int i=0; i<4; i++){
            cin>>temp;
            psudofibo.push_back(temp);
        }
        for(int i=4;i<N;i++){
            psudofibo.push_back(psudofibo[i-1]+psudofibo[i-4]);
        }
        sort(psudofibo.begin(),psudofibo.end());
        #if debug
        for(int i:psudofibo){
            cout<<"i : "<<i<<endl;
        }
        cout<<endl;
        #endif
        cout<<psudofibo[(N+1)/2-1]<<endl;
        psudofibo.clear();
    }
    return 0;
}