#include <iostream>

using namespace std;

int main()
{

    int n,fac=1;
    cout << "Input a number to find the factorial:";
    cin >> n;
    for (int i =1;i<=n;i++){
        fac=fac*i;
    }
    cout <<"The factorial of the given number is" << fac;

    return 0;
}
