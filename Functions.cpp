#include <iostream>
//#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        cout << a <<"";
    }
    else if(b>a && b>c && b>d){
        cout << b <<"";
    }
    else if(c>a && c>b && c>d){
        cout << c <<"";
    }
    else if(d>a && d >b && d>c){
        cout << d << "";
    }
    //printf("%d", ans);
    
    return 0;
}
