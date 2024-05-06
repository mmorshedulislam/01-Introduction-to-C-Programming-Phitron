// No Return + Parameter
#include <stdio.h>

void sum (int x, int y) {
    int s = x + y;
    printf ("%d\n", s);
}

int main () {
    int a, b; 
    scanf ("%d %d", &a, &b);
    sum (a, b);
    return 0;
}

//input 
// 5 12

// output
// 17