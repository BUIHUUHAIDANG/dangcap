#include <iostream>
#include<math.h>
//12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
//Sample Output:
//Input the value for nth term: 5
//1*1 = 1
//2*2 = 4
//3*3 = 9
//4*4 = 16
//5*5 = 25
//The sum of the above series is: 55

using namespace std;

int main(){

    int i,n,sum=0,a;
    cout << " Input the value for nth term: ";
    cin >> n;
    for(i=1;i<=n;i++){
        a= i*i;
        cout << i <<"*"<< i <<"=" << a << endl;
        sum=sum + a;
    }
    cout << "the sum of the above series is:" << sum;
    return 0;
}
