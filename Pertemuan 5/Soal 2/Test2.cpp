#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

vector<int> reverse(vector<int> v);

int main(){
    ifstream myfile("testcase.txt");

    string text;
    while (getline(myfile, text)) {
        vector<int> myvector;
        int n;
        cout << "Input: " << text << endl;

        istringstream strm(text);
        strm >> n;
        for(int i = 0; i < n; i++){
            int a;
            strm >> a;
            myvector.push_back(a);
        }
        
        vector<int> reversedVector = reverse(myvector);
        cout << "Output: ";
        for(int i = 0; i < n; i++){
            cout << reversedVector[i] << " ";
        }
        cout << endl << endl;
    }

    
}

vector<int> reverse(vector<int> v){
    vector<int> res;
    for(int i = v.size() - 1; i >= 0; i--){
        res.push_back(v[i]);
    }

    return res;
}