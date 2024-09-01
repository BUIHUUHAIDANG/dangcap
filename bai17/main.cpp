#include <iostream>

using namespace std;

   // 17. Write a program in C++ to print a square pattern with the # character.
//Sample Output:
//Print a pattern like square with # character:
//--------------------------------------------------
//Input the number of characters for a side: 4
//# # # #
//# # # #
//# # # #
//# # # #
int main (){
int n;
cout << "Print a pattern like square with # character:" << endl;
cout << "------------------------------------------------" << endl;
cout << "Input the number of characters for a side:";
cin >> n;
for(int i =1 ;i<= n;i++){
    for(int row =1;row<=n;row++){
        cout << "#"<< " "  ;
    }

cout << endl;}
    return 0;
}
