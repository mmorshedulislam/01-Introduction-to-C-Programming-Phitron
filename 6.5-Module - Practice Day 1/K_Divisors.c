// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            printf("%d\n", i);
        }
    }

    return 0;
}