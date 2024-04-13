#include<iostream>
using namespace std;
int arr[]={1,-3,2,-5,-2,6,3};
int n=sizeof(arr)/4;
int mn=arr[0];
for(int i=1;i<n;i++){
   mn=min(mn,arr[i]);
}
cout<<mn;
