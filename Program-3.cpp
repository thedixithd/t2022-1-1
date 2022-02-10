#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, i, count = 0;
    cout << "a: ";
    cin >> a;
    i = 1;
    if (a % 2 != 0)
    {
        a = round((float)a / 2);
    }
    else if (a % 2 == 0)
    {
        a /= 2;
    }
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