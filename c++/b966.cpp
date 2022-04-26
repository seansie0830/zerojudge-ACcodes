#include<iostream>
using namespace std;
bool line[10000000]={false};
void write(int,int);
int read(void);
int main (){
    int n,a,b,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        write(a,b);
    }
    cout<<read();
    return 0;
}
void write(int start,int end){
    int i;
    for(i=start;i<end;i++){
        line[i]=true;
    }
}
int read(void){
    int length=0,i;
    for(i=0;i<10000000;i++){
        if(line[i]) length++;
    }
    return length;
}