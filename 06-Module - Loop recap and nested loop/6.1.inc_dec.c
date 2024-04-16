// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i = 10; 
    int x, y;

    x = i++; // x=10, i=11 (post increment)
    printf("x=%d, i=%d\n", x, i);

    y = ++i; // y=12, i=12 (pre increment)
    printf("y=%d, i=%d\n", y, i);
    
    return 0;
}