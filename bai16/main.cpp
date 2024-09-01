#include <iostream>
#include<math.h>
//16. Write a C++ program to list non-prime numbers from 1 to an upperbound.
//Sample Output:
//Input the upperlimit: 25
//The non-prime numbers are:
//4 6 8 9 10 12 14 15 16 18 20 21 22 24 25
using namespace std;

int main()
{
int ult; // Declaration of variable 'ult' to store the upper limit
    cout << "\n\n List non-prime numbers from 1 to an upperbound:\n"; // Display message on the console
    cout << "----------------------------------------------------\n";
    cout << " Input the upperlimit: "; // Prompt the user to input the upper limit
    cin >> ult; // Read the input value as the upper limit

    cout << " The non-prime numbers are: " << endl; // Display message for non-prime numbers

    // Loop through numbers from 2 to the upper limit to check for non-prime numbers
    for (int num = 2; num <= ult; ++num)
    {
        int mfactor = (int)sqrt(num); // Find the square root of the number and cast it to an integer as the maximum factor to check

        // Loop to check for factors of the current number from 2 to its square root
        for (int fact = 2; fact <= mfactor; ++fact)
        {
            // If the current number is divisible by 'fact', it's not a prime number
            if (num % fact == 0)
            {
                cout << num << " "; // Display the non-prime number
                break; // Break the loop to move to the next number
            }
        }
    }
    cout << endl; // Output a newline
        return 0;
}
