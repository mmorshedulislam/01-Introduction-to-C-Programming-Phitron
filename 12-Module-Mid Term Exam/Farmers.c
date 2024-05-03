// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int new_days = d * m1 / (m1+m2);
        printf("%d\n", d-new_days);
    }

    return 0;
}