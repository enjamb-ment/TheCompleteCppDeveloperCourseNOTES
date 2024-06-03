/* Project - Odds and Evens
    * Loop through integers 0 to 50 (inclusive)
    * Print out whether each integer is odd or even, such as:
    * "_____ is odd." or "_____ is even."
     
    I did some extra credit on this one.  
        Demonstrated all the different loop options. (for, while, do while)
        Included a random number to test against
        Included an input option
        Built a class to store a callable function to test those numbers
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class anyNumber {
public:
    void oddOrEven(int num){
        if (num % 2 == 0)
        {
            cout << num << " is even." << endl;
        } 
        else
        {
            cout << num << " is odd." << endl;
        }
    }
};

int main()
{
    srand(time(nullptr));
    int rando = rand() % 51;

    int input = 0;

// for loop checker
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is even." << endl;
        } 
        else
        {
            cout << i << " is odd." << endl;
        }
    }

// while loop checker
    int counter = 0;
    while (counter <= 50) 
    {
        if (counter % 2 == 0)
        {
            cout << counter << " is even." << endl;
        } 
        else
        {
            cout << counter << " is odd." << endl;
        }
        counter++;
    }

// do-while loop checker
    int counter2 = 0;
    do 
    {
        if (counter2 % 2 == 0)
        {
            cout << counter2 << " is even." << endl;
        } 
        else
        {
            cout << counter2 << " is odd." << endl;
        }
        counter2++;
    } while (counter2 <= 50);
    
// for giggles, made a class, built a void function for the class.  Also set up a random number and an input to run through the class function.
    anyNumber test1;
    anyNumber test2;

    cout << "Here's a random number." << endl;
    test1.oddOrEven(rando);

    cout << "Input an integer.  Any integer." << endl;
    cin >> input;

    test2.oddOrEven(input);

// lastly, using a for loop with the class function
    anyNumber test3;
    for (int j = 0; j <= 50; j++)
    {
        test3.oddOrEven(j);
    }
}