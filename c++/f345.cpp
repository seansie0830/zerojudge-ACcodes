#include<bits/stdc++.h>
using namespace std;
int main()  {
    stack<int> db;
    int n;
    cin>>n;
    for(int i=0,temp;i<n;i++){
        cin>>temp;
        db.push(temp);
    }
    for(int i=0;i<n;i++){
        cout<<db.top()<<' ';
        db.pop();
    }
    return 0;
}