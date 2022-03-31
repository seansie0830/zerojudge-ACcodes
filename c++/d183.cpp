#include<bits/stdc++.h>
using namespace std;
bool issolutions=false;
string ss_convert(int input){
    stringstream temp;
    string output;
    temp<<input;
    temp>>output;
    return output;
}
bool biwell_formed(string sa,string sb){ 
    string ssum; 
    if(sa.length()==4) sa="0"+sa;
    if(sb.length()==4) sb="0"+sb;
    ssum=sa+sb;
    int tempnum[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},i,j;
    for(i=0;i<10;i++){
        for(j=0;j<i;j++)if(tempnum[j]==ssum[i]) return false;
        tempnum[i]=ssum[i];
    }
    return true;
}
void output(string sa,string sb,string sc){
    string out;
    if(sa.length()==4) sa="0"+sa;
    if(sb.length()==4) sb="0"+sb;
    if(sc.length()==4) sc="0"+sc;
    out=sa+" / "+sb+" = "+sc;
    cout<<out<<endl;
    issolutions=true;
}
int main(){
    int n,i,a,b;
    while(true){
        issolutions=false;    
        cin>>n;
        if(n==0) return 0;
        for(i=1234;i<=49876;i++){
            if(biwell_formed(ss_convert(i*n),ss_convert(i))) output(ss_convert(i*n),ss_convert(i),ss_convert(n));
            if(i*n>98765) break;
        }
        if(!issolutions) cout<<"There are no solutions for "<<n<<"."<<endl;
    }
}