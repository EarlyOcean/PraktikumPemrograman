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

bool is_greater_custom(int mode, DataMahasiswa andi, DataMahasiswa budi){
    if(mode == 1){ // nisn
        return andi.nisn > budi.nisn;
    }else{ // nilai
        return andi.nilai > budi.nilai;
    }
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

int binser(DataMahasiswa d[], int left, int right, ll x){
    while(left <= right){
        int mid = (left + right) / 2;
        if(d[mid].nisn < x) left = mid + 1;
        else if(d[mid].nisn > x) right = mid - 1;
        else if(d[mid].nisn == x) return mid;
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

    insertion(1, dataM);
    int res_index = binser(dataM, 0, 6, 9950310962);
    if(res_index != -1)
        cout << dataM[res_index].nisn << " : " << dataM[res_index].nama << " : " << dataM[res_index].nilai;
}