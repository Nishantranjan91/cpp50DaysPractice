#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"enter the third number:";
    cin>>c;
    if(a>b && a>c){
        cout<<"the greatest number is:"<<" "<<a;
    }
    if(b>a && b>c)
        cout<<"the greatest number is:"<<" "<<b;
        
    if(c>a && c>b){
            cout<<"the greatest number is:"<<" "<<c;
        }
    
}