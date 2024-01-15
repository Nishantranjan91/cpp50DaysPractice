#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter the length:";
    cin>>l;
    cout<<"enter the breadth:";
    cin>>b;
    int a;
    a=l*b;
    int p=2*(l+b);
    if(a>p)cout<<"area is greater than the perimeter";
    else if(a<p)cout<<"area is lesser than the perimeter";
    else cout<<"area is equal to the perimeter";
}