#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f*=i;

    }
    return f;
}
int combination(int n,int r){
    int ncr=fact(n)/fact(r)*fact(n-r);
    return ncr;
}
int main(){
    int n;
    int r;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the value of r:";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=combination(n,r);
    cout<<ncr;

}