#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ','){
            cout << "\n";
        }
        else{
            cout << str[i];
        }
    }
    
    return 0;
}
