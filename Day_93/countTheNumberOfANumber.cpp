#include<iostream>
using namespace std;
int mai (){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int count=0;
    while(n!=10){
        n/=10;
        count++;

    }
    cout<<count;
}