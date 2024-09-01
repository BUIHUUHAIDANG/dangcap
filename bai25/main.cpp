#include <iostream>
#include<math.h>
//25. Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
//Sample Output:
//Input the value of x: 2
//Input number of terms: 5
//The values of series:
//2
//-8
//32
//-128
//512
//The sum of the series upto 5 term is: 410
using namespace std;

int main()
{
    float x, sum, ctr; // Declaration of float variables 'x' (input value), 'sum' (to store the sum), 'ctr' (for intermediate calculation)
    int i, n, m, mm, nn = 0; // Declaration of integer variables 'i' (loop counter), 'n' (number of terms), 'm', 'mm', 'nn' (intermediate values)

    cout << "\n\n Display the sum of the series [ x - x^3 + x^5 + ......]\n"; // Displaying a message on the console
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: "; // Prompting the user to input the value of x
    cin >> x; // Reading the input value as 'x'

    cout << " Input number of terms: "; // Prompting the user to input the number of terms
    cin >> n; // Reading the input value as the number of terms

    sum = x; // Initializing 'sum' with the first term (x)
    m = -1; // Initializing 'm' as -1 to alternate the signs of terms in the series

    cout << "The values of series:" << endl; // Displaying a message

    cout << sum << endl; // Displaying the first term of the series (x)

    for (i = 1; i < n; i++) // Loop to calculate 'n' terms of the series
    {
        ctr = (2 * i + 1); // Calculating the power for each term of the series (x^ctr)
        mm = pow(x, ctr); // Calculating x raised to the power 'ctr'
        nn = mm * m; // Calculating the term (x^ctr) with alternate signs
        cout << nn << endl; // Displaying the calculated term of the series
        sum = sum + nn; // Adding the term to the sum
        m = m * (-1); // Changing the sign for the next term
    }

    cout << "\n The sum of the series upto " << n << " term is: " << sum << endl; // Displaying the sum of the series

    return 0;
}
