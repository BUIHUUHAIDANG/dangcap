#include <iostream>
//48. Write a program in C++ to display the pyramid pattern using the alphabet.
//Sample Output:
// Input the number of Letters (less than 26) in the Pyramid: 5
//        A
//      A B A
//    A B C B A
//  A B C D C B A
//A B C D E D C B A
using namespace std;

int main()
{int i, j; // Declare integer variables i and j
    char alph = 'A'; // Declare and initialize a character variable alph with 'A'
    int n, blk; // Declare integer variables n and blk
    int ctr = 1; // Initialize an integer variable ctr with value 1

    // Display message asking for input
    cout << "\n\n Display the pattern like pyramid using the alphabet:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n; // Read input for the number of letters from the user

    for (i = 1; i <= n; i++) // Loop for the number of rows
    {
        for (blk = 1; blk <= n - i; blk++) // Loop to print spaces before the characters
            cout << "  "; // Print two spaces for formatting

        for (j = 0; j <= (ctr / 2); j++) // Loop to print characters in ascending order
        {
            cout << alph++ << " "; // Print the character and increment the value of alph
        }

        alph = alph - 2; // Decrement alph by 2 to get the previous character
        for (j = 0; j > (ctr / 2); j++) // Loop to print characters in descending order
        {
            cout << alph-- << " "; // Print the character and decrement the value of alph
        }

        ctr = ctr + 2; // Increment ctr by 2 for the next row
        alph = 'A'; // Reset alph to 'A' for the next row
        cout << endl; // Move to the next line after each row is printed
    }

    return 0;
}
