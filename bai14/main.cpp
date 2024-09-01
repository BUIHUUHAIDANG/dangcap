#include <iostream>
#include <math.h>
//14. Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.
//Sample Output:
//Input the value of X: 3
//Input the value for nth term: 4
//term 1 value is: 1
//term 2 value is: -4.5
//term 3 value is: 3.375
//term 4 value is: -1.0125
//The sum of the above series is: -1.1375
//
using namespace std;

int main()
{
 float n,ftr,j,sum,term,m;
 int X,i;
 int y=2;
 cout << "Input the value of X:";
 cin >> X;
 cout <<"Input the value for nth term:";
 cin >> n;
 sum=1;
 term=1;
 cout <<"term 1 value is:" << term << endl;
 for(i=1;i<n;i++){
    ftr =1;
    for(j=1;j<=y;j++){
        ftr=ftr*j;
    }
    term=term*(-1);
    m=pow(X,y)/ftr;
    m=m*term;
    sum=sum+m;
    y+=2;
    cout << "term" << i+1 << "value is :"<< m<<endl;
 }
 cout <<"The sum of the above series is:"<< sum <<endl;
    return 0;
}
