#include<bits/stdc++.h>
using namespace std;
bool stringCmp(string sa,string sb){ // * test pass
    int i;
    if(sa.length()>sb.length()) return false;
    else if(sa.length()<sb.length()){
        return true;
    }
    for(i=0;i<sa.length();i++){
        if(sa[i]>sb[i]){
            return false;
        }
        else if(sa[i]==sb[i]) continue;
        else {
            return true;
        }
    }
}
int main (){
    int n;
    cin>>n;
    string testdata[n][3];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++) cin>>testdata[i][j];
    }
    for(i=0;i<n;i++){
        sort(testdata[i],testdata[i]+3,stringCmp);
    }
    for(i=0;i<n;i++){
        cout<<testdata[i][2]<<endl;
    }
    return 0;
}