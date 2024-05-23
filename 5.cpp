/*"Symbolic Constants and Naming Conventions"
    Constants:
    - Literal Constants: numbers, like 100 cannot be changed to 200
    - Symbolic Constants: variables, but with the "const" keyword
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const double MY_PI = 3.14159;   // note with constants, we use CAPITALIZED_SNAKE_CASE (all caps, and using underscores("_") between words)
    int myTaxRate = 4;              // note the camelCase name

    //MY_PI = 3.14159;              // "L value" (left value) is not modifiable because the variable was made a constant.

    const string MY_NAME = "Matt";
    //MY_NAME = "Matt Wilcox";      // demonstrates compile error

    return 0;
}