#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"cout<<enter month number:";
    cin>>x;
    switch(x<=7&&x%2!=0){
        case 1:
        cout<<"31";
    }
    switch(x>=8&&x%2==0){
        case 2:
        cout<<"30";
    }
    switch(x){
        case 3:
        cout<<"28";
    }
}