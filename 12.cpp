/* Project - Guess the Number 
    The computer will randomly select an integer between 1 and 100 (inclusive)
        - The user will try to guess the computer's number
        - You must also count the number of guesses

    Four possibilities:
        - If the user guess correctly, print "Congratulations! You guessed the number in <#guesses>! Thanks for playing" and the program exits
        - If the user selects a number too low, print out "Your guess is too low!"
        - If the user selects a number too high, print out "Your guess is too high!"
        - If the user selects a number lower than 1 or higher than 100, tell the user it was a wasted guess and to pick between 1 and 100
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));
    int answer = rand() % 100 + 1; //number between 1 and 100 inclusive
    int input = 0;
    int count = 0;

    do
    {
    cout << "Make a guess from 1 to 100: ";
    cin >> input;

    if (input < 1 || input > 100)
    {
        cout << "That input wasn't valid..." << endl;
    } else if (input > answer)
    {
        cout << "Your number is too HIGH!" << endl;
    } else if (input < answer)
    {
        cout << "Your number is too LOW!" << endl;
    } 
    cin.clear();
    count++;
    } while (input != answer);

    cout << "Huzzah! The answer was " << answer << "!" << endl;
    cout << "And it only took you... " << count << " tries!!" << endl;

    if (count == 1)
    {
        cout << "NO. FUDGING. WAY." << endl;
    } else if (count < 5)
    {
        cout << "That's pretty awesome." << endl;
    } else if (count < 10)
    {
        cout << "Not bad." << endl;
    } else
    {
        cout << "Uff dah." << endl;
    }

    return 0;
}


/* Example from Book uses a variable flag for loop continuation
int main() {
    bool guessedNumber = false;     // this bit here keep the loop going until the value is true
    int guessCount = 0;
    int ourGuess;
    int computerNumber = rand() % 100 + 1; // guess you don't need a new seed every time?

    while (!guessedNumber)
    {
        cout << "Enter guess" << endl;
        cin >> ourGuess;

        if (ourGuess > 100 || ourGuess < 1)
        {
            cout << "wasted guess" << endl;
            guessCount++;
            countinue; //sends back to top instead of going on below
        }

        if (ourGuess == computerGuess)
        {
            cout << "yay, win." << guessCount << endl;
            guessedNumber = true;

        } else if (ourGuess > computerNumber)
        {
            cout << "guess too high" << endl;
        } else if (ourGuess < computerNumber)
        {
            cout << "guess too low" << endl;
        }
        guessCount++;
    } // end while

}


*/