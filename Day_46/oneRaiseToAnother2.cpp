#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the base:";
    cin>>a;
    cout<<"enter the exponent:";
    cin>>b;
    bool flag=true;
    if(b<0){
        flag=false;
        b=-b;
    }
    float power=1;
    for(int i=1; i<=b; i++){
        power=power*a;

    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    if(a==0&&b==0){
        cout<<"not defined"; 
    cout<<a<<"raised to the power";
    }
    else{
        cout<<b<<"raised to the power"<<power;
    }
}