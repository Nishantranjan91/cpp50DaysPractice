#include<iostream>
using namespace std;
int main(){
    cout<<"enter the cost price:";
    int cp;
    cin>>cp;
    cout<<"enter the selling price:";
    int sp;
    cin>>sp;
    int profit=sp-cp;
    int loss=cp-sp;
    if(sp>cp){
        cout<<"you are in profit";
        cout<<endl;
        cout<<"your profit is:"<<profit;
    }
    else{
        cout<<"you are in loss";
        cout<<endl;
        cout<<loss;
    }
    
}