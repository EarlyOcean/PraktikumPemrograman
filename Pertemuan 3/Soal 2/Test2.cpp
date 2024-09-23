#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

double maxN;
void calculate(double a, double b, double c);

int main(){
    double a, b, c;
    
    ifstream myfile("testcase.txt");

    string text;
    while (getline(myfile, text)) {
        cout << "Input: " << text << endl;
        istringstream strm(text);
        strm >> a;
        strm >> b;
        strm >> c;

        cout << "Output: "; calculate(a, b, c);
        cout << endl;
    }
}

void calculate(double a, double b, double c){
    if(a < b){
        maxN = b;
    }else{
        maxN = a;
    }

    if(c > maxN) maxN = c;

    cout << "Bilangan terbesar adalah : " << maxN;
}