#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the x coordinate:";
    cin>>x;
    cout<<"enter the y coordinate:";
    cin>>y;
    if(x==0&&y==0) cout<<"the given coordinate is on the origin";
    else if(x>0 && y>0) cout<<"the given coordinate is in the first quadranrt";
    else if(x>0 && y<0) cout<<" the given coordinate is in the fourth quadrant";
    else if(x<0 && y>0) cout<<" the given coordinate is in the second quadrant";
    else if(x<0 && y<0) cout<<"the given coordinate is in the third quadrant ";
    else if(x<0 && y==0) cout<<"the given coordinate is on the negative x axis";
    else if(x>0 && y==0) cout<<"the given coordinate is on the positive x axis";
    else if(x==0 && y<0) cout<<"the given coordinate is on the negative y axis";
    else cout<<"the given coordinate is on the positive y axis";
}