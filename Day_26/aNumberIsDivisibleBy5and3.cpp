#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "the given number is divisible by 3 and 5";
        }
        else
        {
            cout << "the given condition is not matched";
        }
    }

    else
    {
        cout << "the given condition is not matched";
    }
}