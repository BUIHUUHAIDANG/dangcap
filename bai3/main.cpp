#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout << "input a number of terms";
    cin >> n ;
    for(i=1;i<=n;i++){
        cout << i <<" ";
        sum= sum + i;
    }
    cout << endl;
    cout << "the sum of natural of numbers is:" << sum <<endl;
    return 0;
}
