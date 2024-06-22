// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        int mult = n * i;
        printf("%d * %d = %d\n", n, i, mult);
    }

    return 0;
}