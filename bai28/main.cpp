#include <iostream>
//28. Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9.
//Sample Output:
//Numbers between 100 and 200, divisible by 9:
//108 117 126 135 144 153 162 171 180 189 198
//The sum : 1683

using namespace std;

int main()
{
    int num1,num2, sum=0;
    cin >> num1;
    cin >> num2;
    cout << "Numbers between" << " " << num1 << " " << "and" << " " << num2 << " " << ", divisible by 9:";
    for(int i=num1;i<=num2;i++){
        if( i%9==0){
            cout << i << " ";

        sum=sum+i;}

    }
    cout << endl;
    cout << "the sum" << sum;
    return 0;
}
