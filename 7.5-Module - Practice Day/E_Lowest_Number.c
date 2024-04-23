// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int main() {
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = INT_MAX;
    int index;
    
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]); 
        if (min>arr[i]) {
            min = arr[i];
            index = i+1;
        }   
    }
    
    printf("%d %d", min, index);
    return 0;
}