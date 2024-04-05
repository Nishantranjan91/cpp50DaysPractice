#include<iostream>
using namespace std;
int mainI(){
    int a;
    cout<<"enter the first number:";
    cin>>a;
    int *ptra=&a;
    cout<<a<<endl;
    *ptra=10;
    cout<<a<<endl;
}