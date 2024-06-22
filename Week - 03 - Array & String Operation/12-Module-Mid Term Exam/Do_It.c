// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, k;
    scanf("%d %d", &n, &k);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}