#include<iostream>
using namespace std;
int main ()
{
    int t,k;
    cin>>k;
    int ans[5][k],i;
    for(t=0;t<k;t++){
        for(i=0;i<4;i++)cin>>ans[i][t];
    }
    for(t=0;t<k;t++){
       if(ans[0][t]+ans[3][t]==ans[1][t]+ans[2][t]){
            ans[4][t]=ans[1][t]+ans[3][t]-ans[0][t];
        }
        else if (ans[0][t]*ans[3][t]==ans[1][t]*ans[2][t])
        {
            ans[4][t]=ans[1][t]*ans[3][t]/ans[0][t];
        }
        for(i=0;i<=4;i++)cout<<ans[i][t]<<" ";
        cout<<endl;

    }
    return 0;

}
