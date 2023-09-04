#include <iostream>

using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    cout << "Temperature Converter" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;

    int choice;
    cin >> choice;

    double temperature;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << endl;
            break;
        case 2:
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
