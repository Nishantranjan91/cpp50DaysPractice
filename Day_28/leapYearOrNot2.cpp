#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"enter your year";
    cin>>y;
    if(y%400==0)cout<<"the given year is leap year";
    else if(y%100==0)cout<<"the given year is not a leap year";
    else if(y%4==0)cout<<"the given year is a leap year";
    else cout<<"the given year is not a leap year";

}