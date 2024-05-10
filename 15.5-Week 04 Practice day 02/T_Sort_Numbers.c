// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[3];
    
    
    for (int i = 0; i<3; i++) {
        scanf("%d", &arr[i]);
    }
    
    int a = arr[0], b = arr[1], c = arr[2];
    
    for (int i = 0; i<3-1; i++) {
        for (int j = i + 1; j<3; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // sorted array
    for (int i = 0; i<3; i++) {
        printf("%d\n", arr[i]);
    }
    
    printf("\n");
    
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

// input
// -2 10 0

// output
// -2
// 0
// 10

// -2
// 10
// 0