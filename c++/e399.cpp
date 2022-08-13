#include<bits/stdc++.h>
using namespace std;
int main()  {
    int n;
    cin >> n;
    int a[n],b[n+1]={0};
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i+1]=b[i]+a[i];
    }
    for(int i = 1; i <= n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}