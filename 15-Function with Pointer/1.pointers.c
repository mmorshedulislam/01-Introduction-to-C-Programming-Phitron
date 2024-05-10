#include <stdio.h>
int main () {
    int x = 100;
    int *ptr = &x;

    printf("value of x: %d\n", x);
    printf("address of x: %p\n", &x);
    printf("value of x: %d\n", *ptr);
    printf("value of ptr OR address of x: %p\n", ptr);
    printf("address of ptr: %p\n", &ptr);

    x=200;
    *ptr=300;
    
    return 0;
}

// output
// value of x: 100
// address of x: 0061FF1C
// value of x: 100
// value of ptr OR address of x: 0061FF1C
// address of ptr: 0061FF18