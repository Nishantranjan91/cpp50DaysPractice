#include<iostream>
using namespace std;
void print(int a, int b){
    for(int i=a; i<=b; i++){
        cout<<i<<" ";
    }
}
int main(){
    int a;
    cout<<"enter the first number:";
    cin>>a;
    int b;
    cout<<"enter the second number:";
    cin>>b;
    print(a,b);
}