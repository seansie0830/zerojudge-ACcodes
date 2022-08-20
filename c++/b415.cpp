#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])    {
    long long x0,n,m;
    while(scanf("%d%d%d",&x0,&n,&m)) {
        for(int i = 0; i < m; i++){
            printf("%d ",&x0);
            x0=x0*x0%n;
        }
        printf("\n");
    }
}