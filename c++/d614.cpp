#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,m,i,best=INT_MIN,part1,part2,slide=0;
    cin>>n>>m;
    int cows[n];
    for(i=0;i<n;i++)cin>>cows[i];
    for(i=0;i<m;i++) slide=slide+cows[i];
    for(i=1;i<n;i++){
        slide=slide+cows[(i+m-1)%n]-cows[i-1];
        best=max(slide,best);
    }
    cout<<best;
    cout<<endl;
    return 0; 
}