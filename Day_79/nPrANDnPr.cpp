#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int r;
    cout<<"enter the value of r:";
    cin>>r;
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<fact;
}