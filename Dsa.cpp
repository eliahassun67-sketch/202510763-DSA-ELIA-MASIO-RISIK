#include <iostream>
using namespace std;

int total(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    char ch;

    do
    {
        string name;
        int m1, m2, m3, sum;
        float avg;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;

        sum = total(m1, m2, m3);
        avg = sum / 3.0;

        cout << "Total = " << sum << endl;
        cout << "Average = " << avg << endl;

        if (avg >= 50)
            cout << "Passed\n";
        else
            cout << "Failed\n";

        cout << "Add another student? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}# 202510763-DSA-ELIA-MASIO-RISIK
