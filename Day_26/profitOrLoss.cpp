#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cost price of the object:";
    cin>>cp;
    cout<<"enter selling price of the object:";
    cin>>sp;
    int profit,loss;
    profit=sp-cp;
    loss=cp-sp;
    if(cp<sp){
        cout<<"the person is in profit"<<" "<<profit;
    }
    if(cp>sp){
        cout<<"the person is in loss"<<" "<<loss;
    }
    if(cp==sp){
        cout<<"no loss no profit";
    }
}