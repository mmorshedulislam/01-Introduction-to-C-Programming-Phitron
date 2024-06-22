#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int priSum = 0;
    int secSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                priSum += a[i][j];
            }

            if (i + j == n - 1)
            {
                secSum += a[i][j];
            }
        }
    }

    int res = priSum - secSum;

    if (res < 0)
    {
        printf("%d ", res * -1);
    }
    else
    {
        printf("%d ", res);
    }

    return 0;
}

// input
// 4
// 1 5 12 1
// 2 -4 6 7
// 3 8 5 9
// 3 5 23 -6

// output
// 22