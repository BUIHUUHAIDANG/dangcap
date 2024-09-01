#include <iostream>
#include<string>
 //Write a program in C++ to find the length of a string without using the library function.
//Sample Output:
//Input a string: w3resource.com
//The string contains 14 number of characters.
//So, the length of the string w3resource.com is:14
using namespace std;

int main()
{
    char str[50];
    int l=0;
    cout << "Input a string:";
    cin >> str;
    for(int i=0;str[i] != '\0';i++){
        l++;}

    cout << " The string contains" << l << " " << "number of characters" << endl;
    cout << " So, the length of the string" << " " << str << " " << "is" << " " << l;



    return 0;
}
