// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, x, s; 
    scanf("%d", &n);
    x = 1;
    s = n-1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        for (int j = x; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
        x++;
        s--;
    }

    return 0;
}

// input
// 5

// output
//     1
//    21
//   321
//  4321
// 54321