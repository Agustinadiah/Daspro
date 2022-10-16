#include <iostream>

using namespace std;

int main()
{
    system ("cls");
    cout << "Deret Fibonacci : " << endl;
    int x = 0, y = 1, hasil = 0;
    for (int i = 0; i <= 9; i++)
    {
        cout << x << "+" << y << "=" << x+y << endl;
        hasil = x + y;
        x = y;
        y = hasil;
    }

    return 0;
}
