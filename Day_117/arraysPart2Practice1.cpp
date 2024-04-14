#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";

    }
    return;
}
int main(){
    int arr[5]={1,4,2,7,4};
    display(arr);
}