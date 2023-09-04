#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string generateRandomPassword(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    const int charsetLength = charset.length();

    srand(time(0));  // Seed the random number generator with the current time

    string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charsetLength;
        password += charset[randomIndex];
    }

    return password;
}

int main() {
    cout << "Random Password Generator" << endl;

    int passwordLength;
    cout << "Enter the desired password length: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Invalid password length." << endl;
        return 1;
    }

    string randomPassword = generateRandomPassword(passwordLength);
    cout << "Generated password: " << randomPassword << endl;

    return 0;
}
