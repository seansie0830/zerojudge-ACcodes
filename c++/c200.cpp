#include<bits/stdc++.h>
using namespace std;   
int topoint(char input) {
    if(isdigit(input)){
        return input-'0';
    }
    return input-'A'+10;
}
int main()  {
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string plate;
        long long point=0,weight=1;
        cin>>plate;
        for(int i=plate.length()-1; i>=0; i--){
            point=point+(topoint(plate[i]))*weight;
            weight=weight*36;
        }
        cout<<point%1688+1<<endl;
    }
}