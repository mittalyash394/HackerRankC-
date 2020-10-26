#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int *x, *y;
    //x =  x + y;
    //y = x - y;
    *x = *a;
    *a = (*a) + (*b);
    *b = (*x) - (*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    if(b<0){
        b= b*(-1);
    }
    printf("%d\n%d", a, b);

    return 0;
}
