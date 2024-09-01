#include <iostream>

using namespace std;

int main()
{
    int n,y=1;
    cout << " Input number of rows:";
    cin >> n;
    int spc=n+4-2;
    for(int i=1;i<=n;i++){
        for(int k=spc;k>=1;k--){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << y << " ";
        }
        cout << endl;
        spc--;
        y++;
    }

    return 0;
}
