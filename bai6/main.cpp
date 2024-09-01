#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int num1, num2; // Declaration of integer variables 'num1', 'num2'
    int fnd = 0, ctr = 0; // Initialization of integer variables 'fnd' and 'ctr' to zero

    cout << "\n\n Find prime number within a range:\n"; // Display a message indicating the purpose
	cout << "--------------------------------------\n"; // Display a separator line
	cout << " Input number for starting range: "; // Prompting the user to input the starting range
	cin >> num1; // Reading the starting range entered by the user
	cout << " Input number for ending range: "; // Prompting the user to input the ending range
	cin >> num2; // Reading the ending range entered by the user

	cout << "\n The prime numbers between " << num1 << " and " << num2 << " are:" << endl; // Display a message indicating the range of numbers
    for (int i = num1; i <= num2; i++) // Loop through each number within the given range
    {
        for (int j = 2; j <= sqrt(i); j++) // Loop to check for prime numbers
        {
            if (i % j == 0) // Checking if the number is divisible by 'j'
                ctr++; // Incrementing 'ctr' if 'i' is divisible by 'j'
        }
        if (ctr == 0 && i != 1) // Checking if 'ctr' is zero and 'i' is not equal to 1 (prime numbers should not be 1)
        {
            fnd++; // Incrementing 'fnd' as a prime number is found
            cout << i << " "; // Display the prime number
        }
        ctr = 0; // Resetting 'ctr' to zero for the next iteration
    }
    cout << "\n\n The total number of prime numbers between " << num1 << " to " << num2 << " is: " << fnd << endl; // Display the total count of prime numbers found
    return 0;
}
