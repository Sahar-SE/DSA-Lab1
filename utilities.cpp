#include "utilities.h"
using namespace std;

int add(int a, int b) {
    return a + b;
}

vector<int> find_indices(const vector<int>& arr, int key) {
    vector<int> indices;
    for(size_t i = 0; i<arr.size(); i++) {
        if (arr[i]==key) {
            indices.push_back(i);
        }
    }
    return indices;
}
