// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int t;
    scanf("%d", &t);
    
    for (int j=0; j<t; j++) {
        int n, x;
        scanf("%d", &n);
        int a[n];
        
        int ans = 0;
        
        for (int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        
        scanf("%d", &x);
        
        for (int i=0; i<n; i++) {
            if (a[i]==x) {
                ans = 1;
                break;
            }
        }
    
        if (ans == 1) {
            printf("YES\n");
        } else if (ans == 0) {
            printf("NO\n");
        }
    }

    return 0;
}