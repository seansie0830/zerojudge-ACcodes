#include<bits/stdc++.h>
using namespace std;
int main (){
    map<int,char> db;
    map<int,char>::iterator itor;
    db[5]='A',db[7]='B',db[2]='C',db[13]='D',db[8]='E',db[12]='F';
    long long  i,n;
    int a,b,c,d,sum;
    while(cin>>n){
        for(i=0;i<n;i++){
            scanf("%d%d%d%d",&a,&b,&c,&d);
            sum=a*8+b*4+c*2+d;
            itor=db.find(sum);
            printf("%s",&(itor->second));
        }
        cout<<endl;
        
        }
}