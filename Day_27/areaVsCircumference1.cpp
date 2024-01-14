#include<iostream>
using namespace std;
int main(){
    int r;
    float a,c;
    float pi;
    pi=3.14;
    a=pi*r*r;
    c=2*pi*r;
     cout<<"enter radius:";
     cin>>r;
     
     
    if(a>r){
        cout<<"area>circumference";

    }
    else if(r>a) cout<<"circumference>area";
    else cout<<"area=circumference";
}