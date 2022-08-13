#include "bits/stdc++.h"
using namespace std;
int r,c;
int main (){
    int m;
    cin>>r>>c>>m;
    int matrix[r][c],anti_matrix[c][r];
    int i,j,mi,op;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++) cin>>matrix[i][j];
    }
    for(mi=0;mi<m;mi++){
        cin>>op;
        if(op==1){
            for(i=0;i<r/2;i++){
                for(j=0;j<c;j++){
                    swap(matrix[i][j], matrix[r-i][j]);
                }
            }
        }
        else if(op==0){

        }
    }
}
