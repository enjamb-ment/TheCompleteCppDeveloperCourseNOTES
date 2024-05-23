/* Project - Average of Three
    - Prompt the user for three doubles (num1,num2,num3)
    - Calculate the mean value (average), which is the sum of the numbers, divided by how many numbers are being averaged
        In our case, there are three numbers to be averaged
    - Print the average
*/

#include <iostream>
#include <vector>       //needed for vectors
#include <numeric>      //needed for the accumulate function

using namespace std;

int main()
{
    double num1, num2, num3;
    vector<double> v;

    cout << "Please enter a real number" << endl;
    cin >> num1;
    cin.get();
    cout << "Now, enter another real number" << endl;
    cin >> num2;
    cin.get();
    cout << "Now, enter the final real number" << endl;
    cin >> num3;
    cin.get();

    cout << "Average: " << ((num1 + num2 + num3)/3) << endl;

        v.push_back(num1);
        v.push_back(num2);
        v.push_back(num3);

    cout << "Using something fancier: " << accumulate(v.begin(),v.end(), 0.0) / v.size() << endl;

    return 0;
}