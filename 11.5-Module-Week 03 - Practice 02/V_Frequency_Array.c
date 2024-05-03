#include <stdio.h>

int main() {
    // Write C code here
    int n, m; 
    scanf("%d %d", &n, &m);
    int a[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    int cnt[m];
    for (int i = 0; i < m; i++) {
        cnt[i] = 0;
    }
    
    for (int i=0; i<n; i++) {
        cnt[a[i]-1]++;
    }
    
    for (int i=0; i<m; i++) {
        printf("%d\n", cnt[i]);
    }
    
    return 0;
}

// input
// 10 5
// 1 2 3 4 5 3 2 1 5 3

// output
// 2
// 2
// 3
// 1
// 2