#include<bits/stdc++.h>
#include<sstream>
using namespace std;
bool well_formed(int);
bool biwell_formed(int,int);
void output(int ,int,int);
bool issolutions=false;
int main(){
    int n,i,a,b;
    while(true){
        issolutions=false;    
        cin>>n;
        if(n==0) return 0;
        for(i=1234;i<=49876;i++){
            if(!well_formed(i)) continue;
            if(biwell_formed(i*n,i)) output(i*n,i,n);
            if(i*n>98765) break;
        }
        if(!issolutions) cout<<"There are no solutions for "<<n<<"."<<endl;
    }

}
bool well_formed(int n){
    string sn;
    stringstream ssn;
    ssn<<n;
    ssn>>sn;
    if(sn.length()==4) sn="0"+sn;
    int tempnum[5]={-1,-1,-1,-1,-1},i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(tempnum[j]==sn[i]) return false;
        }
        tempnum[i]=sn[i];
    }
    return true;
}
bool biwell_formed(int a,int b){  // ! bug
    string sa,sb,ssum;
    stringstream ssa,ssb;
    ssa<<a;
    ssb<<b;
    ssa>>sa;
    ssb>>sb;
    if(sa.length()==4) sa="0"+sa;
    if(sb.length()==4) sb="0"+sb;
    ssum=sa+sb;
    int tempnum[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},i,j;
    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
            if(tempnum[j]==ssum[i]) return false;
        }
        tempnum[i]=ssum[i];
    }
    return true;
}
void output(int a,int b,int c){
    string sa,sb,sc,out;
    stringstream ssa,ssb,ssc;
    ssa<<a;
    ssb<<b;
    ssc<<c;
    ssa>>sa;
    ssb>>sb;
    ssc>>sc;
    if(sa.length()==4) sa="0"+sa;
    if(sb.length()==4) sb="0"+sb;
    if(sc.length()==4) sc="0"+sc;
    out=sa+" / "+sb+" = "+sc;
    cout<<out<<endl;
    issolutions=true;
}