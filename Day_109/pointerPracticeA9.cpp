#include<iostream>
using namespace std;
int main(){
    int a=15,b=20;
    int *ptr=&a;
    int *ptr2=&b;
    cout<<a<<" "<<b<<endl;
    *ptr=*ptr2;
    cout<<a<<" "<<b<<endl;
}