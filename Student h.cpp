#include "student.h"

Student students[100];
int countStudent = 0;

void addStudent()
{
    cout << "Enter ID: ";
    cin >> students[countStudent].id;

    cout << "Enter Name: ";
    cin >> students[countStudent].name;

    cout << "Enter Age: ";
    cin >> students[countStudent].age;

    cout << "Enter Course: ";
    cin >> students[countStudent].course;

    countStudent++;

    cout << "Student Added Successfully\n";
}

void displayStudents()
{
    if(countStudent == 0)
    {
        cout << "No students found\n";
        return;
    }

    for(int i = 0; i < countStudent; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Course: " << students[i].course << endl;
    }
}

void searchStudent()
{
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for(int i = 0; i < countStudent; i++)
    {
        if(students[i].id == id)
        {
            cout << "Student Found\n";
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Course: " << students[i].course << endl;
            return;
        }
    }

    cout << "Student Not Found\n";
}

void updateStudent()
{
    int id;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for(int i = 0; i < countStudent; i++)
    {
        if(students[i].id == id)
        {
            cout << "Enter New Name: ";
            cin >> students[i].name;

            cout << "Enter New Age: ";
            cin >> students[i].age;

            cout << "Enter New Course: ";
            cin >> students[i].course;

            cout << "Student Updated Successfully\n";
            return;
        }
    }

    cout << "Student Not Found\n";
}

void deleteStudent()
{
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for(int i = 0; i < countStudent; i++)
    {
        if(students[i].id == id)
        {
            for(int j = i; j < countStudent - 1; j++)
            {
                students[j] = students[j + 1];
            }

            countStudent--;

            cout << "Student Deleted Successfully\n";
            return;
        }
    }

    cout << "Student Not Found\n";
}
