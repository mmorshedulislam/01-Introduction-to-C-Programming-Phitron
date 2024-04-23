#include <stdio.h>

int main () {
    char a[5];
    for (int i; i < 5; i++) {
        scanf("%c", &a[i]);
    }

    for (int i; i < 5; i++) {
        printf("%c", a[i]);
    }
    return 0;
}