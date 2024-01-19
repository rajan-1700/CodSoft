// CALCULATOR:
#include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1, num2;
    cout << "Enter the 1st number:";
    cin >> num1;
    cout << "Enter the 2nd number:";
    cin >> num2;
    cout << "+ : Addition" << endl;
    cout << "- : Subtraction" << endl;
    cout << "* : Multiplication" << endl;
    cout << "/ : Division" << endl;
    cout << "Enter the operation:";
    cin >> operation;
    switch (operation)
    {
    case '+':
        cout << "Addition of number1 and number2 is " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Subtraction of number1 and number2 is " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Multiplication of number1 and number2 is " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Division of number1 and number2 is " << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }
    return 0;
}