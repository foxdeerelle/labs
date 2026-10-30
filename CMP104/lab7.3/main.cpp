#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int grade;
    void display() const {
        cout << name << ", Grade: " << grade << endl;
    }
};

int main() {
    Student a, b;

    a.name = "Alice"; a.grade = 85;
    b.name = "Bob"; b.grade = 92;

    cout << "Student 1: ";
    a.display();
    cout << "Student 2: ";
    b.display();

    if (a.grade > b.grade) {
        cout << a.name << " has the higher grade.";
    }
    else {
        cout << b.name << " has the higher grade.";
    }

    return 0;
}