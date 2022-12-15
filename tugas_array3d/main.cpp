#include <iostream>

using namespace std;

int main()
{
    int x[3][2][2];
    int y = 2,counter = 0, sum = 0 ,avg;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            for(int k = 0; k<2; k++){
                x[i][j][k] = y;
                y+=2;
            }
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<2; j++){
            for(int k = 0; k<2; k++){
                cout << x[i][j][k] << " "<< endl;
                if(x[i][j][k] % 4 == 0 ){
                    sum += x[i][j][k];
                    counter++;
                }
            }
        }
    }
    avg = sum/counter;
    cout << "Banyak angka Kelipatan 4 : " << counter << endl;
    cout << "Jumlah Kelipatan 4 : " << sum << endl;
    cout << "Rata-Rata : " << avg << endl;
    return 0;
}
