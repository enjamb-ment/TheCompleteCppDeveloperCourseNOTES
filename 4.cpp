/*"Arithmetic Operators, Relational Operators, Logical Operators"
    ====Arithmetic Operators==== (starts on line 39)
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulus ("X modulo Y" provides the REMAINDER of a division)

    ====Relational Operators==== (starts on line 91)
    For manipulating Boolean (bool) - True & False
    >   greater than
    >=  greater than or equal to
    <   less than
    <=  less than or equal to
    ==  equal to (equality.  NOT assignment "=")
    !=  not equal to (equality)

    ====Logical Operators==== (starts on line 117)
    Truth Tables:
    Logical AND                     Logical OR                      Logical NOT
    p       q       p&&q            p       q      p||q             p       !p      //where p & q are boolean values (either true, false, or arguments that provide true or false)
    TRUE    TRUE    TRUE            TRUE    TRUE    TRUE            TRUE    FALSE
    TRUE    FALSE   FALSE           TRUE    FALSE   TRUE            FALSE   TRUE
    FALSE   TRUE    FALSE           FALSE   TRUE    TRUE            
    FALSE   FALSE   FALSE           FALSE   FALSE   FALSE

    unary (not), binary (and; or), ternary operators: describe how many operatorands are required for the operator (1, 2, and 3, respectively)
*/

#include <iostream>
#include <iomanip> //this is added to help display true and false.  Maybe necessary with boolalpha...
#include <cmath>

using namespace std;

int main()
{
/*
Begin the Arithmetic Operators section
*/
    int a = 10;
    int b = 3;

    int sum = a + b; // Operator: +; and Operands: a & b, the variables being operated on
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
    int result = 10;
    int myInt = 5;

    result += 15;    //compound operator, takes whatever was there originally (10), does the operation on the right and stores it back into the variable on the left
                    //    e.g. result += 15 is the same as result = result + 15
                    // "syntactic sugar", not necessary, but make the job easier

    cout << "myInt = " << myInt << endl;
    myInt++;        //++myInt; does the same thing, but sometimes has different uses..?
                    // myInt = myInt + 1;

    cout << "sum = " << sum << endl;
    cout << "difference = " << difference << endl;  
    cout << "product = " << product << endl;
    cout << "quotient = " << quotient << endl;      // when this is run, we established quotient as int; so it gives a result of 3, instead of a (double) value of 3.33
    cout << "remainder = " << remainder << endl;
    cout << "result = " << result << endl;
    cout << "myInt = " << myInt << ", after myInt++" << endl;

    myInt--;        // --myInt; or myInt = myInt - 1;
    cout << "myInt= " << myInt << ", after myInt--" << endl;


    /*  ChangeIsNice exercise:
        Declare a variable myNum, set it to 10

        Increase myNum's original value by 5 using arithmetic operators
        Double myNum's new value three times on three different lines
        Print myNum's final result
    */

    cout << "Beginning the ChangeIsNice exercise:" << endl;

    int myNum = 10;
    myNum += 5;      // original myNum add by 5 and stored back to myNum
    myNum *= 2;      // next three do original myNum*2 and stores it back
    myNum *= 2;
    myNum *= 2;
   
    cout << "myNum = " << myNum << endl; // result should be 120.  And it so it was.

/*
Begin the Relational Operators section
*/

   cout << boolalpha;   //This will show "true and false" instead of "1 and 0"; turn this off with noboolalpha;

    a = 15; //note the variables below were already defined.  Redifining them will produce an error.  We are reassigning them here.
    b = 20;
    bool areEqual = a == b;

    cout << (a < b) << endl;    // operands just need to be comparable on either side.  This will show "true"

    cout << areEqual << endl;   //this will show "false"

    /*  Age variable test exercise:
    Declare a variable age, 
    
    Set age to my actual age

    Print the comparison of my age with 21:
        age >= 21    
    */

    int age = 34; // when this is greater than or equal to, the result below will be true.  If it's less than, the result will be false.
    cout << "Age >= 21? " << (age >= 21) << endl;

/*
Begin the Logical Operators section
*/

    bool isRaining = true;      // can change these two values to explore the rest of the Truth table; 4 total possibilities
    bool isWarm = true;         // [true, true], [true, false], [false, true], [false, false]

    cout << "And: " << (isRaining && isWarm) << endl;
    cout << "Or: " << (isRaining || isWarm) << endl;
    cout << "Not: " << (!isRaining) << endl;  //"not is raining is true" <-- that's my kind of language

    return 0;
}