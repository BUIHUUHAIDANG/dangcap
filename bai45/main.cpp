#include <iostream>
//45. Write a C++ program to display Pascal's triangle like a pyramid.
//Sample Output:
//Input number of rows: 5
 //         1
   //     1   1
     // 1   2   1
 //   1   3   3   1
 // 1   4   6   4   1
using namespace std;

int main()
{
    int n,c=1;
    cout << "Input number of rows:";
    cin >> n;
    for(int i=0;i<n;i++){
        for(int blk =1;blk>=n-i;blk++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==0)
                c=1;

            else
                c=c*(i-j+1)/j;

cout << c << " ";}
cout << endl;


    }
    return 0;
}
