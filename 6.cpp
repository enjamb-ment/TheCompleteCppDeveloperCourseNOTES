/* User Input
    Hardcoded data - we wrote values directly to source code.
        we want to take data from outside the code
    Standard Input Device - keyboard, typically
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string fullName1;

    cout << "Please enter your name" << endl;
    getline(cin, fullName1);                     //use getline with strings that contain spaces, 
                                                //because whitespace (spacebar) is considered a terminator, and won't be captured in the input.
                                                //two arguments to getline, "cin" is the input, "fullName" is the variable the input stores to.

    cout << "Please enter your age" << endl;
    cin >> age;                                 //once user hits enter after a value, it will store the input into the variable

    cout << age << endl;
    cin.ignore();                               //going from the last cin to the next makes it skip the getline input request for fullName2 later... This clears that (I think).

/* Begin "Percentages Project":
    - Create a fullName string variable
    - Create a location string variable
    - Create an integer named initialScore

    - Prompt the user for their full name, which should be stored in fullName
    - Prompt the user for their city, state/province, and country, and store that in the location variable
    - Ask the user for an integer 0 to 100, to be stored in initialScore
    
    - At the end, print out the following:
        - "Hello, " followed by fullName
        - "We heard you are from " location
        - "Your original score is " initialScore, but with five points added, your score is <<print out initial score plus 5 points>>
*/

    string fullName2;
    string location;
    int initialScore;

    cout << "Please enter an integer from 0 to 100." << endl;
    cin >> initialScore;    //the getline() function consumes the newline character.  cin does NOT consume the newline character after hitting enter.  
                            //  so, the newline from enter passes into the "cin stream", and the next input sees it, and thinks it's done.
    cin.get();              //this consumes the newline character.  I guess this method and cin.ignore() both seem to work.

    cout << "Please enter your full name." << endl;
    getline(cin, fullName2);
    cout << "Please enter your city, state/province, and country." << endl;
    getline(cin, location);

    cout << "Hello, " << fullName2 << ". We heard you are from " << location << endl <<     //note there isn't a ";" to end the line of code here
        "Your original score is: " << initialScore << ", but with five points added, your score is: " << (initialScore + 5) << endl;
             // the compiler doesn't care about whitespace when compiling (I think), so to better organize, this is okay!

    return 0;
}