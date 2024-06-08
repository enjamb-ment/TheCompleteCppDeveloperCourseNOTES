/* Built-In Arrays; ArrayFun; MoreArrayFun
    Originally from C.
    Array is a simple data structure containing homogenous elements; note they start at zero, called "zero-indexed", are fixed size
        int anArray[5];     //size of 5; CANNOT be changed
        anArray[0] = 12;
        anArray[1] = 5;     //index:      0   1  2   3   4
        anArray[2] = 32;    //anArray == [12][5][32][18][2]
        anArray[3] = 18;
        anArray[4] = 2;

    MoreArrayFun (Line 64)

   Array Class
    The Array Class is similar to the built-in arrays, but is Object-Oriented (more sophisticated)
    STL (Standard Template Library)
        - Contains lots of things, including container classes
        - Arrays are "Sequence Containers"
        = Vectors (next class) are also "Sequence Containers"

    ArrayFunTest (Line 100)

    TwiceNumbers challenge (Line 124)
*/


#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 5;   // note array sizes are constants, so you can declare a variable constant (if you want)

    int myArray[ARRAY_SIZE];    // initialize an array of ints with size ARRAY_SIZE
    string names[4]{"Bob","Sally","John","Ed"}; // initialize an array of strings with size 4, and assigns elements

    myArray[0] = 15;            // assigning values to myArray elements
    myArray[1] = 20;
    myArray[2] = 22;
    myArray[3] = 13;
    myArray[4] = 6;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }

    for (int i = 0; i < 4; i++)     // "off-by-one" error can happen if we accidentally looped 5 times (outside of the range of the array )
    {
        cout << names[i] << endl;
    }


    //We can also do this "Range-based loop" which focuses on elements:
    for (string name : names)   // variation on the for loop; think of ":" as "in".   Can be used with references(&).  Topic to be covered later... 
//  for (auto name : names)     // uses C++ keyword "auto" to infer the type.  C++ will figure it out on its own.
    {
        cout << name << endl;
    }


/*Begin MoreArrayFun challenge
    * Use a regular for loop to populate an array
        - Array size should be 10
        - Populate with the numbers 1 through 10
        - Don't cheat and do it manually - use the loop :)
    * With a separate range-based for loop, print out the values of the array that was just populated
*/

    const int sizeOfArray = 10;
    int intArray[10] {1,2,3,4,5,6,7,8,9,10}; // cheats
    int loopIntArray[sizeOfArray];

    for (int i = 0; i < 10; i++)
    {
        loopIntArray[i] = i+1;      // Did exactly what book did.  Noice.
    }

    for (int i = 0; i < 10; i++)
    {
        cout << loopIntArray[i] << ", ";
    }

    cout << "\nUsing the fancy for loop: ";
    for (auto num : loopIntArray)
    {
        cout << num << ",";
    }

    cout << "\nCheatcode: ";
    for (int i = 0; i < 10; i++)
    {
        cout << intArray[i] << ", ";
    }


/*
Begin the ArrayFunTest project
*/
// #include <array>  //already used up top, but this needs to be added to use the Array Class

    array<int,5> myIntArray{};    // syntax: this is from a template, so the angle braces "<>" are template parameters: for Array Class: <type,capacity>
  //array<int,5> myIntArray{0,0,0,0,0}; // initializes with zeros like: [0][0][0][0][0].  Above, the empty {} will fill everything with zero too.
  //array<int,5> myIntArray{1,2};       // this will initialize like:   [1][2][0][0][0]

  //array<int,5> myIntArray{};   // once initialized with all zeroes, values can be assigned to overwrite them.
    myIntArray[0] = 2;
    myIntArray[1] = 5;
    myIntArray[2] = 10;
    myIntArray[3] = 1;
    myIntArray[4] = 17;

    for(int a : myIntArray)
    {
        cout << a << endl;
    }
    
    // the ".size()" is using "dot notation" to call a built-in member function to provide the container size.
    cout << "The size of the array is: " << myIntArray.size() << endl;  

/*
Begin TwiceNumbers challenge
    * Create an integer array object of size 10
    * User a regular for loop to initialize the array elements to multiples of 2 for the integers 0 through 9
      - Do NOT manually store the numbers
    * Hint: Consider using the loop control variable to your advantage
    * Also, use the size() member function (method) to your advantage when using the regular for loop
    * Use a range-based for loop for printing out the elements you stored
*/

    array<int,10> twiceNumbers{};

    for (int i = 0; i < twiceNumbers.size(); i++)       // yep.
    {
        twiceNumbers[i] = i * 2;                        // yep!
    }

    for (int nums : twiceNumbers)                      // this is the "range-based" for loop
    {
        cout << nums << ", ";
    }

    cout << "Size: " << twiceNumbers.size() << endl;




    return 0;
}