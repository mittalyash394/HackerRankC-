#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b; char first_element;
    int len_a, len_b;
    cin >> a >> b;
    len_a= a.size();
    len_b= b.size();
    cout << len_a << " ";
    cout << len_b << endl;
    cout << a+b << endl;
    first_element = a[0];
    a[0] = b[0];
    b[0] = first_element;
    cout << a << " ";
    cout << b;
    return 0;
}
