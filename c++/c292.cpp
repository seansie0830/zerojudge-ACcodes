#include "bits/stdc++.h"
using namespace std;
int main (){
    int n;
    cin>>n;
    int map[n][n],read,all;
    int i,j,ops,x=n/2,y=n/2;
    cin>>ops;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>map[i][j];
        }
    }
    all=n*n;
    read=1;
    int step=1;
    while(read<=all){
        for(i=0;i<step;i++){
            cout<<map[x][y];
            switch(ops){
                case 0:
                    x--;
                    break;
                case 1:
                    y--;
                    break;
                case 2:
                    x++;
                    break;
                case 3:
                    y++;
                    break;
                default:
                    break;
            }
            read++;
        }
        step++;
        ops++;
        ops=ops%4;
    }
    cout<<endl;
    return 0;
}