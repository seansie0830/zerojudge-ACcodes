#include<bits/stdc++.h>
#define debug   1
using namespace std;
int main()  {
    long long table[4],n;
    int temp;
    cin>>n;
    memset(table,0,sizeof(table));
    for(int i = 0; i<n; i++){
        scanf("%d",&temp);
        table[temp]++;
    }
    for(int i =1; i<=3; i++){
        for(int j = 0;j<table[i];j++){
            printf("%d ",i);
        }
    }
    cout<<endl;
    return 0;
}