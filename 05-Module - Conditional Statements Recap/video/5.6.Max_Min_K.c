#include <stdio.h>

int main () {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int min, max;

    // check minimum
    if (A<=B && A<=C) {
        min = A;
    } else if (B<=A && B<=C) {
        min = B;
    } else {
        min = C;
    }

    // check maximum
    if (A>=B && A>=C) {
        max = A;
    } else if (B>=A && B>=C) {
        max = B;
    } else {
        max = C;
    }
    printf("%d ", min);
    printf("%d", max);
    
    return 0;
}