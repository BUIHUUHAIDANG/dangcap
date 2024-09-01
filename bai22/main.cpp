#include <iostream>
//22. Write a program in C++ to display the n terms of a harmonic series and their sum.
//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
//Sample Output:
//Input number of terms: 5
//1/1 + 1/2 + 1/3 + 1/4 + 1/5
//The sum of the series upto 5 terms: 2.28333
using namespace std;

int main()
{ int term;
 float sum=0.0,a;
cout <<"Input number of terms:";
cin >> term;
for(float i=1;i<=term;i++){
        a= 1/i;
        sum=sum +a;
cout << "1/" << i << " " << "+" << " ";

}
cout << endl;
    cout << "The sum of the series upto" << " " << term << " " << sum ;
    return 0;
}
