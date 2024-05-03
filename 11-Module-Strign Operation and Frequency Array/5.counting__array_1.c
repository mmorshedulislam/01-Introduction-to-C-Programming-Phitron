#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    int a[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int cnt[7] = {0};
    for (int i = 0; i < n; i++) {
        int val = a[i];
        cnt[val]++;
    }
    
    for (int i = 0; i <= 6; i++) {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}

// input
// 5
// 1 2 1 3 2

// output
// 0 - 0
// 1 - 2
// 2 - 2
// 3 - 1
// 4 - 0
// 5 - 0
// 6 - 0