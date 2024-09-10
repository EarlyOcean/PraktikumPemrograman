#include <iostream>
#include <string>
#include <cmath>
using namespace std;


double a, b, c;

void calculate();


int main(){
    a = 1; b = 5; c = 6;
    cout << "Test case with positive discriminant (2 roots)" << endl;
    cout << "Input: 1 2 5" << endl;
    cout << "Output: "; calculate();
    cout << endl;

    a = 1; b = -1; c = 0.25;
    cout << "Test case with the discriminant equals to zero (1 root)" << endl;
    cout << "Input: 1 -1 0.25" << endl;
    cout << "Output: "; calculate();
    cout << endl;

    a = 1; b = 2; c = 5;
    cout << "Test case with negative discriminant (0 root)" << endl;
    cout << "Input: 1 2 5" << endl;
    cout << "Output: "; calculate();
    cout << endl;
}


void calculate(){
    double disc = b * b - 4 * a * c;

    if(disc > 0){
        double x1 = (-b + sqrt(disc)) / (2 * a);
        double x2 = (-b - sqrt(disc)) / (2 * a);

        cout << "The factors are " << x1 << " and " << x2 << endl;
    }
    else if(disc == 0){
        double x = -b / (2 * a);
        cout << "The factor is " << x << endl;
    }
    else if(disc < 0){
        cout << "There are no real roots" << endl;
    }
}