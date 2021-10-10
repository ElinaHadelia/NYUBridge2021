#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int randomNum, guessedValue, numberOfGuesses;
    int r1=1, r2=100;
    bool guessedCorrectly;

    srand(time(0));
    randomNum = (rand() % 100) + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    while(guessedCorrectly==false) {
        for (numberOfGuesses = 5; numberOfGuesses >= 1; numberOfGuesses -= 1) {

            cout << "Range: [" << r1 << ", " << r2 << "], Number of guesses left: ";
            cout << numberOfGuesses << endl;
            cout << "Your guess: ";
            cin >> guessedValue;

            if (numberOfGuesses > 1) {
                if (randomNum > guessedValue) {
                    cout << "Wrong! My number is bigger." << endl;
                    if (guessedValue > r1)
                        r1 = guessedValue + 1;
                } else if (randomNum < guessedValue) {
                    cout << "Wrong! My number is smaller." << endl;
                    if (guessedValue < r2)
                        r2 = guessedValue - 1;
                } else {
                    guessedCorrectly=true;
                    cout << "Congrats! You guessed my number in " << (5-numberOfGuesses)+1 << " guess(es)." << endl;
                    break;
                }
            }
            else {
                guessedCorrectly=true;
                cout << "Out of guesses! My number is " << randomNum << endl;
                break;
            }
            cout << endl;
        }
    }
    return 0;
}
