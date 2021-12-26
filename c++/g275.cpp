//  AC (3ms, 336KB)
#include<iostream>
using namespace std;
int main (){
    int num = 0;
    bool nots=false;
    cin>>num;
    int pingzhe[num][14],i,j;
    for(i=0;i<num;i++)for (j=0;j<14;j++) cin>>pingzhe[i][j];
    for(i=0;i<num;i++){
        nots=false;
        if(!(pingzhe[i][1]!=pingzhe[i][3]&&pingzhe[i][8]!=pingzhe[i][10]&&pingzhe[i][1]==pingzhe[i][5]&&pingzhe[i][8]==pingzhe[i][12])){
            cout<<"A";
            nots=true;
        }
        if(!(pingzhe[i][6]==1&&pingzhe[i][13]==0)){
            cout<<"B";
            nots=true;
        }
        if(!((pingzhe[i][1]!=pingzhe[i][8])&&(pingzhe[i][3]!=pingzhe[i][10]&&pingzhe[i][5]!=pingzhe[i][12]))){
            cout<<"C";
            nots=true;
        }
        if(nots==false)cout<<"None";
        cout<<endl;
    }
}
