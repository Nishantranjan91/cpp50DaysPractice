#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter the problem:";
    cin>>a>>op>>b;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;


    }
}