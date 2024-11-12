#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define ll long long

struct DataMahasiswa {
    ll nisn;
    string nama;
    ll nilai;
} dataM[7];

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

int seqser(DataMahasiswa d[], int from, int to, int x){
    for(int i = from; i <= to; i++){
        if(d[i].nilai == x) return i;
    }

    return -1;
}

int main(){
    ifstream myfile("data.txt");

    string text;
    for(int i = 0; i < 7; i++){
        getline(myfile, text); dataM[i].nisn = string_to_ll(text);
        getline(myfile, text); dataM[i].nama = text;
        getline(myfile, text); dataM[i].nilai = string_to_ll(text);
    }

    int res_index = seqser(dataM, 0, 6, 60);
    if(res_index != -1)
        dataM[res_index].nama = "Joko";
        cout << dataM[res_index].nisn << " : " << dataM[res_index].nama << " : " << dataM[res_index].nilai;
}