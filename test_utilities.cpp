#include <iostream>
#include "utilities.h"
using namespace std;

bool vec_ind(const vector<int> a, const vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;

}

int main() {
    cout<<"add(2,3)==5:"<< (add(2,3)== 5 ? "PASS" : "FAIL") << endl;
    vector<int> a1 = {1,2,3,2,4,2};
    vector<int> expect1 = {1,3,5};
    cout<<"find indices: "<<(vec_ind(find_indices(a1,2),expect1)? "pass":"fail")<< endl;

    vector<int> a2 = {5,6,7};
    vector<int> expect2 = {};
    cout<<"find indexes:"<<(vec_ind(find_indices(a2,3),expect2)? "pass":"fail")<< endl;

    vector<int> a3={};
    vector<int> expect3 = {};
    cout<<"find indexes:"<<(vec_ind(find_indices(a3,1),expect3)?"Pass":"fail")<< endl;

    return 0;
}

