#include <iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout << "Input the first number:";
    cin >> num1;
    cout <<"Input the second number:";
    cin >> num2;
    for(int i=num1;i>1;i--){
        if(num1%i==0 && num2%i==0){
            cout <<"The Greatest Common Divisor is:" << i;

        }
    }


    return 0;
}
