#include <stdio.h>
int main()
{
    int n, m = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%d ", j);
        }
        m++;
        printf("\n");
    }
    return 0;
}

// input
// 5

// output
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5