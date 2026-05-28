#include "notepad.h"

void writeFile(string filename)
{
    ofstream file(filename);

    string text;

    if(file.is_open())
    {
        cout << "Enter text (type END to stop):\n";

        cin.ignore();

        while(true)
        {
            getline(cin, text);

            if(text == "END")
            {
                break;
            }

            file << text << endl;
        }

        file.close();
        cout << "File saved successfully.\n";
    }
    else
    {
        cout << "Unable to open file.\n";
    }
}

void readFile(string filename)
{
    ifstream file(filename);

    string text;

    if(file.is_open())
    {
        cout << "\nFile contents:\n";

        while(getline(file, text))
        {
            cout << text << endl;
        }

        file.close();
    }
    else
    {
        cout << "File not found.\n";
    }
}

void appendFile(string filename)
{
    ofstream file(filename, ios::app);

    string text;

    if(file.is_open())
    {
        cout << "Enter text to append (type END to stop):\n";

        cin.ignore();

        while(true)
        {
            getline(cin, text);

            if(text == "END")
            {
                break;
            }

            file << text << endl;
        }

        file.close();
        cout << "Text appended successfully.\n";
    }
    else
    {
        cout << "Unable to open file.\n";
    }
}
