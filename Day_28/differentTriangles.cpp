#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first side:";
    cin>>a;
    cout<<"enter secons side:";
    cin>>b;
    cout<<"enter third side:";
    cin>>c;
    if(a==b &&a==c)cout<<"equilateral";
    else if(a==b||a==c||b==c)cout<<"isoscele";
    else cout<<"scalene";
}