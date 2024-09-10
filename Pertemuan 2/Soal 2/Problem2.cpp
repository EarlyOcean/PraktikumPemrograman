#include <iostream>
#include <string>
#include <cmath>
using namespace std;


double a, b, c;

// menggunakan fungsi agar test code lebih mudah
void calculate();


int main(){
    cin >> a >> b >> c;
    calculate();
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