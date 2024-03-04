#include<iostream>
using namespace std;
void starTriangle(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void greating(){
    cout<<"good morning"<<endl;
    cout<<"have a nice day"<<endl;
}
int main(){
    starTriangle();
}