#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {

    int maxVal = a;
    if (b > maxVal) {maxVal = b;}
    if (c > maxVal) {maxVal = c;}

    return maxVal;

}

int main() {

    int num1, num2, num3;
    cout << "enter number 1\n> ";
    cin >> num1;
    cout << "enter number 2\n> ";
    cin >> num2;
    cout << "enter number 3\n> ";
    cin >> num3;

    cout << "biggest number is " << findMax(num1, num2, num3) << endl;

    return 0;

}