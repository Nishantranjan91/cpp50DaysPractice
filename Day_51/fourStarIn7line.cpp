#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    int m;
    cout<<"enter number of column:";
    cin>>m;
    for(int i=1; i<=n; i++){
        for(int i=1; i<=m; i++){
            cout<<"*";
        }
        cout<<endl;
    }
}