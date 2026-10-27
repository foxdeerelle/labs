#include <iostream>
using namespace std;

int add2(int a, int b) { return a + b; }

int main() {

    int num1, num2;

    cout << "enter number 1\n> ";
    cin >> num1;

    cout << "enter number 2\n> ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << add2(num1, num2);

    return 0;

}