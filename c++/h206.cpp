#include<bits/stdc++.h>
using namespace std;
int Aiswin(int A, int B){
    if(A==0&&B==2) return 1;
    if(A==5&&B==0) return 1;
    if(A==2&&B==5) return 1;
    if(A==B) return 0;
    return -1;
}
int main() {
    // testing 
    int f,n;
    cin>>f>>n;
    int i,y[n];
    for(i=0;i<n;i++){
        cin>>y[i];
    }
    for(i=0;i<n;i++){
        if(i>=2){
            if(y[i-1]==y[i-2]){
                switch(y[i-1]){
                    case 0:
                        f=5;
                        break;
                    case 2:
                        f=0;
                        break;
                    case 5:
                        f=2;
                        break;
                }
            }
        }
        cout<<f<<" ";
        if(Aiswin(f,y[i])==1){
            cout<<": Won at round "<<i+1;
            cout<<endl;
            return 0;
        }
        else if(Aiswin(f,y[i])==-1){
            cout<<": Lost at round "<<i+1;
            cout<<endl;
            return 0;
        }
    }
    cout<<": Drew at round "<<i;
    cout<<endl;
    return 0;
}