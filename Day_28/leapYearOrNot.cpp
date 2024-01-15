#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter a year:";
    cin>>y;
    if(y%4==0){
        cout<<"the given year is a leap year";
    } 
    else{
        cout<<"the given year is not a leap year";
    }
}