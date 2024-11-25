#include <iostream>
using namespace std;

int main()
{
    int i, j, count = 0;
    j = 1;
    cout << "enter your number:  ";
    cin >> i;

    while (j <= i)
    {
        if (i % j == 0)
        {
            count++;
        }
        j++;
    }
    if (count == 2)
    {
        cout << " " << "prime number";
    }
    else
    {
        cout << " " << "composite number";
    }

    return 0;
}