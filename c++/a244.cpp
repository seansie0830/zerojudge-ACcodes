#include<iostream>
using namespace std;

int main (){
    long long count,a,b,c,i;
    cin>>count;
    for(i=0;i<count;i++){
        cin>>a>>b>>c;
        switch(a){
            case 1:
                cout<<b+c<<endl;
                break;
            case 2:
                cout<<b-c<<endl;
                break;
            case 3:
                cout<<b*c<<endl;
                break;
            case 4:
                cout<<b/c<<endl;
                break;
        }
    }
}
