#include <iostream>
//39. Write a C++ program to make such a pattern like a pyramid with numbers increased by 1.
//Sample Output:
 //Input number of rows: 4
//      1
//     2 3
//    4 5 6
//   7 8 9 10
using namespace std;

int main()
{

     int n,y=0,k;
    cout << "Input number of rows:";
    cin >> n;
    int spc=n+4-1;
    for(int i=1;i<=n;i++){
        for (k = spc; k >= 1; k--) // Loop to print spaces before the numbers
        {
            cout << " "; // Print a space
        }
        for(int j=1;j<=i;j++){
     y++;
            cout << y << " " ;}



        cout << endl;
        spc--;}

    return 0;
}
