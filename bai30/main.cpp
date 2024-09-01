#include <iostream>
//30. Write a program in C++ to display the numbers in reverse order.
//Sample Output:
//Input a number: 12345
//The number in reverse order is : 54321
using namespace std;

int main()
{
    int num, r, sum = 0, t; // Declaration of integer variables: 'num' (input number), 'r' (remainder), 'sum' (stores the reversed number), 't' (temporary variable)

    cout << "\n\n Display the number in reverse order:\n"; // Displaying a message on the console
    cout << "-----------------------------------------\n";
    cout << " Input a number: "; // Asking the user for a number
    cin >> num; // Reading the number from the user

    for (t = num; num != 0; num = num / 10) // Reversing the number using a loop
    {
        r = num % 10; // Getting the rightmost digit of the number
        sum = sum * 10 + r; // Constructing the reversed number by adding digits one by one from the original number
    }

    cout << " The number in reverse order is : " << sum << endl; // Displaying the reversed number

    return 0;
}
