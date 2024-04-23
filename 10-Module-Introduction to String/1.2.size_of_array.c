// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n[5];
    int szInt = sizeof(n)/sizeof(int); // int = 4 byte
    printf("%d\n", szInt);

    char c[5];
    int szChar = sizeof(c)/sizeof(char); // char = 1 byte
    printf("%d\n", szChar);

    return 0;
}