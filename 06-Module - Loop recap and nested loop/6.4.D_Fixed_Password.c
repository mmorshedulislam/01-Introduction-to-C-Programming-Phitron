// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int N;
    // EOF = end of file
    while (scanf("%d\n", &N) != EOF) {
        if (N==1999) {
            printf("Correct\n");
            break;
        } else {
            printf("Wrong\n");
        } 
    }

    return 0;
}