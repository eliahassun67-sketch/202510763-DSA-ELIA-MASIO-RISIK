#include <iostream>
using namespace std;

int main()
{
    int pin = 1234, enteredPin, attempts = 0;
    double balance = 1000, amount;
    int choice;

    while (attempts < 3)
    {
        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
        {
            cout << "Login Successful\n";
            break;
        }
        else
        {
            cout << "Wrong PIN\n";
            attempts++;
        }
    }

    if (attempts == 3)
    {
        cout << "Too many attempts. Program ended.\n";
        return 0;
    }

    
    do
    {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Balance: $" << balance << endl;
            break;

        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            cout << "Money Deposited Successfully\n";
            break;

        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal Successful\n";
            }
            else
            {
                cout << "Insufficient Balance\n";
            }
            break;

        case 4:
            cout << "Thank you for using ATM\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}
