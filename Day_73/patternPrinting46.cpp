#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter the no of lines:";
    cin>>n;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-1; j++){
        if(i==j)cout<<"*";
        else cout<<" ";
        }
    }
    cout<<" ";
    for(int j=1; j<=n-1; j++){
        if(i+j==n)cout<<"*";
        else cout<<endl;
    }
    for(int i=1; i<n; i++){
        cout<<" ";
    }
    cout<<"*";
}