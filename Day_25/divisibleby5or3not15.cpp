#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if((n%5==0 || n%3==0)&&(n%15!=0)){
        cout<<"the given number is divisible by 5 or 3 but not divisible by 15";
    }
    else{
        cout<<"the condition is not match by the given data";
    }
}