#include <iostream>
#include<math.h>
///13. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
//Sample Output:
//Input the value for nth term: 5
//1 = 1
//1+2 = 3
//1+2+3 = 6
//1+2+3+4 = 10
//1+2+3+4+5 = 15
//The sum of the above series is: 35
using namespace std;

int main()
{
    int i,n,a,sum1=0,sum2=0;
    cout << "Input the value for nth term: ";
    cin >> n;
    for (i=1;i<=n;i++){
        sum1=sum1+i;
        cout << sum1 << endl;
        sum2=sum2+sum1;
    }
    cout <<"The sum of the above series is" << sum2 << endl;

    return 0;
}

