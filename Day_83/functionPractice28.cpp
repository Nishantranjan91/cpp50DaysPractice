#include<iostream>
using namespace std;
int a=9;
void fun(int x,int y){
    cout<<"address of fun x"<<&x<<endl;
    cout<<"address of fun y"<<&y<<endl;
}
void f(){
    cout<<a;
}
int main(){
    f();
}