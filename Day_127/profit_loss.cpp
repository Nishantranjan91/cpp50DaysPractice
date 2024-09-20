#include<iostream>
using namespace std;
int main(){
    cout<<"enter the cost price:";
    int cp;
    cin>>cp;
    cout<<"enter the selling price:";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"you are in profit";
    }
    else{
        cout<<"you are in loss";
    }
    
}