#include<bits/stdc++.h>
using namespace std;
int main()  {
    long long n;
    long long mask[4]={0,16777216,65535,255};
    while(cin>>n){
        for(int i=0;i<4;i++){
            printf("%d ",(n<<(3-i))&mask[i]);
        }
    }
}