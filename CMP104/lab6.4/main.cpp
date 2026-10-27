#include <iostream>
using namespace std;

float fahrenheitToCelsius(const float f) {

    return (f + 32.0) / 1.8;

}

float celsiusToFahrenheit(const float c) {

    return (c * 1.8) + 32.0;

}

int main() {

    float temperature = 0.0f;
    char choice;

    cout << "choose a conversion:\n[F] Celsius to Fahrenheit\n[C] Fahrenheit to Celsius\n> ";
    cin >> choice;

    cout << "enter temperature to convert\n> ";
    cin >> temperature;

    switch (choice) {

        case 'F':
            cout << temperature << "C in Fahrenheit is " << fahrenheitToCelsius(temperature) << "F\n";
            break;

        case 'C':
            cout << temperature << "F in Celsius is " << celsiusToFahrenheit(temperature) << "C\n";
            break;

        default:
            cout << "invalid choice\n";
            break;

    }

    return 0;

}