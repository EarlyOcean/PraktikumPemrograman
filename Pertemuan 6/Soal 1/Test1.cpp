#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Barang {
    string kode_barang;
    string nama_barang;
    int harga_barang;
    int jumlah_barang;
};

int expected_output_jumlah[3] = {10, 155, 1};
float expected_output_rata2[3] = {2000, 70967.9, 10000000};
int index = 0;

int main(){
    Barang barang[50];

    ifstream myfile("testcase.txt");

    string text;

    while(getline(myfile, text)){
        int total_barang = 0, total_harga = 0;
        float rata2_harga;
        cout << "Input: " << endl;
        int n = stoi(text); cout << text << endl;
        for(int i = 0; i < n; i++){
            getline(myfile, text); barang[i].kode_barang = text; cout << text << endl;
            getline(myfile, text); barang[i].nama_barang = text; cout << text << endl;
            getline(myfile, text); barang[i].harga_barang = stoi(text); cout << text << endl;
            getline(myfile, text); barang[i].jumlah_barang = stoi(text); cout << text << endl;
        
            total_barang += barang[i].jumlah_barang;
            total_harga += barang[i].jumlah_barang * barang[i].harga_barang;
        }

        rata2_harga = (float) total_harga / total_barang;

        cout << endl << "Expected output: " << endl;

        cout << "Total jumlah barang: " << expected_output_jumlah[index] << endl;
        cout << "Rata-rata harga barang: " << expected_output_rata2[index] << endl;

        cout << endl << "Output: " << endl;

        cout << "Total jumlah barang: " << total_barang << endl;
        cout << "Rata-rata harga barang: " << rata2_harga << endl << endl;

        index++;
    }
}