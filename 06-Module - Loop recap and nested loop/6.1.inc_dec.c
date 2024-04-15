// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i = 10; 
    int x;
    x = i++; // x=10, i=11 (post increment)
    x = ++i; // x=11, i=11 (pre increment)
    
    printf("x=%d, i=%d", x, i);

    return 0;
}