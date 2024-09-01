#include <iostream>
//44. Write a C++ program to display a pattern like a diamond.
//Sample Output:
 //Input number of rows (half of the diamond): 5

//    *
//   ***
//  *****
// *******
//*********
 //*******
  //*****
   //***
    //*
using namespace std;

int main()
{
     int n;
    cout << "Input number of rows:";
    cin >> n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout << " ";
        }
        for(int j=1;j<=i*2-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j =1 ;j<=i*2-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
