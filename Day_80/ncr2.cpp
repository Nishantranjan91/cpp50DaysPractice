#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2; i<=x; i++){
        f*=i;
    }
    return f;

}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int r;
    cout<<"enter the value of r:";
    cin>>r;
    int nfact =fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=nfact/(rfact*nrfact);
    cout<<ncr;

}