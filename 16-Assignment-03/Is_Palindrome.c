// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int is_palindrome (char *a) {
    int i, j;
    int palindrome = 1;
    int len = strlen(a);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            return palindrome = 0;
        }
    }
    return palindrome;
}

int main() {
    // Write C code here
    char a[1000+1];
    fgets(a, sizeof(a), stdin);

    if (is_palindrome(a) == 1) {
        printf("Palindrome");
    } else if (is_palindrome(a) == 0) {
        printf("Not Palindrome");
    }

    return 0;
}