#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string kode_barang;
    string nama_barang;
    int harga_barang;
    int jumlah_barang;
};

int main(){
    Barang barang[50];
    int total_barang = 0, total_harga = 0;
    float rata2_harga;

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> barang[i].kode_barang;
        cin.ignore();
        getline(cin, barang[i].nama_barang);
        cin >> barang[i].harga_barang;
        cin >> barang[i].jumlah_barang;

        total_barang += barang[i].jumlah_barang;
        total_harga += barang[i].jumlah_barang * barang[i].harga_barang;
    }

    rata2_harga = (float) total_harga / total_barang;

    cout << "Total jumlah barang: " << total_barang << endl;
    cout << "Rata-rata harga barang: " << rata2_harga << endl;
}