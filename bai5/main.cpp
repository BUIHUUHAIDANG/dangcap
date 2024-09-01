#include <iostream>

using namespace std;

int main()
{
    int n,ctr=0;
    cin >> n;
   for(int a=1;a<=n;a++){
    if(n%a==0){
        ctr++;
    }
   }
   if(ctr==2){
    cout << "number is a prime number" << n << endl;
   }
   else{
    cout << "number is not a prime number" << n << endl;
   }
    return 0;
}
