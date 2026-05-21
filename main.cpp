#include <iostream>

using namespace std;

// Function declarations
void showMainMenu();
void historyMenu();
void conceptsMenu();

int main()
{
    int choice;

    do
    {
        showMainMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            historyMenu();
            break;

        case 2:
            conceptsMenu();
            break;

        case 3:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    return 0;
}

// Main Menu
void showMainMenu()
{
    cout << "\n===== FOUNDATIONS AND HISTORY OF C++ =====\n";
    cout << "1. History of C++\n";
    cout << "2. Learn C++ Concepts\n";
    cout << "3. Exit\n";
    cout << "Enter choice: ";
}

// History Section
void historyMenu()
{
    int choice;

    do
    {
        cout << "\n===== HISTORY OF C++ =====\n";
        cout << "1. Origin of C++\n";
        cout << "2. Development of C++\n";
        cout << "3. Evolution of C++\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nC++ was developed by Bjarne Stroustrup at Bell Labs in 1979.\n";
            break;

        case 2:
            cout << "\nC++ was created as an extension of the C programming language.\n";
            break;

        case 3:
            cout << "\nC++ evolved with versions such as C++98, C++11, C++14, C++17, and C++20.\n";
            break;

        case 4:
            cout << "Returning to Main Menu...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);
}

// Concepts Section
void conceptsMenu()
{
    int choice;

    do
    {
        cout << "\n===== C++ CONCEPTS =====\n";
        cout << "1. Data Types\n";
        cout << "2. Control Flow\n";
        cout << "3. Loops\n";
        cout << "4. Arrays\n";
        cout << "5. File Streams\n";
        cout << "6. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nData types define the type of data a variable can store.\n";
            break;

        case 2:
            cout << "\nControl flow statements include if, if-else, and switch.\n";
            break;

        case 3:
            cout << "\nLoops are used to repeat actions. Examples: for, while, do-while.\n";
            break;

        case 4:
            cout << "\nArrays store multiple values of the same data type.\n";
            break;

        case 5:
            cout << "\nFile streams are used for reading and writing files in C++.\n";
            break;

        case 6:
            cout << "Returning to Main Menu...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);
}
