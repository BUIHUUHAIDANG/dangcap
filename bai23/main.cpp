#include <iostream>
//23. Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
//Sample Output:
//Input number of terms: 5
//9 99 999 9999 99999
//The sum of the sarise = 111105
using namespace std;

int main()
{
    long int n, i, t = 9; // Declaration of long integer variables 'n' (number of terms), 'i' (loop counter), 't' (initial value of 9)
    int sum = 0; // Declaration of integer variable 'sum' initialized to 0 (to store the sum)

    cout << "\n\n Display the sum of the series [ 9 + 99 + 999 + 9999 ...]\n"; // Displaying a message on the console
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of terms: "; // Prompting the user to input the number of terms
    cin >> n; // Reading the input value as the number of terms

    for (i = 1; i <= n; i++) // Loop to calculate 'n' terms of the series
    {
        sum += t; // Adding 't' (current term) to the sum
        cout << t << "  "; // Displaying the current term of the series
        t = t * 10 + 9; // Generating the next term of the series by multiplying 't' by 10 and adding 9
    }

    cout << "\n The sum of the series = " << sum << endl; // Displaying the sum of the series

    return 0;
}
