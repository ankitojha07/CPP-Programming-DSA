#include <iostream>
using namespace std;

class calculator
{
public:
    void startCalcy()
    {
        cout << "Please enter 1 to start the calculator or enter 0 to end) : ";
        int n;
        cin >> n;

        if (n == 0)
        {
            return;
        }

        double num1, num2;
        char op;
        cout << "Enter the first number : ";
        cin >> num1;

        cout << "Enter the operator : ";
        cin >> op;

        cout << "Enter the second number : ";
        cin >> num2;

        calcy(num1, num2, op);
    }
    void calcy(double num1, double num2, char op)
    {
        double result = 0;
        switch (op)
        {
        case '+':
            result = num1 + num2;
            cout << result << endl;
            startCalcy();
            break;

        case '-':
            result = num1 - num2;
            cout << result << endl;
            startCalcy();1
            break;

        case '*':
            result = num1 + num2;
            cout << result << endl;
            startCalcy();
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "Invalid operation (denominator must be Greater than 0)" << endl;
                startCalcy();
                break;
            }
            else
            {
                result = num1 / num2;
                cout << result << endl;
                startCalcy();
                break;
            }
        case '%':
            // result = num1 % num2;
            break;

        default:
            cout << "Please select valid operator (-, +, /, *)";
            startCalcy();
            break;
        }
    }
};

int main()
{
    calculator c;
    c.startCalcy();
    return 0;
}
