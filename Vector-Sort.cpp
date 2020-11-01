#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, index, value;
    vector<int>yash;
    cin >> N;
    for(index=0; index<N; index++){
        //int value;
        cin >> value;
        yash.push_back(value);
    }
    sort(yash.begin(), yash.end());
    for(index=0; index<N; index++){
        cout << yash[index] << " ";
    }
    return 0;
}
