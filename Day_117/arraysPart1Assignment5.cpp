#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int main() {
    int arr[] = {1, -3, 2, 5, -2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > mx) {
            mx = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] > smx && arr[i] != mx) {
            smx = arr[i];
        }
    }

    cout << "Max: " << mx << endl;
    cout << "Second Max: " << smx << endl;

    return 0;
}
