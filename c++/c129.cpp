#include<bits/stdc++.h>
using namespace std;
char g[101][101];
int n,m;
int dirx[8]={1,-1,0,0,1,1,-1,-1},diry[8]={0,0,1,-1,-1,1,-1,1};
bool limit(int x,int y){
    return (x>=0&&y>=0&&x<n&&y<m);
}
void dfs(int x,int y){
    //cout<<"x: "<<x<<" y: "<<y<<endl;
    g[x][y] = '*';
    for(int i = 0; i < 8; i++){
        if(limit(x+dirx[i],y+diry[i])&&(g[x+dirx[i]][y+diry[i]]=='@')){
            dfs(x+dirx[i],y+diry[i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cnt=0;
    while(cin>>n>>m){
        if(n*m==0) return 0;
        cnt=0;
        memset(g, 0, sizeof(g));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>g[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='*') continue;
                else{
                    dfs(i,j);
                    //cout<<"done"<<endl;
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
