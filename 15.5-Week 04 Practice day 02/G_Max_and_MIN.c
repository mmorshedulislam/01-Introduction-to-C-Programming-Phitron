// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int min (int arr[], int n) {
    int min = INT_MAX;
    for (int i = 0; i<n; i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}

int max (int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i<n; i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d ", min(arr, n));
    printf("%d", max(arr, n));

    return 0;
}