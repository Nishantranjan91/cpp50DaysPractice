#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the marks of first student:";
    cin >> a;
    cout << "enter the marks of second student:";
    cin >> b;
    cout << "entet the marks of third student:";
    cin >> c;
    if (a <= b && a <= c)
        cout << a;
    else if (b <= a && b <= c)
        cout << b;
    else
        cout << c;
}