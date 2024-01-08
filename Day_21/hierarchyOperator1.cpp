#include<iostream>
using namespace std;
int main(){
    int x;
     cout<<"enter first number:";
     cin>>x;
     int y,m;
     cout<<"enter second number and value for taking modulus:";
     cin>>y>>m;
     int z;
     z=(x*y)%m;
     cout<<"output is "<<z;
}