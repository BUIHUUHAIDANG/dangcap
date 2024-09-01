#include <iostream>
//20. Write a C++ program that displays the sum of n odd natural numbers.
//Sample Output:
//Input number of terms: 5
//The odd numbers are: 1 3 5 7 9
//The Sum of odd Natural Numbers upto 5 terms: 25
using namespace std;

int main()
{ int term,sum=0;
cout << " Input number of terms:";
cin >> term;
int n=term*2;
cout << "The odd numbers are:";
for(int i=1;i<=n;i++){
    if(i%2==1){
        cout << i << " " ;

    sum=sum+i;}
}
cout << "The Sum of odd Natural Numbers upto" <<  term  << "terms" << " " << sum;
    return 0;
}
