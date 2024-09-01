#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double sum=0,a;
   int i,n;
   cout <<  "Input the value for nth term: ";
   cin >> n;
   for(i=1;i<=n;i++){
    a = 1/ pow(i,i);
    cout << "1/" << i << "^" << i <<"=" << a << endl;
    sum=sum+a;
   }
   cout <<"The sum of the above series is:" << sum << endl;


    return 0;
}
