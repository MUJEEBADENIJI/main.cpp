#include <iostream>
#include <string>
#include <ctime> // Include for random seed

using namespace std;

int main() {
    string word_array[] = {"shotgun", "holymolly", "snoopdog", "hotguns", "snoopthug"};
    int tries = 0;
    int guesses_left = 5;
    int level = 0; // Initialize level to track word progress
    int total_words = sizeof(word_array) / sizeof(word_array[0]); // Calculate total words
    string shuffle = "othsung"; // This might need to be generated from the chosen word

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(NULL)));

    while (level < total_words) { // Modify loop condition to check word progress
        cout << "Hello guys" << endl;
        cout << "Welcome to my guess the word game" << endl;
        cout << "Your word is: " << shuffle << endl;
        cout << "Guess the word:" << endl;

        string user_guess; // Change userguess to string type for word input
        cin >> user_guess;

        // Comparing the input word with the randomly chosen word from the array
        if (user_guess == word_array[level]) {
            cout << "That's correct!" << endl;
            level++;
        } else {
            tries--;
            cout << "Wrong guess, try again!\n" << endl;
        }

        if (tries <= 0) {
            cout << "You ran out of guesses. The correct answer was: " << word_array[level] << endl;
            char play_again;
            cout << "Would you like to play again? (Y/N)";
            cin >> play_again;
            if (play_again == 'Y' || play_again == 'y') {
                cout << "Starting a new game! Are you ready?\n" << endl;
                level = 0; // Reset the level if the user wants to play again
            } else {
                cout << "Thanks for playing." << endl;
                break;
            }
        }
    }

    if (level == total_words) {
        cout << "Congratulations! You've guessed all the words in the list!" << endl;
        char play_again;
        cout << "Would you like to play again? (Y/N)";
        cin >> play_again;
        if (play_again == 'Y' || play_again == 'y') {
            cout << "Starting a new game! Are you ready?\n" << endl;
            level = 0; // Reset the level if the user wants to play again
            // Add code to shuffle words again or reset any necessary variables
        } else {
            cout << "Thanks for playing." << endl;
        }
    }

    return 0;
}
```
