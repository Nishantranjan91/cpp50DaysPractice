#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(int i=0; i<=n; i++){
        int curr=1;
        for(int j=0; j<=i; j++){
            cout<<" ";
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+i);
        }
        cout<<endl;
    }
    cout<<i;
}