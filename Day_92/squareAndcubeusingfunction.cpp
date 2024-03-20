#include<iostream> 
using namespace std;
void printSquares(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<endl;

    }
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    printSquares(n);
}