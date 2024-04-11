#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of arrays:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the emlement you want to search:";
    cin>>x;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x)cout<<"present"<<endl;
    }
}