#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
    vector<string> v;
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0) v.push_back("FizzBuzz ");
        else if(i % 3 == 0) v.push_back("Fizz ");
        else if(i % 5 == 0) v.push_back("Buzz ");
        else v.push_back(to_string(i));
    }

    for(int i = 0; i < (int)v.size(); i++){
        cout << v[i] << " ";
    }
}