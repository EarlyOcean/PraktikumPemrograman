#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int calculate(int n);

int main(){
    int n, sum = 0;
    ifstream myfile("testcase.txt");

    string text;
    while (getline(myfile, text)) {
        n = stoi(text);
        cout << "Input: " << n << endl;
        sum = calculate(n);
        cout << "Output: " << sum << endl << endl;
    }
}

int calculate(int n){
    int sum = 0; 
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}