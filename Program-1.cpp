#include <iostream>
using namespace std;
class Calculator
{
    double a;
    double b;
    string operation;

public:
    void setValue()
    {
        cout << "Enter two operands (a and b): ";
        cin >> a >> b;
        cout << "Enter the operation to be performed (+, -, *, /): ";
        cin >> operation;
    }
    void getValue()
    {
        if (operation == "+")
        {
            cout << a + b;
        }
        else if (operation == "-")
        {
            cout << a - b;
        }
        else if (operation == "*")
        {
            cout << a * b;
        }
        else if (operation == "/")
        {
            cout << a / b;
        }
    }
};
int main()
{
    Calculator c1;
    c1.setValue();
    c1.getValue();
    return 0;
}