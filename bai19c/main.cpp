#include <iostream>
//19. Write a program in C++ to display the multiplication table vertically from 1 to n.
//Sample Output:
//Input the number upto: 5
//Multiplication table from 1 to 5
//1x1=1 2x1=2 3x1=3 4x1=4 5x1=5
//1x2=2 2x2=4 3x2=6 4x2=8 5x2=10
//1x3=3 2x3=6 3x3=9 4x3=12 5x3=15
//1x4=4 2x4=8 3x4=12 4x4=16 5x4=20
//1x5=5 2x5=10 3x5=15 4x5=20 5x5=25
//1x6=6 2x6=12 3x6=18 4x6=24 5x6=30
//1x7=7 2x7=14 3x7=21 4x7=28 5x7=35
//1x8=8 2x8=16 3x8=24 4x8=32 5x8=40
//1x9=9 2x9=18 3x9=27 4x9=36 5x9=45
//1x10=10 2x10=20 3x10=30 4x10=40 5x10=50
using namespace std;

int main()
{
    int num1,num2,kq;
    cout << "Input the number upto: ";
    cin >> num1;
    for(num1=1;num1<=10;num1++){
        for(num2=1;num2<=10;num2++){
            kq=num1*num2;
            cout << num1 << "x"<< num2 << "=" << kq ;
cout << endl;
        }
cout << endl;
    }
    cout << endl;
    return 0;
}
