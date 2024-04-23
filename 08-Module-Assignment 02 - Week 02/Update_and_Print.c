#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N; 
    scanf("%d", &N);
    int arr[N];
    int X, V;

    for (int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &X, &V);

    for (int i=N-1; i>=0; i--) {
        if (X==i) {
            arr[i] = V;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}
