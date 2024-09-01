#include <iostream>
//21. Write a C++ program that displays the sum of the n terms of even natural numbers.
//Sample Output:
//Input number of terms: 5
//The even numbers are: 2 4 6 8 10
//The Sum of even Natural Numbers upto 5 terms: 30
using namespace std;

int main()
{
    int term,sum=0;
cout << " Input number of terms:";
cin >> term;
int n=term*2;
cout << "The even numbers are:";
for(int i=1;i<=n;i++){
    if(i%2==0){
        cout << i << " " ;

    sum=sum+i;}
}
cout << "The Sum of even Natural Numbers upto" <<  term  << "terms" << " " << sum;
    return 0;
}
