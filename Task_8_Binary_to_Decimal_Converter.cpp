#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    cout << "Binary to Decimal Converter" << endl;

    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}
