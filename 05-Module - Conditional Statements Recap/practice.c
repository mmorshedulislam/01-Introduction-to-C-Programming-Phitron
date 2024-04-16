#include <stdio.h>

int main () {
    int N;
    
    while (scanf("%d ", &N) != EOF) {
        
        if (N==2000) {
            printf("Correct\n");
            break;
        } else {
            printf("Invalid\n");
        }
    }

    return 0;
}