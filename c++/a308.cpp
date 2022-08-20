#include<bits/stdc++.h>
using namespace std;
int main()  {
    string target,temp,flow;
    vector<string> docs;
    stringstream ss;
    while(cin>>target){
        bool isapear=false;
        int count=0,targetNum=0;
        getline(cin,temp);
        transform(temp.begin() , temp.end(), temp.begin(), toupper(result));
        ss<<temp;
        while(ss>>flow){
            count++;
            if(flow==target){
                if(!isapear) {
                    isapear=true;
                    targetNum++;
                    cout<<count<<' ';
                }
                else{
                    targetNum++;
                }
                
            }
        }
        if(!isapear){
            cout<<-1<<endl;
        }
        else{
            cout<<targetNum<<endl;
        }
    }
}