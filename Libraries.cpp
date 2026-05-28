// Include only allowed libraries
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function prototypes
void writeToFile();
void readFromFile();
void appendToFile();

int main() {
    int choice;

    // Main program loop - keeps menu active until user chooses Exit
    do {
        // Display clear menu
        cout << "===== SIMPLE NOTEPAD =====" << endl;
        cout << "1. Write File" << endl;
        cout << "2. Read File" << endl;
        cout << "3. Append File" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer to avoid issues with getline()

        // Process user choice
        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                // Handle invalid input
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
        cout << endl; // Add space for readability

    } while (choice != 4); // Repeat until Exit is selected

    return 0;
}

// Function to write content to a file (overwrites existing content)
void writeToFile() {
    string fileName, content;

    cout << "Enter the name of the file to write: ";
    getline(cin, fileName);

    // Create file output stream
    ofstream outFile(fileName);

    // Check if file opened successfully
    if (!outFile) {
        cout << "Error: Could not open or create the file." << endl;
        return;
    }

    cout << "Enter content (type 'END' on a new line to finish):" << endl;
    // Read lines until user enters "END"
    while (true) {
        getline(cin, content);
        if (content == "END") break;
        outFile << content << endl;
    }

    // Close file properly
    outFile.close();
    cout << "File written successfully." << endl;
}

// Function to read and display content from a file
void readFromFile() {
    string fileName, line;

    cout << "Enter the name of the file to read: ";
    getline(cin, fileName);

    // Create file input stream
    ifstream inFile(fileName);

    // Check if file exists and opened
    if (!inFile) {
        cout << "Error: File not found or cannot be opened." << endl;
        return;
    }

    cout << "--- File Content ---" << endl;
    // Read file line by line
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close file properly
    inFile.close();
    cout << "--- End of File ---" << endl;
}

// Function to add new content to the end of an existing file
void appendToFile() {
    string fileName, content;

    cout << "Enter the name of the file to append: ";
    getline(cin, fileName);

    // Open file in append mode
    ofstream appendFile(fileName, ios::app);

    // Check if file is ready
    if (!appendFile) {
        cout << "Error: Could not open the file." << endl;
        return;
    }

    cout << "Enter content to append (type 'END' on a new line to finish):" << endl;
    while (true) {
        getline(cin, content);
        if (content == "END") break;
        appendFile << content << endl;
    }

    // Close file properly
    appendFile.close();
    cout << "Content appended successfully." << endl;
}
