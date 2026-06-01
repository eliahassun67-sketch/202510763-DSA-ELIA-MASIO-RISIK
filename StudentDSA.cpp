#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Student { public: string roll, name; int age; };

void split(string line, Student &s) {
    stringstream ss(line);
    getline(ss, s.roll, ',');
    getline(ss, s.name, ',');
    string a; getline(ss, a); s.age = stoi(a);
}

void displayAll() {
    ifstream f("student.txt"); string line;
    cout << "\n--- All Students ---\n";
    while (getline(f, line)) {
        Student s; split(line, s);
        cout << s.roll << " | " << s.name << " | " << s.age << "\n";
    }
}

void search() {
    string r, line; cout << "Enter Roll No: "; cin >> r;
    ifstream f("student.txt"); bool found = false;
    while (getline(f, line)) {
        Student s; split(line, s);
        if (s.roll == r) { s.display(); found = true; break; }
    }
    if (!found) cout << "Student not found\n";
}

void update() {
    string r, line; cout << "Enter Roll No to update: "; cin >> r;
    ifstream f("student.txt"); ofstream t("temp.txt"); bool found=false;
    while (getline(f, line)) {
        Student s; split(line, s);
        if (s.roll == r) {
            cout << "New Name: "; cin >> s.name;
            cout << "New Age: "; cin >> s.age;
            t << s.roll << "," << s.name << "," << s.age << "\n";
            found = true;
        } else t << line << "\n";
    }
    f.close(); t.close(); remove("student.txt"); rename("temp.txt","student.txt");
    if (!found) cout << "Student not found\n";
}

void del() {
    string r, line; cout << "Enter Roll No to delete: "; cin >> r;
    ifstream f("student.txt"); ofstream t("temp.txt"); bool found=false;
    while (getline(f, line)) {
        Student s; split(line, s);
        if (s.roll == r) found = true;
        else t << line << "\n";
    }
    f.close(); t.close(); remove("student.txt"); rename("temp.txt","student.txt");
    if (!found) cout << "Student not found\n";
}

int main() {
    int ch;
    do {
        cout << "\n1.Display 2.Search 3.Update 4.Delete 5.Exit\nChoice: "; cin >> ch;
        if(ch==1) displayAll();
        else if(ch==2) search();
        else if(ch==3) update();
        else if(ch==4) del();
    } while(ch!=5);
    return 0;
}
