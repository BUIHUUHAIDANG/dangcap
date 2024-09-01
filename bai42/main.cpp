#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cout << "Input number of rows:";
    cin >> n;
    int a=n*2;
    int spc=n+4-1;
    for(i=1;i<=a;i++){
            for(int k=spc;k>=1;k--){
                cout << " ";
            }
            if(i%2==1){
        for(int j=1;j<=i;j++){

            cout << "* ";}}



        cout << endl;
        spc--;}

    return 0;
}
