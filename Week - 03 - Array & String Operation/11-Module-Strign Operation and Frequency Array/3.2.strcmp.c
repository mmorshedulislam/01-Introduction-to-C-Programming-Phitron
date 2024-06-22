// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here
    char a[100], b[100];
    scanf("%s %s", a, b);

    int value = strcmp(a, b);

    if (value < 0)
    {
        printf("A is smaller than B");
    }
    else if (value > 0)
    {
        printf("B is smaller than A");
    }
    else
    {
        printf("A and B are equal");
    }

    return 0;
}

// input
// ab abc;
// abc ab;
// abc abc;
// abcd abce;

// output
// a < b;
// a > b;
// a == b
// a < b;