// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here
    char a[100], b[100];
    scanf("%s %s", a, b);

    // manual
    // for (int i = 0; i <= strlen(b); i++) {
    //     a[i] = b[i];
    // }

    // built in function
    strcpy(a, b);

    printf("%s\n%s\n", a, b);

    return 0;
}

// input
// a = "apple";
// b = "orange";

// output
// a = "orange"