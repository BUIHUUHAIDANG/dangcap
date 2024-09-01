#include <iostream>

using namespace std;

int main()
{
    int i,sum=0;
    cout << "find the fist 10 natural numbers :" << endl;
    cout << "----------------------------------" << endl;
    cout << "the natural numbers are:" << endl;
    for (i=1;i<=10;i++){
        cout << i << " ";
        sum=sum +i;
    }
    cout << endl;
    cout << "the sum of fisrt of 10 natural numbers :" << sum <<endl;

    return 0;
}
