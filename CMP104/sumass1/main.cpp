#include <iostream>
using namespace std;

int main() {

    int triangleHeight = 0;

    cout << "enter desired triangle height\n> ";
    cin >> triangleHeight;
    while (triangleHeight <= 0) {

        cout << "enter desired triangle height (HEIGHT MUST BE ABOVE ZERO)\n> ";
        cin >> triangleHeight;

    }

    for (int rowIndex = 1; rowIndex <= triangleHeight; rowIndex++) {

        for (int space = 1; space <= triangleHeight - rowIndex; space++) {

            cout << " ";

        }
        for (int star = 1; star <= (2 * rowIndex) - 1; star++) {

            cout << "*";

        }
        cout << endl;
    }

    return 0;

}