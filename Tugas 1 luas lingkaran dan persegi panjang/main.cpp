#include <iostream>

using namespace std;

int main()
{
    //Luas Lingkaran
    float phi= 3.14;
    float r;

    cout << "Input Jari-jari: ";
    cin >> r;

    float hasil = phi*r*r;
    cout << "Jadi Hasilnya: "<<hasil << endl;

    //Luas Persegi Panjang
    float p,l;

    cout << "Input Panjang: ";
    cin >>p;

    cout << "Input Lebar: ";
    cin >> l;

    float jumlah = p*l;
    cout << "Hasil: "<< jumlah;
    return 0;
}
