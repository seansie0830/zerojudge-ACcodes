#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int>numbers;
    int n,temp;
    while(cin>>n){
        numbers.clear();
        for(int i=0; i<n; i++){
            cin>>temp;
            numbers.push_back(temp);

        }
        sort(numbers.begin(),numbers.end());
        for(int i=0; i<numbers.size(); i++){
            cout<<numbers[i]<<" ";
        }
        cout<<endl;
    }
}
