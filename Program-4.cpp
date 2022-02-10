#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    int count = 0;
    cout << v1.size() << endl;
    cout << "{";
    for (int i = 1; i <= 9; i++)
    {
        int count = 0;
        for (int j = 0; j < v1.size(); j++)
        {
            if (v1[j] % i == 0)
            {
                count++;
            }
        }
        cout << i << ":" << count;
        if (i != 9)
        {
            cout << ", ";
        }
    }
    cout << "}";
}