#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nMenu\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Addition = " << a + b;
            break;

        case 2:
            cout << "Subtraction = " << a - b;
            break;

        case 3:
            cout << "Multiplication = " << a * b;
            break;

        case 4:
            if (b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Division by zero is not allowed.";
            break;

        case 5:
            if (b != 0)
                cout << "Modulus = " << a % b;
            else
                cout << "Modulus by zero is not allowed.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}