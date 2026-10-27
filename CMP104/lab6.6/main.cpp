#include <iostream>
using namespace std;

void swap(int &a, int &b) {

    int temp = a;
    a = b;
    b = temp;

}

int main() {

    int num1, num2;
    cout << "enter num 1\n> ";
    cin >> num1;
    cout << "enter num 2\n> ";
    cin >> num2;

    cout << "before swap; a = " << num1 << ", b = " << num2 << endl;
    swap(num1, num2);
    cout << "after swap; a = " << num1 << ", b = " << num2 << endl;

    return 0;

}