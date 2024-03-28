#include<iostream>
using namespace std;
int main(){
    int x=123;
    int *p=&x;
    x=900;
    cout<<*p;
}