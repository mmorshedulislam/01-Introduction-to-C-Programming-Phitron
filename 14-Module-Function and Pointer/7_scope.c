#include <stdio.h>

// global variables
int x = 500;

void fun () {
    // value of the function
    int s = 100;
    printf("%d\n", s);
    printf("memory location of s: %p\n", &s);
    printf("memory location of x: %p\n", &x);
    printf("x from fun: %d\n", x);
}

int main () {
    // value of the function
    int s = 200;
    printf("%d\n", s);
    printf("memory location of s: %p\n", &s);
    printf("memory location of x: %p\n", &x);
    printf("x from main: %d\n", x);
    fun();
    return 0;
}

// output
// 200
// x from main: 500
// 100
// x from fun: 500