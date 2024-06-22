// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, m;
    scanf("%d", &m);
       
    n = (m+1)/2 + 5;
    
    int s = n-1, k=1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s; j++) {
            printf(" ");
        }
        s--;
        
        for (int j = 0; j < k; j++) {
            printf("*");
        }
        k+=2;
        
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < m; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}