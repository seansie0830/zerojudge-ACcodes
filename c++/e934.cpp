#include<bits/stdc++.h>
using namespace std;
int main(){
    string dna;
    map<char,char> mp;
    mp['T']='A';
    mp['A']='U';
    mp['G']='C';
    mp['C']='G';
    cin>>dna;
    for(int i=0;i<dna.length(); i++){
        cout<<mp[dna[i]];
    }
    cout<<endl;
    return 0;
}