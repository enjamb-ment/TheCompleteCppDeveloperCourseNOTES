/*Project - MadLibs Clone
    Utilize string variables and inputs to store into those variables, then print the variables into a static story.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string adjective1, adjective2, adjective3, occupation1, occupation2, placeName, girlsName, boysName, mansName, clothing, hobby;

    cout << "Please enter an adjective" << endl;
    getline(cin, adjective1);
    cout << "Please enter a girl's name" << endl;
    getline(cin, girlsName);
    cout << "Please enter another adjective" << endl;
    getline(cin, adjective2);
    cout << "Please enter an occupation" << endl;
    getline(cin, occupation1);
    cout << "Please enter the name of a place" << endl;
    getline(cin, placeName);
    cout << "Please enter the name of an item of clothing (plural)" << endl;
    getline(cin, clothing);
    cout << "Please enter a hobby" << endl;
    getline(cin, hobby);
    cout << "Please enter another adjective" << endl;
    getline(cin, adjective3);
    cout << "Please enter another occupation" << endl;
    getline(cin, occupation2);
    cout << "Please enter a boy's name" << endl;
    getline(cin, boysName);
    cout << "Please enter a man's name" << endl;
    getline(cin, mansName);

    cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 << " " << occupation1 
         << " in the Kingdom of " << placeName << ". She loved to wear " << clothing << " and enjoyed " << hobby << ". \nShe wanted to marry the " 
         << adjective3 << " " << occupation2 << " named " << boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;

    return 0;
}

/*
Example:
There once was a itchy girl named Beatrice who was a hairy Fart Collector in the Kingdom of Olive Garden. She loved to wear pants and enjoyed collecting simple treasures.
She wanted to marry the short Fart Distributer named Guy but her father, King Bob forbid her from seeing him.
*/