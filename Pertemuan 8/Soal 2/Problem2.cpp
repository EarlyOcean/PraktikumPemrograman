#include <iostream>
using namespace std;

//meng-return nilai rata-rata dari arr[0] sampao arr[index]
float avg(int arr[], int index){
    if(index == 0) return arr[0];
    else return (arr[index] + avg(arr, index - 1) * index) / (float)(index + 1);
}

int main(){
    int myArr[100]; //vscode ku error kalo nulis arr[n]
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> myArr[i];
    }
    
    cout << avg(myArr, n - 1);
}