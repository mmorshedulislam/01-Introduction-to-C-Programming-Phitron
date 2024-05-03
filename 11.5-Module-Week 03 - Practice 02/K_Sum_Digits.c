// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    char a[n+1];
    int sum = 0;
    
    for (int i=0; i<=n; i++) {
        scanf("%c", &a[i]);
    }
    
    for (int i = 1; i<=n; i++) {
        sum += a[i]-48;
    }
    
    printf("%d", sum);
    return 0;
}

// input
// 5
// 13305

// output
// 12