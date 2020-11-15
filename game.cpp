#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <time.h>

using namespace std;

int main()
{
    // Set the starting variables
    srand(time(NULL));
    
    int guess = 0;
    int num_guess = 1;
    int set_target = 100;

    cout << "What is the maximum? ";
    cin >> set_target;

    int target = rand() % set_target + 1;

    cout << "\nPlease enter a number between 1 and " << set_target << "\n";

    // The loop should run until the user guesses the correct number
    while (target != guess)
    {

        // Prompts the user for a number between 1 and 100, and takes the input
        cout << "Guess number " << num_guess << ": ";
        cin >> guess;
        // If the guess is less than the random number
        if (guess < target)
        {
            cout << "Too low!\n";
            num_guess += 1;
            // Tells the user if their guess was far lower than the target
            if (guess < target / 2)
            {
                cout << "Way too low!\n";
            }
        }
        // If the number is higher than the random number
        else if (guess > target)
        {
            cout << "Too high!\n";
            num_guess += 1;
            // Tells the user if their guess was far higher than the target
            if (guess > target * 2)
            {
                cout << "Way too high!\n";
            }
            
        }
        // Ends the loop when the correct number is guessed
        else
        {
            cout << "You guessed it! The number was " << target << "!\n";
            cout << "It took you " << num_guess << " tries!\n";
            return 0;
        }
    
    }
    
}
