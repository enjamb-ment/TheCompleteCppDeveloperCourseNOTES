#include <iostream>
//using namespace std; // <-- add this, and none of the std:: below need to be explicit!

int main() // The "entry point"; included in every c++ code;
{
    //std = "standard namespace"; 
    //scope resolution operator "::"; 
    //cout is "character/console output"; cout comes from the iostream library (other things are also included);
    //The "<<" shows the flow of data (data goes to the console); these are called insertion operation and output operator;
    //"Hello World" is a string, indicated by the double-quotes; 
    //endl = "endline"; can also use "\n" within the string;
    //just about all lines end with semicolons ";";
    
    std::cout <<  "Hello Matt!" << std::endl;

    return 0; // signal that nothing went wrong
}