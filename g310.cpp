#include<bits/stdc++.h>
using namespace std;
int main (){
    queue<int> x,y;
    int n,i,temp,score=0;
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        x.push(temp);
    }
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        y.push(temp);
    }
    while(y.size()>0){
        if(y.front()>x.front()){
            score++;
            y.pop();
            x.pop();
        }
        else if(y.front()==x.front()){
            y.pop();
        }
        else{
            y.pop();
        }
    }
    cout<<score<<endl;
    return 0;
}