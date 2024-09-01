#include <iostream>
//36. Write a program in C++ to display the pattern like right angle triangle with number.
//Sample Output:
//Input number of rows: 5
using namespace std;

int main()
{ int i,n,j;
cout << "Input number of rows: ";
cin >> n;
for(i=1;i<=n;i++){
 for(j=1;j<=i;j++){
    cout << j;}

cout << endl;}
    return 0;
}
