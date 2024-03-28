#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;
    cout<<"enter the first number:";
    cin>>*p1;
    cout<<"enter the secon number:";
    cin>>*p2;
    cout<<x+y;
}