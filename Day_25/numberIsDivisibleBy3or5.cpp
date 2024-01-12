#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n%3==0 || n%5==0){
    cout<<"the given number is either divisible by 3 or 5";  
    }
    else{
        cout<<"the given number is neither divisible by 3 nor 5";
        
    }
}