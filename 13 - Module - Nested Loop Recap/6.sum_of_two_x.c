// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int n, x;
    scanf("%d", &n);
    int a[n];
    int flag = 0;
    
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    
    for (int i = 0; i<n-1; i++) {
        for (int j = i+1; j<n; j++) {
            if (a[i]+a[j] == x) {
                printf("%d + %d = %d\n", a[i], a[j], x);
                flag = 1; 
            }
        }
    }
        if (flag == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    
    return 0;
}

// input 
// 5
// 1 6 3 8 5
// 13


// output
// 8 + 5 = 13
// YES