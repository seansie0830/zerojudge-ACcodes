#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int student[n];
    for(int i = 0; i < n; i++) {
        cin>>student[i];
    }
    int maxnum=INT_MIN,minnum=INT_MAX;
    for(int i = 0; i < n; i++) {
        maxnum = std::max(maxnum, student[i]);
        minnum = std::min(minnum, student[i]);
    }
    cout<<maxnum<<" "<<minnum;
    cout<<endl;
    return 0;
}