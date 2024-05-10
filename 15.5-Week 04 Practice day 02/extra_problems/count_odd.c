// Online C compiler to run C program online
#include <stdio.h>

int count_odd (int arr[], int n) {
    int odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
           odd++;
        }
    }
    return odd;
}

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", count_odd(arr, n));
    
    return 0;
}

// input
// 5
// 1 5 4 10 2

// output
// 2