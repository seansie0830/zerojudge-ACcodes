#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    int strLength=min(a.length(),b.length());
    for(int i=0; i<strLength; i++){
        if(a[i]>b[i]) return false;
        else if(a[i]<b[i]) return true;
    }
    if(a.length()<b.length()) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    string data[n];
    int vary[n];
    set<char> alpha;
    vector<string> forDictSort;
    for(int i=0; i<n; i++){
        cin>>data[i];
        alpha.clear();
        for(int j=0; j<data[i].size(); j++){
            alpha.insert(data[i][j]);
        }
        vary[i]=alpha.size();
    }
    int varyMin=INT_MAX;
    for(int i=0; i<n; i++){
        varyMin=std::min(varyMin,vary[i]);
    }
    for(int i=0; i<n; i++) {
        if(vary[i]==varyMin){
            forDictSort.push_back(data[i]);
        }
    }
    sort(forDictSort.begin(),forDictSort.end(),cmp);
    cout<<forDictSort[0]<<endl;
    return 0;
}