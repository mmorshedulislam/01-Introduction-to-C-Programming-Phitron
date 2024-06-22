// Online C compiler to run C program online
#include <stdio.h>

void swap_it (int * n, int * m) {
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main() {
    // Write C code here
    int n, m;
    scanf("%d %d", &n, &m);
    swap_it(&n, &m);
    printf("%d %d", n, m);
    return 0;
}