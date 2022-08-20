#include<bits/stdc++.h>
using namespace std;
int main()  {
    string temp;
    while(getline(cin,temp)){
        long long ans=0;
        stringstream t;
        t<<temp;
        while(true){
            int element;
            t>>element;
            //cout<<"element"<<' '<<element<<endl;
            if(!t.fail())ans=ans+element;
            else break;
        }
        cout<<ans<<endl;
    }
}