#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number:";
    cin>>a;
    int *ptra=&a;
    cout<<a<<endl;
    cout<<*ptra<<endl;
    
}