#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, a, b, x, index, size;
    cin >> N;
    vector<int>n_vectors;
    for(index=0; index<N; index++){
        int value;
        cin >> value;

        n_vectors.push_back(value);
    }
    cin >> x;
    cin >> a >> b;
    n_vectors.erase(n_vectors.begin()+(x-1));
    n_vectors.erase(n_vectors.begin()+(a-1), n_vectors.begin()+(b-1));
    size = n_vectors.size();
    cout << size << endl;
    for(index=0; index<size; index++){
        cout << n_vectors[index] << " ";
    }
    return 0;
}
