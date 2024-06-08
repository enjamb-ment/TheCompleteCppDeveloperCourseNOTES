/* Vector Class; VectorFun
    Vectors can hold elements just like arrays, but vectors' sizes can be expanded!
    There are multiple methods that can be called to manipulate and view the elements.

    VectorPractice Challenge (Line ###)
*/


#include <iostream>
#include <string>
#include <vector>   // need this to use the vector library

using namespace std;

int main()
{
    vector<int> someVec;            // initializes a vector of ints
    vector<string> anotherVec(3);   // initialized a vector of strings with size 3

    someVec.push_back(1);           // Adds an element to the end of the vector : [1]
    someVec.push_back(2);           //                                            [1][2]
    someVec.push_back(3);           //                                            [1][2][3]

    cout << "someVec size: " << someVec.size() << endl;

    anotherVec[0] = "John";
    anotherVec[1] = "Bob";
    anotherVec[2] = "Sally";

    anotherVec.push_back("Shannon"); // vector was resized from 3 to 4 when this was added

    for (int val : someVec)
    {
        cout << val << endl;
    }

    cout << endl;

    for (string name : anotherVec)
    {
        cout << name << endl;
    }

/* Utilizing some Vector Methods:
    .front()
    .back()
    .pop_back()
    .insert(iterator,value)
    .begin()
*/

    cout << "Front and back:" << endl;
    cout << "Front: " << anotherVec.front() << endl;        // reports the value in the first index
    cout << "Back: " << anotherVec.back() << endl;          // reports the value in the last index

    anotherVec.pop_back();                                  // "pops" the last element from the vector; removes "Shannon"
    anotherVec.insert(anotherVec.begin(), "Don");           // inserts an element "Don" at iterator .begin()
                                                            // anotherVec.insert(anotherVec.begin()+2, "Matt") would insert "Matt" into the 3rd spot
    cout << "now, front is " << anotherVec.front() << endl;
    cout << "now, back is " << anotherVec.back() << endl; 

/*
Begin VectorPractice Challenge
    * Create a vector and add 5 names to it
    * Afterwards, insert "John Baugh" as the third element
    * Then remove the last element
    * Then print the elements remaining
*/

    vector<string> names;       // literally the same, except for the names pushed back to the vector

    names.push_back("Emily");
    names.push_back("Rowan");
    names.push_back("Tracy");
    names.push_back("Steven");
    names.push_back("Elijah");

    cout << "Original vector: " << endl;
    for(string name : names)
    {
        cout << name << endl;
    }

    names.insert(names.begin()+2,"John Baugh");

    names.pop_back();

    cout << "Modified vector: " << endl;
    for(string name : names)
    {
        cout << name << endl;
    }

    return 0;
}