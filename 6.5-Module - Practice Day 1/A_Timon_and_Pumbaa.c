// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a-b > 0) {
        printf("%d", a-b);
    } else {
        printf("%d", 0);
    }
    
    return 0;
}