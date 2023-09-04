#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time
    int targetNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int guessedNumber;
    int numberOfGuesses = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guessedNumber;
        numberOfGuesses++;

        if (guessedNumber < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guessedNumber > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << targetNumber << " in " << numberOfGuesses << " guesses." << endl;
        }
    } while (guessedNumber != targetNumber);

    return 0;
}
