/* Project - Jam of the Month Club
    1. Prompt the user for which package they have:
        Package A - $ 8/month
                  - Includes 2 jams per month
                  - Each additional jam on top of the 2 is $5 each
        Package B - $12/month
                  - Includes 4 jams per month
                  - Each additional jam on top of the 4 is $4 each
        Package C - $15/month
                  - Includes 6 jams per month
                  - Each additional jam on top of the 6 is $3 each

    2. Prompt the user again for how many jams they purchased this month, in total
        Take the number of jams purchased and tell the user their total cost
                  - This depends on the package they own
                  - If they stayed at or lower than the number of jams included in the monthly package, they only owe the monthly fee
                  - If they went over, then they are charged the monthly fee plus the charge for each additional jam @ package rate

    3. (self-imposed bonus) Apply a lottery system so that a random discount is applied.
                  - 50% chance that no discount is applied
                  - 35% chance that a 25% discount is applied
                  - 10% chance that a 50% discount is applied
                  -  4% chance that a 75% discount is applied
                  -  1% chance that the month will be free
*/


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(nullptr));

    char package;
    int jams = 0;
    int discountChance = rand() % 100 + 1;
    int total = 0;

    

    cout << "What package did you get? (A, B, or C): ";
    cin >> package;

    cout << "How many jams did you purchase?: ";
    cin >> jams;

    cout << "Thank you for purchasing " << jams << " jams under Package " << package << endl;
    
    while (total == 0){
        switch (package)                        // honestly, I think this whole switch thing can be replaced with some simple variable definitions
        {                                       //     Price per Jam, Monthly Cap, and Monthly Cost
            case 'A':                           // Selecting the correct path would be a bit harder though... like, a bit... longer if statements
            case 'a':                           // ^^ That's exactly what the example did.  Series of if, if-else statements
                if (jams > 2)                   //     also, the setup for calculating total was if else opposite
                {                               // 
                    total = (jams-2)*5 + 8;
                } else
                {
                    total = 8;
                }
                break;
            case 'B':
            case 'b':
                if (jams > 4)
                {
                    total = (jams-4)*4 + 12;
                }
                else
                {
                    total = 12;
                }            
                break;
            case 'C':
            case 'c':
                if (jams > 6)
                {
                    total = (jams-6)*3 + 15;
                }
                else
                {
                    total = 15;
                }            
                break;
            default:
                cout << "Do you even jam?  Start over and give a valid entry. :P" << endl;
                cout << "What package did you get? (A, B, or C): ";
                cin >> package;

                cout << "How many jams did you purchase?: ";
                cin >> jams;   
        }
    }
    
    cout << "Let's see if you got a discount..." << endl;                     // This bonus thing was preeeeetty cool though :)
        if (discountChance <= 50)                
            {
                cout << "Sorry! Maybe next month. :(" << endl;
            } else if (discountChance <= 85)
            {
                total *= 0.75;
                cout << "25% Off this month!" << endl;
            } else if (discountChance <= 95)
            {
                total *= 0.5;
                cout << "50% Off this month!" << endl;
            } else if (discountChance <= 99)
            {
                total *= 0.25;
                cout << "75% Off this month!" << endl;
            } else
            {
                total *= 0.75;
                cout << "You got a FREE month!" << endl;
            }
                                        
    cout << "Your total for the month is: $" << total << ".  Have a pleasant day.  See you next month." << endl;
}