#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"enter third number:";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"the given three numbers are the sides of a triangle";
    }
    else{
        cout<<"the given three numbers are not the sides of a triangle";
    }

}