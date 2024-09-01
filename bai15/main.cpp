#include <iostream>
//Write a C++ program that asks the user to enter positive integers(a whole number greater than zero) in order to process count, maximum, minimum, and average or terminate the process with -1.
//Sample Output:
//Your input is for termination. Here is the result below:
//Number of positive integers is: 4
//The maximum value is: 9
//The minimum value is: 3
//The average is 6.00

using namespace std;

int main()
{
    int main() // Start of the main function
{
    int posnum, ctr = 0, sum = 0; // Declaration of integer variables 'posnum', 'ctr', 'sum' and initialization to 0
    int max = 0; // Initialization of 'max' to 0
    int min = INT_MAX; // Initialization of 'min' to the maximum integer value available in the system
    int terval = -1; // Variable 'terval' initialized with -1 as a termination condition

    // Display a message to input positive integers or -1 to terminate
    cout << "\n\n Input a positive integers to calculate some processes or -1 to terminate:\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << " Input positive integer or " << terval << " to terminate: ";

    // Read input until termination condition is met (-1 is entered)
    while (cin >> posnum && posnum != terval)
    {
        if (posnum > 0) // Check if the input is positive
        {
            ++ctr; // Increment the counter for positive numbers
            sum += posnum; // Calculate sum of positive numbers
            if (max < posnum)
                max = posnum; // Update maximum value if the current input is larger
            if (min > posnum)
                min = posnum; // Update minimum value if the current input is smaller
        }
        else
        {
            // Display an error message for negative inputs or inputs other than -1
            cout << "error: input must be positive! if negative, the value will only be -1! try again..." << endl;
        }
        // Prompt for the next input or termination
        cout << " Input positive integer or " << terval << " to terminate: ";
    }

    // Display the result after termination
    cout << "\n Your input is for termination. Here is the result below: " << endl;
    cout << " Number of positive integers is: " << ctr << endl;
    if (ctr > 0)
	{
        cout << " The maximum value is: " << max << endl;
        cout << " The minimum value is: " << min << endl;
        cout << fixed << setprecision(2); // Set output to fixed precision of 2 decimal places
        cout << " The average is " << (double)sum / ctr << endl; // Calculate and display the average of positive integers
    }
}
    return 0;
}
