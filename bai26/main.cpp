#include <iostream>
//26. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
//Sample Output:
//Input number of terms: 5
//1 + 11 + 111 + 1111 + 11111
//The sum of the series is: 12345
using namespace std;

int main()
{
     int n, i, sum = 0; // Declaration of integer variables 'n' (number of terms), 'i' (loop counter), 'sum' (to store the sum)
    int t = 1; // Initializing variable 't' to 1

    cout << "\n\n Display the sum of the series 1 + 11 + 111 + 1111 + .. n terms:\n"; // Displaying a message on the console
    cout << "-------------------------------------------------------------------\n";
    cout << " Input number of terms: "; // Prompting the user to input the number of terms
    cin >> n; // Reading the input value as the number of terms

    for (i = 1; i <= n; i++) // Loop to generate the series and calculate the sum
    {
        cout << t << " "; // Displaying the current term of the series
        if (i < n) // Checking if it's not the last term to print '+'
        {
            cout << "+ "; // Displaying '+' to separate terms if it's not the last term
        }
        sum = sum + t; // Adding the current term to the sum
        t = (t * 10) + 1; // Generating the next term of the series by appending '1' to the current term
    }

    cout << "\n The sum of the series is: " << sum << endl; // Displaying the final sum of the series

    return 0;
}
