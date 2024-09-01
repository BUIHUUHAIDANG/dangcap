#include <iostream>
//47. Write a program in C++ to display such a pattern for n number of rows using numbers. Odd numbers will appear in each row. The first and last number of each row will be 1 and the middle column will be the row number.
//Sample Output:
//    1
//   121
//  12321
// 1234321
//123454321
// Input number of rows: 5
using namespace std;

int main()
{
    int n;
    cout << " Input number of rows:";
    cin >> n;
    for(int i=0;i<=n;i++){
            for(int blk =1;blk<=n-i;blk++){
                cout << " ";
            }
            for(int j=1;j<=i;j++){
                cout << j;
            }
            for(int j=1;j<=i-1;j++){
                cout << j;
            }
            cout << endl;
    }
    return 0;
}
