#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first number:";
    cin>>a;
    int b;
    cout<<"enter the second number:";
    cin>>b;
    int *ptra=&a;
    int *ptrb=&b ;
    cout<<(*ptra)*(*ptrb);
}