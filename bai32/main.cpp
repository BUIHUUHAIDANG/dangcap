#include <iostream>
//Write a C++ program to find the sum of the GP series.
//Sample Output:
//Input the starting number of the G.P. series: 3
//Input the number of items for the G.P. series: 5
//Input the common ratio of G.P. series: 2
//The numbers for the G.P. series:
//3 6 12 24 48
//The Sum of the G.P. series: 93
using namespace std;

int main()
{
int str,term,com,nterm,sum=3;
    cout << "Input the starting number of the G.P. series:" ;
    cin >>str;
    cout << "Input the number of items for the G.P. series:";
    cin >> term;
    cout << "Input the common difference of G.P. series:";
    cin >> com;
    cout << "The numbers for the G.P. series:" << endl;
    cout << str << " ";
    for(int i=str;i<=(term+1);i++){
        nterm=str*com;
        cout << nterm << " ";
        sum=sum+nterm;
        str=nterm;
    }

    cout << "The Sum of the A.P. series are :" << sum << endl;


    return 0;
}
