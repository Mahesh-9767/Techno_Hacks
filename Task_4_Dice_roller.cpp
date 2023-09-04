#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with the current time

    cout << "Dice Roller" << endl;
    cout << "Press Enter to roll the dice..." << endl;
    cin.get();  // Wait for user to press Enter

    int die1 = rand() % 6 + 1;  // Roll the first die (generate a random number between 1 and 6)
    int die2 = rand() % 6 + 1;  // Roll the second die

    cout << "You rolled: " << die1 << " and " << die2 << endl;

    return 0;
}
