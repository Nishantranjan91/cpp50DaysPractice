#include<iostream>
using namespace std;
int main(){
    int radius;
    cout<<"enter the radius:";
    cin>>radius;
    float pi=3.14;
    float circumference,area;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    if(circumference>area){
        cout<<"greater is circumference"<<circumference;
    }
    if(area>circumference){
        cout<<"greatest is area"<<area;
    }
    if(area==circumference){
        cout<<"both are equal";
    }


}
