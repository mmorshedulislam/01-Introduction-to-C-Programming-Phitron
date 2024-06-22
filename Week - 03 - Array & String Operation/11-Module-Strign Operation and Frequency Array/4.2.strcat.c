// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here
    char a[200], b[100];
    scanf("%s %s", a, b);
    strcat(a, b);

    printf("%s %s", a, b);

    return 0;
}

// input
// apple orange

// output
// appleorange orange
