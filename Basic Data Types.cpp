#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int integer; long int long_integer; char character; float digit; double double_digit;
    scanf("%d %ld %c %f %lf", &integer, &long_integer, &character, &digit, &double_digit);
    printf("%d\n%ld\n%c\n%f\n%lf\n", integer, long_integer, character, digit, double_digit);
    return 0;
}
