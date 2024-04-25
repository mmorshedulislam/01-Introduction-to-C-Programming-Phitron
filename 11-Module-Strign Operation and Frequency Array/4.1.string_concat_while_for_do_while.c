// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    char a[200], b[100];
    scanf("%s %s", a, b);
    int k = strlen(a);
    int i = 0;
    
    // using for loop
    for (i = 0; i<=strlen(b); i++) {
        a[k] = b[i];
        k++;
    }
    
    // using while loop
    // while(i<=strlen(b)){
    //     a[k] = b[i];
    //     i++;
    //     k++;
    // }
    
    // using do while
    // do {
    //     a[k] = b[i];
    //     i++;
    //     k++;
    // } while (i<=strlen(b));
    
    printf("%s %s", a, b);

    return 0;
}

// input
// apple orange

// output
// appleorange orange
