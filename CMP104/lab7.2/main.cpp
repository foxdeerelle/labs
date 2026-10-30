#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    void printInfo() const {
        cout << "book title: " << title << endl;
        cout << "book author: " << author << endl;
    }
};

int main() {
    Book houseOfLeaves;

    houseOfLeaves.title = "House of Leaves";
    houseOfLeaves.author = "Mark Z. Danielewski";

    houseOfLeaves.printInfo();

    return 0;
}