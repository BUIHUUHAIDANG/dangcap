#include <iostream>
//Write a program in C++ to display the first n terms of the Fibonacci series(an infinite series, starting from '0' and '1', in which every number in the series is the sum of two numbers preceding it in the series)
//Sample Output:
//Input number of terms to display: 10
//Here is the Fibonacci series upto to 10 terms:
//0 1 1 2 3 5 8 13 21 34
using namespace std;

int main()
{
    int prv=0,cur=1,nterm,n;
    cout << "Input number of terms to display:";
    cin >> n;
    cout << "Here is the Fibonacci series upto to 10 terms:" << endl;
    cout << prv << " " << cur << " ";
    for(int i=3;i<=n;i++){
        nterm=prv+cur;
        cout << nterm << " ";
        prv=cur;
        cur=nterm;
    }
    return 0;
}
