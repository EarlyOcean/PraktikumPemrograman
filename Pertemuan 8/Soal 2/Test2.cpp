#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

float expected_output[3] = {2, 24.4, 100};

//meng-return nilai rata-rata dari arr[0] sampao arr[index]
float avg(int arr[], int index){
    if(index == 0) return arr[0];
    else return (arr[index] + avg(arr, index - 1) * index) / (float)(index + 1);
}

int main(){
    ifstream myfile("testcase.txt");

    string text;

    int expected_output_index = 0;
    while(getline(myfile, text)){
        int n; int arr[100];
        istringstream strm(text);
        strm >> n;
        for(int i = 0; i < n; i++){
            strm >> arr[i];
        }

        cout << "Input: " << text << endl;
        cout << "Expected Output: " << expected_output[expected_output_index] << endl;
        cout << "Output: " << avg(arr, n - 1) << endl << endl;

        expected_output_index++;
    }
}