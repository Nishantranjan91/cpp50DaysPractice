#include<iostream>
using namespace std;
void fun(int x=7, int y, int z){
    cout<<x<<" "<<y<<" "<<z;
}
int main(){
    fun(5,6);
}