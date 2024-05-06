#include <stdio.h>

int main () {
    int x = 500; 
    printf("%d\n", x); // get value of x
    printf("%p\n", &x); // memory address of x

    // get memory address of x
    int *p = &x;
    printf("%p\n", p);

    // de reference (get value of x by p)
    printf("%d\n", *p);

    // update value of x by p (de reference)
    *p = 700;
    printf("%d\n", x);
    return 0;
}

// output
// 500
// 0061FF18
// 0061FF18
// 500
// 700