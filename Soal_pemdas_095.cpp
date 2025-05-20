// Buatlah program c++ dengan class Barang yang memiliki atribut: NamaBarang,
// kodeBarang
// program memiliki consturctor berparameter
// untuk mengisi nilai namaBarang dan kodeBarang.
// serta memiliki fungsi untuk menampilkan informasi barang. 

#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Constructor berparameter
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    
    void tampilkanInfo() {
        cout << "Informasi Barang:" << endl;
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};

int main() {
    
    Barang barang1("Laptop ASUS ROG", "300 juta");
    Barang barang2("IPhone 20 PROMAX", "30 juta");

    
    barang1.tampilkanInfo();
    cout << endl; // Spasi antara output
    barang2.tampilkanInfo();

    return 0;
}