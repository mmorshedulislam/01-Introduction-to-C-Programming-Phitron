#include <stdio.h>

int main () {
    int n, firstDigit, lastDigit;
    printf("Enter any number: \n");
    scanf("%d", &n);
    
    lastDigit = n%10;

    firstDigit = n;

    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    printf("The first digit is %d\n", firstDigit);

    printf("The last digit is %d\n", lastDigit);
    return 0;
}