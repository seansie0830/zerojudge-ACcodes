#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(cin >> n){
        n++;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <i;j++){
                cout<<i;
            }
            cout<<endl;
        }
        for(int i=n-2; i >= 0; i--){
            for(int j = 0; j < i; j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
}