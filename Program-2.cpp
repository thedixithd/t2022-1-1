#include <iostream>
using namespace std;
int main()
{
    int a, i, count = 0;
    cout << "Enter the value of a: ";
    cin >> a;
    i = 1;
    while (count != a)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            count++;
        }
        i++;
    }
}