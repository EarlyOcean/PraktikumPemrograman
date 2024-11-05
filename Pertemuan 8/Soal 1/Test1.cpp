#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 2) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    cout << "Input: 1" << endl;
    cout << "Expected Output: 1" << endl;
    cout << "Output: " << fibonacci(1) << endl << endl;

    cout << "Input: 15" << endl;
    cout << "Expected Output: 160" << endl;
    cout << "Output: " << fibonacci(5) << endl << endl;

    cout << "Input: 30" << endl;
    cout << "Expected Output: 832040" << endl;
    cout << "Output: " << fibonacci(30) << endl << endl;
}