#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
using namespace std;
#define ll long long

const double TAX_PERCENTAGE = 0.2;

string name;
ll gross_salary; 
ll installment; 
ll insurance ;

void calculate();
string to_currency_format(ll num);


int main(){
    ifstream myfile("testcase.txt");

    string text;
    while (getline(myfile, text)) {
        name = text;
        getline(myfile, text);
        istringstream strm(text);
        strm >> gross_salary;
        strm >> installment;
        strm >> insurance;

        cout << "Input: " << endl;
        cout << name << endl;
        cout << gross_salary << endl;
        cout << installment << endl;
        cout << insurance << endl;
        cout << "Output: " << endl; calculate();
        cout << endl;
    }
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
        if(counter % 3 == 0 && counter != 0) res += "."; 
        counter++;
        res += s[i];
    }

    reverse(res.begin(), res.end());
    res = "Rp" + res + ",00";

    return res;
}