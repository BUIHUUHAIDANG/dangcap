#include <iostream>

using namespace std;

int main()
{
    int num1,num2,r,sum=0;
    cout <<"Input a number: ";
    cin >> num1;
    num2=num1;
    while(num1>0){
        r=num1%10;
        num1=num1 / 10;
        sum= sum +r;
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
    return 0;
}
