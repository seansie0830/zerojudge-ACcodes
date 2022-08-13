// ! still fixing 
#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<string> testdata;
    string temp,line;
    while(cin.getline(line,1000)){

    }
    while(cin>>temp){
        testdata.push_back(temp);
    }
    int i;
    bool isFirst=true;
    for(i=0;i<testdata.size();i++){
        if(isFirst){
            testdata[i][0]=toupper(testdata[i][0]);
            isFirst=false;
        }
        if(testdata[i]=="i?"||testdata[i]=="i."){
            testdata[i][0]='I';
        }
        if(testdata[i].back()=='!'||testdata[i].back()=='.'){
            isFirst=true;
        }
    }
    for(i=0;i<testdata.size();i++){
        cout<<testdata[i]<<" ";
    }
    cout<<endl;
    return 0;
}