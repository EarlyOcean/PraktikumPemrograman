#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define ll long long // ago

struct DataMahasiswa {
    ll nisn;
    string nama;
    ll nilai;
} dataM[7];

bool is_greater_custom(int mode, DataMahasiswa andi, DataMahasiswa budi){
    if(mode == 1){ // nisn
        return andi.nisn > budi.nisn;
    }else{ // nilai
        return andi.nilai > budi.nilai;
    }
}

void swap(DataMahasiswa d[], int index1, int index2){
    DataMahasiswa temp = d[index1];
    d[index1] = d[index2];
    d[index2] = temp;
}

void insertion(int mode, DataMahasiswa d[]){
    int n = 7;
    for(int i = 1; i < n; i++){
        DataMahasiswa key = d[i];
        int j = i - 1;
        while(j >= 0 && is_greater_custom(mode, d[j], key)){
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = key;
    }
}

void selection(int mode, DataMahasiswa d[]){
    int n = 7;
    for(int i = 0; i < n - 1; i++){
        int min_index = i;

        for(int j = i + 1; j < n; j++){
            if(is_greater_custom(mode, d[min_index], d[j]))
                min_index = j;
        }

        swap(d, i, min_index);
    }
}

void bubble(int mode, DataMahasiswa d[]){
    int n = 7;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(is_greater_custom(mode, d[j], d[j + 1])){
                swap(d, j, j + 1);
            }
        }
    }
}

void show_data(DataMahasiswa d[]){
    int n = 7;
    for(int i = 0; i < n; i++){
        cout << d[i].nisn << " : " << d[i].nama << " : " << d[i].nilai << endl;
    }
}

ll string_to_ll(string s){
    int n = s.length();
    ll res = 0;
    ll multiplier = 1;
    for(int i = n - 1; i >= 0; i--){
        res += ((int)s[i] - 48) * multiplier;
        multiplier *= 10;
    }

    return res;
}

int main(){
    ifstream myfile("data.txt");

    string text;
    for(int i = 0; i < 7; i++){
        getline(myfile, text); dataM[i].nisn = string_to_ll(text);
        getline(myfile, text); dataM[i].nama = text;
        getline(myfile, text); dataM[i].nilai = string_to_ll(text);
    }

    cout << "=== INSERTION SORT ===" << endl << endl;
    cout << "Berdasarakan nisn: " << endl; insertion(1, dataM); show_data(dataM);
    cout << endl;
    cout << "Berdasarakan nilai: " << endl; insertion(2, dataM); show_data(dataM);

    cout << endl;

    cout << "=== SELECTION SORT ===" << endl << endl;
    cout << "Berdasarakan nisn: " << endl; selection(1, dataM); show_data(dataM);
    cout << endl;
    cout << "Berdasarakan nilai: " << endl; selection(2, dataM); show_data(dataM);

    cout << endl;

    cout << "=== BUBBLE SORT ===" << endl << endl;
    cout << "Berdasarakan nisn: " << endl; bubble(1, dataM); show_data(dataM);
    cout << endl;
    cout << "Berdasarakan nilai: " << endl; bubble(2, dataM); show_data(dataM);
}