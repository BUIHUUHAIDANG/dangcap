#include <iostream>

using namespace std;

int main()
{
    int row, c = 1, blk, i, j; // Declare integer variables row, c, blk, i, and j

    // Display message asking for input
    cout << "\n\n Display the Pascal's triangle like right angle triangle:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row; // Read input for the number of rows from the user

    for (i = 0; i < row; i++) // Loop for the number of rows
    {
        for (j = 0; j <= i; j++) // Loop to calculate and print the numbers in each row
        {
            if (j == 0 || i == 0) // Check if it's the first column or the first row
                c = 1; // Assign 1 to 'c' if it's the first column or the first row
            else
                c = c * (i - j + 1) / j; // Calculate the next number using the previous value

            cout << c << "   "; // Print the calculated number followed by spaces for formatting
        }

        cout << endl; // Move to the next line after each row is printed
    }
    return 0;
}
