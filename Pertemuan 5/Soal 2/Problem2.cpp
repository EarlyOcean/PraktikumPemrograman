#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v);

int main(){
    vector<int> myvector;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        myvector.push_back(a);
    }

    vector<int> reversedVector = reverse(myvector);
    for(int i = 0; i < n; i++){
        cout << reversedVector[i] << " ";
    }
}

vector<int> reverse(vector<int> v){
    vector<int> res;
    for(int i = v.size() - 1; i >= 0; i--){
        res.push_back(v[i]);
    }

    return res;
}