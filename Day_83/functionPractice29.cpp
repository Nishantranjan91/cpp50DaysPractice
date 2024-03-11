#include<iostream>
using namespace std;
int a=9;//global variable
void fun(int x,int y){
    cout<<"address of fun x"<<&x<<endl;
    cout<<"address of fun y"<<&y<<endl;
}
void f(){
    cout<<a;
}
int main(){
    cout<<a+7<<endl;
    f();
}
