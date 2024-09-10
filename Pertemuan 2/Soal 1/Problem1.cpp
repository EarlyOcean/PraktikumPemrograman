#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define ll long long

const float TAX_PERCENTAGE = 0.2;

string name = "John Doe";
ll gross_salary = 15000000; 
ll installment = 200000; 
ll insurance = 150000;

// menggunakan fungsi agar test code lebih mudah
void calculate();
// fungsi untuk mengkonversi angka ke format nilai rupiah
string to_currency_format(ll num);


int main(){
    calculate();
}


void calculate(){
    ll tax = gross_salary * TAX_PERCENTAGE;
    ll net_salary = gross_salary - tax - installment - insurance;

    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Gross Salary: " << to_currency_format(gross_salary) << endl;
    cout << "Tax (20%): " << to_currency_format(tax) << endl;
    cout << "Installment: " << to_currency_format(installment) << endl;
    cout << "Insurance: " << to_currency_format(insurance) << endl;
    cout << "Net Salary: " << to_currency_format(net_salary) << endl;
}


string to_currency_format(ll num){
    string s = to_string(num);
    string res = "";

    int counter = 0;
    for(int i = s.length() - 1; i >= 0; i--){
        if(counter % 3 == 0 && counter != 0) res += "."; counter++;
        res += s[i];
    }

    reverse(res.begin(), res.end());
    res = "Rp" + res + ",00";

    return res;
}