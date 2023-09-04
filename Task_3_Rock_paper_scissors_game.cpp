#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Choose your move: 1 (Rock), 2 (Paper), or 3 (Scissors)" << endl;

    int userChoice;
    cin >> userChoice;

    int computerChoice = rand() % 3 + 1;  // Generate a random number between 1 and 3 for computer's choice

    cout << "Computer chose: " << computerChoice << endl;

    if (userChoice < 1 || userChoice > 3) {
        cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
    } else if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "Congratulations! You win!" << endl;
    } else {
        cout << "Sorry, the computer wins." << endl;
    }

    return 0;
}
