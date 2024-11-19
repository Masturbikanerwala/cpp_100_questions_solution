#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter number a: ";
    cin >> a;

    cout << "Enter number b: ";
    cin >> b;

    if (a < b)
    {
        cout << "B is largest";
    }
    else if (a > b)
    {
        cout << "A is largest";
    }

    else
    {
        cout << "Same or Nagative";
    }

    return 0;
}