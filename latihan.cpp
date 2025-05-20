//buatlah program c++ dengan class yang memiliki atribut : namaBarang,
//kodeBarang
//program memliki constructor berparameter
//untuk mengisi nilai namaBarang dan kodeBarang
//serta memiliki fungsi untuk menampilkan informasi barang

#include <iostream>
#include <string>
using namespace std;

class barang {
    public:
    int kodeBarang;
    string namaBarang;

    barang (int kode, string nama) {
        kodeBarang = kode;
        namaBarang = nama;
    }

    void output()
    {
        cout << "nama barang :" << namaBarang <<endl;
        cout << "kode barang :" << kodeBarang <<endl;
    }


};

int main()
{
    barang a (1122, "Sepeda");
    a.output();
    barang b (1133, "skuter");
    b.output ();
    barang c(1144, "otopet");
    c.output();

}