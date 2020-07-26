#include <iostream>

using namespace std ;

int main() {

    int nilai[5];

    /**
     * ===================================================================
     * *nilai << Ini akan menunjuk jumlah array yang di sediakan di memory
     * sederhanan nya di memory komputer akan menyimpan space sebesar 5
     * Sehingga panjang array nanti sebesar 5
     *
     * @var panjangArray
     * ==================================================================
     * **/
    int panjangArray = sizeof(nilai) / sizeof(*nilai);
    int hasil[5] ;
    for (int i = 1; i <= panjangArray ; ++i) {
        cout << "Masukan Angka"<< i << "=" ;
        cin >> hasil[i] ;
        if(hasil[i] % 2 != 0) {
            cout << "Bilangan Harus Genap";
            return 0 ;
        }
    }

    // Untuk menampil kan hasil Dari Array Yang Telah di inputkan
    int sum = 0 ;
    cout << "array = ";
    for (int j = 1; j <= panjangArray; ++j) {
            cout << hasil[j]<<" ";
            sum += hasil[j];
    }
    cout << "Total = "<<sum ;
}
