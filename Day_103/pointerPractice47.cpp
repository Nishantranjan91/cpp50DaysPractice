#include<iostream>
using namespace std;
int main(){
    bool flag=true;
    bool*ptr= & flag;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;
}