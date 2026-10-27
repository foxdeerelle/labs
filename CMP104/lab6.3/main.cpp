#include <iostream>
using namespace std;

string generateCodeName(string input) {

    string result = "Agent-";
    string temp = input;

    reverse(temp.begin(), temp.end());

    result += temp;

    return result;

}

int main() {

    string name;
    cout << "enter your name\n> ";
    cin >> name;
    cout << "your codename is: " << generateCodeName(name) << endl;

    return 0;

}