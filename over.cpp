
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    float marks;

    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n student record " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}