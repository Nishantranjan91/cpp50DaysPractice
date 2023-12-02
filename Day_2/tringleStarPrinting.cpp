// *
// * *
// * * *
// * * * *
// * * * * *

// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    int n, n2;
    cout << "Enter your number for start printing: ";
    cin >> n;
    cout << "Enter your number for number triangle: ";
    cin >> n2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}