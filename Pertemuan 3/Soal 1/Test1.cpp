#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;

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
    double disc = b * b - 4 * a * c;

    if(disc > 0){
        double x1 = (-b + sqrt(disc)) / (2 * a);
        double x2 = (-b - sqrt(disc)) / (2 * a);

        cout << "The roots are " << x1 << " and " << x2 << endl;
    }
    else if(disc == 0){
        double x = -b / (2 * a);
        cout << "The root is " << x << endl;
    }
    else if(disc < 0){
        cout << "There are no real roots" << endl;
    }
}