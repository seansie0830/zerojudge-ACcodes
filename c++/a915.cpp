// TODO testing
#include <iostream>
#include <algorithm>
#define debug 1
using namespace std;
struct points{
    int x;
    int y;
};
bool cmp(points,points);
// ! error
// TODO [fixing....] rewrite!
bool cmp(points xx,points yy){
    if(xx.x>yy.x) return false;
    else if(xx.x<yy.x) return true;
    if(xx.y>yy.y) return false;
    else return true;
}
int main (){
    int n,i,a,b;
    cin>>n;
    points table[n];
    for(i=0;i<n;i++){
        cin>>a>>b;
        table[i].x = a;
        table[i].y = b;
    }
    sort(table,table+n,cmp);
    for(i=0;i<n;i++){
        cout<<table[i].x<<" "<<table[i].y<<endl;
    }
    #if debug
    cout<<endl;
    #endif
    return 0;
}