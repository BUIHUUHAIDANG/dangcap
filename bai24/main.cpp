#include <iostream>
#include<math.h>
//24. Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
//Sample Output:
//Input the value of x: 3
//Input number of terms: 5
//The sum is : 16.375
using namespace std;

int main()
{
    float x, sum=1,a; // Declaration of float variables 'x' (input value), 'sum' (to store the sum), 'no_row' (value of the current term)
    int i, n; // Declaration of integer variables 'i' (loop counter), 'n' (number of terms)

    cout << "\n\n Display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]\n"; // Displaying a message on the console
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: "; // Prompting the user to input the value of x
    cin >> x; // Reading the input value as 'x'

    cout << " Input number of terms: "; // Prompting the user to input the number of terms
    cin >> n; // Reading the input value as the number of terms

   for(i=1;i<n;i++){
    int ftr=1;
    for(int j=1;j<=i;j++){
        ftr=ftr*j;}
        a=pow(x,i)/ftr;
        sum=sum+a;

   }
cout << " The sum is :" << sum;
    return 0;
}
