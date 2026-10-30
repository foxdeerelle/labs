#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
};

int main() {
    Book houseOfLeaves;

    houseOfLeaves.title = "House of Leaves";
    houseOfLeaves.author = "Mark Z. Danielewski";

    cout << houseOfLeaves.title << " by " << houseOfLeaves.author << endl;

    return 0;
}