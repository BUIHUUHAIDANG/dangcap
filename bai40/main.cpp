#include <iostream>
//40. Write a C++ program to make such a pattern like a pyramid with an asterisk.
//Sample Output:
// Input number of rows: 5
//        *
//       * *
//      * * *
//     * * * *
//    * * * * *
using namespace std;

int main()
{
    int i,n,k;
    cout << "Input number of rows:";
    cin >> n;
    int spc =n+4-1;
    for(i=1;i<=n;i++){
        for(k=spc;k>=1;k--){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";


        }
        cout << endl;
        spc--;
    }

    return 0;
}
