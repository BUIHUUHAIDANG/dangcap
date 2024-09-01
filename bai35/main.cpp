#include <iostream>
//35. Write a program in C++ to display a pattern like a right angle triangle using an asterisk.
//Sample Output:
//Input number of rows: 5
//*
//**
//***
//****
//*****
using namespace std;

int main()
{
    int i,n;
    cout << "Input number of rows:";
    cin >> n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";


        }
        cout << endl;
    }
    return 0;
}
