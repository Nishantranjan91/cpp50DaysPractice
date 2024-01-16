#include<iostream>
using namespace std;
int main(){
    int x1,y1,z1,x2,y2,z2,x3,y3,z3;
    cout<<"enter the first point:";
    cin>>x1>>y1;
    cout<<"enter the second point:";
    cin>>x2>>y2;
    cout<<"enter the third point:";
    cin>>x3>>y3;
    if(x2*y3-y2*x3-x1*y3+y1*x3+x1*y2-x2*y1==0) cout<<"the given points is collinear";
    else cout<<"non-collinear";

}