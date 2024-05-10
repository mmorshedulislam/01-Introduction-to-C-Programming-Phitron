// Online C compiler to run C program online
#include <stdio.h>

void print (int n) {
    for (int i = 1; i<=n; i++) {
        if (i<=n-1) {
            printf("%d ", i);
        } 
        else {
            printf("%d", i);
        }
    }
}

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    print(n);

    return 0;
}