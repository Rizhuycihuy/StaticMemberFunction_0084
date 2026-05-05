#include <iostream>
#include <string>
using namespace std;

class produk{
  private:
  int id;
  string nama;

  public:
  
  void tampilkan(){
    cout << "id = " << id <<  endl;
    cout << "nama = " << nama << endl;
    cout << endl;
  }

  produk() {
    id = 10;
    nama = "susu";
  }

  produk(int pId) {
    id = pId;
    nama = "susi";
  }

  produk(string pnama){
    id = 1;
    nama = pnama;
  }

  produk(int pId,string pnama){
    id = pId;
    nama = pnama;
  }
};

int main() {
  cout << "daftar inventaris toko" << endl;
  produk produk1;
  produk produk2(3);
  produk produk3 ("susu");
  produk produk4 (4,"susi");

  produk1.tampilkan();
  produk2.tampilkan();
  produk3.tampilkan();
  produk4.tampilkan();

  return 0;

}