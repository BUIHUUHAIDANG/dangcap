#include <iostream>

using namespace std;

int main()
{
   int i,u,sum=0;
   cout << "the perfect numbers between 1 and 500 are :" << endl;
   while(i<=500){
    while(u<=500){
        if(i>u){
           if (i%u==0)
            sum=sum+u;
        }
        u++;

   }
    if(sum=i){
        cout << i << " " << endl;
    }
    i++;
    u=1;
    sum=0;
   }
    return 0;
}
