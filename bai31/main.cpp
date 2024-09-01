#include <iostream>
//31. Write a C++ program to find the sum of an A.P. series.
//Sample Output:
//Input the starting number of the A.P. series: 1
//Input the number of items for the A.P. series: 8
//Input the common difference of A.P. series: 5
//The Sum of the A.P. series are :
//1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148
using namespace std;

int main()
{
    int str,term,com,nterm,sum=1;
    cout << "Input the starting number of the A.P. series:" ;
    cin >>str;
    cout << "Input the number of items for the A.P. series:";
    cin >> term;
    cout << "Input the common difference of A.P. series:";
    cin >> com;
    cout << "The Sum of the A.P. series are :" << endl;
    cout << str << "+";
    for(int i=1;i<term;i++){
        nterm=str+com;
        cout << nterm << "+" ;
        sum=sum+nterm;
        str=nterm;
    }
    cout << "=" << sum;
    return 0;
}
