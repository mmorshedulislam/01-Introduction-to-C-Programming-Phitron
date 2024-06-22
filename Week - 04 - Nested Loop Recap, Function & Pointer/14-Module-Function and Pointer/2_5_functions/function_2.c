// Return + No Parameter

#include <stdio.h>

// "void" pass korle parameter recieve korte pare na error diye dibe ar void pass na korle parameter recieve korbe but ignore kore jabe.
// int sum (void) {
int sum () {
    int x, y;
    scanf ("%d %d", &x, &y);
    int s = x + y;
    return s;
}

int main () {
    int s = sum();
    printf ("%d\n", s);
    return 0;
}

//input 
// 2 6

// output
// 8