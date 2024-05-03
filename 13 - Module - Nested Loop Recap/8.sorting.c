#include <stdio.h>
int main () {
    int n; 
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            
            // if (a[i]>a[j]) { // ascending
            if (a[i]<a[j]) { // descending
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return  0;
}

// input
// 5
// 5 3 4 1 2

// output
// ascending order
// 1 2 3 4 5

// descending order
// 5 4 3 2 1