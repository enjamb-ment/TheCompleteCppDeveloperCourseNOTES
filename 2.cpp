/*"Variable Fun 1, 2, and 3"
The header stuff is all called "skeleton code"

We're going to declare some variables.
semi-colons at the end because they define the code's "statements"
Also note the "camelCase" for variables: myInt, myDouble, stateTaxID, etc.


*/

#include <iostream>
#include <string> // <--- String datatypes are not part of the C++ language; but by adding this library, they can then be used as datatypes.;

using namespace std;

int main()
{               //Create a variable; can be literally anything.  The "int" part is the integer datatype.;
    int myInt;  //This line is called declaration!;
    myInt = 15; //This line is called variable initialization!; "15" here is a literal constant; The "=" is the assignment operator;
    double myDouble = 3.14159; //This line is variable declaration and initialization, you can do them both at the same time.  Double is a non-integer number (decimal).;
    
    
    cout << myInt << endl; //This takes the int variable myInt, and sends it to the console.;
    cout << myDouble << endl; //Same as above, but the double variable myDouble.;

// THIS BEGINS THE SECOND VARIABLE FUN SECTION - Text datatypes

    char myChar = 'a'; //char types are "primitive types"; They take singular letters/values that can be used to build bigger things. Note the single-quotes!;
    string stateTaxID = "This was just an example."; //string is a "class type"; these can contain lots and lots of text, numbers etc. but can't do arithmatic.;
                                                     //and note that without the "using namespace std;" this would require "std::" prior to string.

    cout << myChar << endl;
    cout << stateTaxID << endl; //Same as above, but string variable stateTaxID.;

    cout << "I wanted to say something. " << stateTaxID << endl; //this shows how you can add a string, and insertion operators, and a string variable, to concatenate things.
                                   // ^^^ Note the whitespace in the quotes of the string is taken literally and printed this way.


// THIS BEGINS THE THIRD VARIABLE FUN SECTION - Booleans
    bool isFun = true;
    bool isRaining = false;
    bool isSunny = true;
    bool isWarm = true;

    cout << isFun << endl; //when calling like this, isFun = true, and reports out the integer "1" 
    cout << isRaining << endl; //when calling like this, isRaining = false, and reports out the integer "0" 

    //to get "true" or "false" to show up, we use something from the iostream library "boolalpha";

    cout << boolalpha << isFun << endl; //by using boolalpha at this point, it makes all bools afterward print as "true" or "false" instead of 0/1;
    cout << isRaining << endl;
    cout << isSunny << endl;
    cout << isWarm << endl;

    return 0;
}