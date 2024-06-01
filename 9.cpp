/* Control Statements 
"Control Flow" or "Flow of Control" refers to the order in whichinstructions are executed within aprogram.

Control Statements Intro (Line 43)
    Sequential statements   (sequence statements) - Default
    Selection Statements    (decision statements)
    Repetition statements   (loops)

Selection Control Statements (Line 65)
    3 types: if
             if-else
             switch

Repetition Control Statements (Line 183)
    3 types: while
             do-while
             for (there's also a for loop with more syntactic sugar)
    Loop condition continuation test can be done before (while & for) or after (do while) code execution
    Counter controlled (counter hits a value) or Sentinel Controlled (keeps going until some value or type of value is encountered (e.g. a character))

Continue / Break Statements (Line 273)
    Can feel loosely like the old "GOTO" code, a lot of people avoid using them because of this.  
    GOTO would redirect code in a way that could make it hard to read: "Spaghetti Code"


(Pseudo-) Random Numbers (Line 332)
    Can be used to test program with arbitrary values.  There's a deeper topic regarding random numbers here, but because this isn't cryptography or w/e, this can suffice.
    * Note the inclusion of the <cstdlib> & <ctime> libraries

Little tip: Highlight lines to comment --> ctrl + k --> ctrl + c  will comment everything
            Highlight lines to uncomment --> ctrl + k --> ctrl + u will uncomment everything
*/


#include <iostream>
#include <cstdlib>  // note these libraries are to create random numbers
#include <ctime>    

using namespace std;

int main()
{
    int age;                                 // Sequential statement example - carried out in sequence; follows flow of control
    cout << "Enter your age: ";
    cin >> age; 
    cin.clear();

    cout << age << endl;

    if (age >= 16)                              // Selection statement example - something gets skipped; breaks flow of control
    {
        cout << "You can drive!" << endl;
    } else 
    {
        cout << "You can NOT drive!!" << endl;
    }

    for(int i = 1; i <= age; i++)               // Repetion statement example - breaks flow of control by going back and repeating
    {
        cout << "Happy birthday " << i << endl;
    }


/*
Begin "Selection Fun" Project
*/
    // int age;
    cout << "Welcome to the Pub and Grille!" << endl;
    cout << "Please enter your age";
    cin >> age;
    cin.clear();

    if (age >= 21)                             // if is a "Single selection control statement" . If less than 21, below statement skipped [to else [if]].  If larger, shows statement.
    {                                          // note "21" would be considered a "border case".
        cout << "Here have a beer! :)" << endl;
    } 
    else if (age >= 16)                        // something like "17" will execute this.  
    {                                          // ***The first condition to be satisfied in the series of ifs is the one that gets executed.***
        cout << "Here, have a Coke!" << endl;
        cout << "And, at least you can drive..." << endl;
    }
    else                                     // if-else is a "Double selection control statement"
    {
        cout << "Here, have a Coke!" << endl;
    }

    cout << "Thanks for coming to the Pub and Grille!" << endl;
    
/*
Begin "Grade Fun" Project - uses Switch selection control function
*/
    char grade;

    cout << "Please enter a letter grade: " << endl;
    cin >> grade;
    cin.clear();

    switch (grade)
    {
        case 'A':                                       // breaks are important, the first match gets executed, and without Break, will continue down the list
        case 'a':                                       //  can use that "fall through" behaviour to our advantage; when case 'A' is executed it runs the code below until break;
            cout << "Great job!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good job..." << endl;
            break;
        case 'C':
        case 'c':
            cout << "You can do better. :|" << endl;
            break;
        case 'D':
        case 'd':
            cout << "You're getting close to failing!  Dummy." << endl;
            break;
        case 'F':
        case 'f':
            cout << "Uff da. :(" << endl;
            break;
        default:                                        // default does not need a break statement, and will be executed if nothing else fits. 
            cout << "Not a valid Grade entry. Try again." << endl;
    } // ends switch

/*
Begin "Retired Women" Project - open to interpretation
        Prompt user for age AND gender
        age is int; gender is character
        get qualified for discount if f or F and are 60 or over
        "You qualify for the discount!" or "You do not qualify for the discount!"
*/
    //int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cin.clear();
    cout << "Enter your gender: ";
    cin >> gender;
    cin.clear();

    if (age >= 60)
    {
        switch (gender)
        {
            case 'F':
            case 'f':
                cout << "You qualify for the discount!" << endl;
                break;
            case 'M':
            case 'm':
                cout << "Ope, no discounts for men.  Store policy..." << endl;
                break;
            default:
                cout << "You didn't enter a valid gender identifier (for the purpose of this exercise)." << endl;
        }
    } else
    {
        cout << "Sorry, you're too young for the discount" << endl;
    }

/*  This is the example from the course:
    int age;
    char gender;

    cout << "Please enter your age" << endl;
    cin >> age;

    cout << "Please enter your gender" << endl;
    cin >> gender;

    if ((gender == 'F' || gender == 'f') %% age >= 60)  // shorter version for sure, but fewer outcome opporunities. :P
    {
        cout << "You qualify" << endl;
    } else
    {
       cout << "You don't qualify" << endl; 
    }


*/


/*
Begin Repetition Control Statements - LOOPS
*/

    int count = 0;

    while (count < 10)          // pre-test loop; BEFORE executing code, the "loop continuation condition" determines wether (and for how long) the code will run
    {
        cout << count << endl;
        count++;                // this keeps the while loop from producing an "infinite loop" logic error. (usually the cause of program freezes)
    }

    cout << endl << endl; 
    
    int count2 = 0;             // post-test loop; this is the same as a while loop, except that it will guarantee a run at least once.  e.g. setting count2 = 10 will run once
    do 
    {
        cout << count2 << endl;
        count2++;
    } while (count2 < 10);


    for (int i = 0; i < 10; i++) // puts the declarations, condition tests, and counter variable changes in the header. Opposed to establishing before the loop
    {
        cout << i << endl;
    }

    // "priming read" the set up for going into a loop
    int input;
    cout << "Please enter a non-negative integer to continue, ";
    cout << "or negative if you want to quit" << endl;

    cin >> input;
    cin.clear();

    while (input >= 0)          // this continues unless a negative integer is entered.
    {
        cout << "Please enter a non-negative integer to continue, ";
        cout << "or negative if you want to quit" << endl;

        cin >> input;
        cin.clear();
    }

/*
Begin Project "Sum Fun"
    Create a Priming read, set up a loop to enter non-negative values.  
    Once a negative value is entered, produce the sum of all the numbers.
*/

    int input2;
    int sum;
    cout << "Please enter a non-negative integer to continue, ";
    cout << "or negative if you want to quit. " << endl;
    cout << "The sum of all the numbers will be displayed." << endl;

    cin >> input2;
    cin.clear();

    while (input2 >= 0)
    {
        sum += input2;
        
        cout << "Please enter a non-negative integer to continue, ";
        cout << "or negative if you want to quit" << endl;

        cin >> input2;
        cin.clear();
    }
    
    cout << "The sum of the numbers is: " << sum << endl;

/* This is the example from the course:    (pretty much what I did)
    int sum = 0;
    int input;

    cout << "Enter a non-negative integer to sum, and a negative integer to quit" << endl;
    cin >> input;
    while (input >= 0)
    {
        sum += input;

        cout << "Enter a non-negative integer to sum, and a negative integer to quit" << endl;
        cin >> input;
    }

    cout << "Sum of the values: " << sum << endl;

*/

/*
Begin Continue and Break Statements
*/
    int count3 = 0;

    while (count3 < 10)
    {
        if (count3 == 5)         // demonstrates "Continue statements", which restarts the code block back from the beginning
        {                       // in this case, when 5 is reached, the code doesn't get to the cout, but it starts back at 6.  "5" doesn't get displayed.
            count3++;            // this works in for loops the same way
            continue;
        }
        cout << count << endl;
        count3++;
    }
    cout << endl << endl; 

    for (int j = 0; j < 10; j++)
    {
        if (j == 5)             // demonstrates "Break statement", which ends the code at the break, and exits the code block entirely.
        {                       // in this case, when 5 is reached, the code doesn't continue.  "4" is the last number to be displayed.
            j++;                // this works in while loops the same way
            break;
        }
        cout << j << endl;
    }

/*
Begin Project "Even Only"
    Write a loop to display integers divisible by 2 from 0 to 10, but not including 10
    oops, just realized I didn't have continue;
*/
    int count4 = 0;
    while (count4 < 10)
    {
        if (count4 % 2 == 0)
        {
            cout << count4 << endl;
        }
        count4++;
    }

/* This is the example from the course: (did the opposite of what I did; used Continue to skip reporting out)
    int count = 0;

    while (count < 10)
    {
        if (count % 2 != 0)
        {
            count++;
            continue;
        }
        cout << count << endl;
        count++;
    }


*/

/*
Begin Random Numbers section
    Note "January 1st 1970 at Midnight" - this is the Epoch date.  And the seed number for the random number generator.
        It's the date and time the Unix style computers considered the zero second time.
        e.g. Jan 2st 1970 00:01 == 60 min
*/
    //#include <cstdlib>  //these were added at the top
    //#include <ctime>


    srand(time(nullptr)); // seeding the random number generator by giving a nullptr to time
                          
    int val1 = rand() % 10;         // val1 is >=0 and < 10
    //shift it
    int val2 = rand() % 10 + 1;     // val2 is >=1 and < 11
                                    // rand() generates an arbitrarily large number; modulo scales it to make it manageable
    cout << val1 << endl;
    cout << val2 << endl;

/*
Begin Die Roll Project
    Generate a single die roll from a 6-sided die, have it roll and report results 10 times
*/
    //#include <cstdlib>  //these were added at the top
    //#include <ctime>

    int count5 = 0;
    srand(time(nullptr));

    cout << "Here's a 6 sided die being rolled 10 times:" << endl;
    while (count5 < 10)
    {
        cout << "Roll# " << count5 + 1 << ": ";
        cout << rand() % 6 + 1 << endl;             // modulo# = range that can show up, so % 6 --> anything from "0 to 5"
        count5++;                                   // + 1 = shifted, so instead of "0 to 5", it will show "1 to 6"
    }

    return 0;
}



/*
Again, the three control statement types are Sequential, Selection and Repetion
*/