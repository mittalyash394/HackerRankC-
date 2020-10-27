#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, A[10000], index;
    cin >> N;
    for(index=1; index<=N; index++){
        cin >> A[index];
    }
    index=N;
    while(index>0){
        cout << A[index] <<" ";
        index--;
    }
    return 0;
}
