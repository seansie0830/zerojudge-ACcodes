#include <iostream>
#include <climits>
using namespace std;
int map[100000]={0};
int main()
{
    int n,i,temp,maxNum;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        map[temp]++;
    }
    maxNum=INT_MIN;
    for(i=1;i<100000;i++) maxNum=max(map[i],maxNum);
    for(i=1;i<100000;i++) if(map[i]==maxNum){
        cout<<i<<" "<<map[i];
        cout<<endl;
    }
    return 0;
}