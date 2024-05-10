// Online C compiler to run C program online
#include <stdio.h>

int my_abs (int n) {
    if (n < 0) {
        return n*-1;
    } else {
        return n;
    }
}

int main() {
    // Write C code here
    printf("%d", my_abs(-5));

    return 0;
}