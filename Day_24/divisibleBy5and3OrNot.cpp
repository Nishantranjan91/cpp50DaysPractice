#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if((n%5==0) && (n%3==0)){
        cout<<"given number is divisible by 3 and 5";

    }
    else{
        cout<<"given number is not divisible by 3 and 5";
    }
} 
