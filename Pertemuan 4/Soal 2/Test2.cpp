#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void createTable(int n);

int main(){
    int n;
    ifstream myfile("testcase.txt");

    string text;
    while (getline(myfile, text)) {
        n = stoi(text);
        cout << "Input: " << n << endl;
        cout << "Output: " << endl;
        createTable(n);
        cout << endl;
    }
}

void createTable(int n){
    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}