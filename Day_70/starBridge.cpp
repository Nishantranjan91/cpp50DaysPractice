#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines:";
    cin>>n;
    int m=n-1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
}