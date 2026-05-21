#include <iostream>
#include <string>

using namespace std;

// Function declarations
bool loginSystem();
void showMenu();
void checkBalance(double balance);
void depositMoney(double &balance, string transactions[], int &count);
void withdrawMoney(double &balance, string transactions[], int &count);
void viewTransactions(string transactions[], int count);

int main()
{
    double balance = 1000.0;
    string transactions[100];
    int transactionCount = 0;
    int choice;

    // Login system
    if (!loginSystem())
    {
        cout << "Too many incorrect attempts. Program terminated.\n";
        return 0;
    }

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            depositMoney(balance, transactions, transactionCount);
            break;

        case 3:
            withdrawMoney(balance, transactions, transactionCount);
            break;

        case 4:
            viewTransactions(transactions, transactionCount);
            break;

        case 5:
            cout << "Thank you for using the ATM system.\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}

// Login Function
bool loginSystem()
{
    int pin = 1234;
    int enteredPin;
    int attempts = 0;

    while (attempts < 3)
    {
        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin)
        {
            cout << "Login successful.\n";
            return true;
        }
        else
        {
            cout << "Incorrect PIN.\n";
            attempts++;
        }
    }

    return false;
}

// Display Menu
void showMenu()
{
    cout << "\n===== ATM MENU =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. View Transactions\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

// Check Balance
void checkBalance(double balance)
{
    cout << "Current Balance: $" << balance << endl;
}

// Deposit Function
void depositMoney(double &balance, string transactions[], int &count)
{
    double amount;

    cout << "Enter amount to deposit: ";
    cin >> amount;

    balance += amount;

    transactions[count] = "Deposited: $" + to_string(amount);
    count++;

    cout << "Deposit successful.\n";
}

// Withdraw Function
void withdrawMoney(double &balance, string transactions[], int &count)
{
    double amount;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= balance)
    {
        balance -= amount;

        transactions[count] = "Withdrawn: $" + to_string(amount);
        count++;

        cout << "Withdrawal successful.\n";
    }
    else
    {
        cout << "Insufficient balance.\n";
    }
}

// View Transactions
void viewTransactions(string transactions[], int count)
{
    cout << "\n===== TRANSACTION HISTORY =====\n";

    if (count == 0)
    {
        cout << "No transactions available.\n";
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << transactions[i] << endl;
        }
    }
}
