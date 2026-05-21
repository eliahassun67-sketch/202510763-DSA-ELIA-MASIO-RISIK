#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n===== FOUNDATIONS AND HISTORY OF C++ =====\n";
        cout << "1. History of C++\n";
        cout << "2. C++ Concepts\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nC++ was developed by Bjarne Stroustrup in 1979.\n";
            cout << "It was created as an extension of the C language.\n";
            break;

        case 2:
            cout << "\nImportant C++ Concepts:\n";
            cout << "- Data Types\n";
            cout << "- Control Flow\n";
            cout << "- Loops\n";
            cout << "- Arrays\n";
            cout << "- File Streams\n";
            break;

        case 3:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 3);

    return 0;
}
