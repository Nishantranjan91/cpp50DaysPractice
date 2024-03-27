#include<iostream>
using namespace std;
int main(){
    int x=122;
    int *p=&x;
    x=90;
    cout<<*p;
}