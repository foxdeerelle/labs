#include <iostream>
using namespace std;

class Quiz {
public:
    int score;
    int totalQuestions;

    void showResult() {
        if (score / totalQuestions >= 50) {
            cout << "pass!\n";
        }
        else {
            cout << "fail!\n";
        }
    }
};

int main() {
    return 0;
}