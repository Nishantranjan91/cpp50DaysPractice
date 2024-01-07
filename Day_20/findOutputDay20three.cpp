#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the value of x :";
    cin>>x;
    cout<<"enter the value of y :";
    cin>>y;
    x+=y;
    x-=y;
    x%=y;
    cout<<x;
}