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

    do
    {
    cout << "Make a guess: ";
    cin >> input;

    if(input > answer)
    {
        cout << "Your number is too HIGH!" << endl;
    } else if (input < answer)
    {
        cout << "Your number is too LOW!" << endl;
    }
    } while (input != answer);

    cout << "Huzzah! The answer was " << answer << "!" << endl;

    return 0;
}