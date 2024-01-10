#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of an integer n:";
    cin>>n;
    if(n>=0){
        cout<<"the absolute value of the given number is :"<<n;

    }
    if(n<0){
        cout<<"the absolute value of the ginen number is:"<<(-n);
    }
    if(n==0){
        cout<<"the absolute value of the ginen number is 0";
    }




}