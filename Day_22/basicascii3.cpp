#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number:";
    cin>>x;
    int y,m;
    cout<<"enter second number:";
    cin>>y>>m;
    int z=(x*y)%m;
    cout<<"output is:"<<z;
}