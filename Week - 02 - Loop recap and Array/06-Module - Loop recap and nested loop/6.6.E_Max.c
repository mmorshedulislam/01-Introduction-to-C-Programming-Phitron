// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h>

int main()
{
    // Write C code here
    int N, A, max = INT_MIN, min = INT_MAX;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A);
        if (A >= max)
        {
            max = A;
        }
        if (A <= min)
        {
            min = A;
        }
    }

    printf("%d", max);
    // printf("%d", min);

    return 0;
}