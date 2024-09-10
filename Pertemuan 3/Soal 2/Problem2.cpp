#include <iostream>
using namespace std;

double a, b, c;
double maxN;

int main(){
    cout << "Inputkan bilangan 1 : "; cin >> a;
    cout << "Inputkan bilangan 2 : "; cin >> b;
    cout << "Inputkan bilangan 3 : "; cin >> c;

    if(a < b){
        maxN = b;
    }else{
        maxN = a;
    }

    if(c > maxN) maxN = c;

    cout << "Bilangan terbesar adalah : " << maxN;
}