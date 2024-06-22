// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < m; j++)
    {
        printf("%d ", arr[n - 1][j]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i][m - 1]);
    }

    return 0;
}

// input
// 5 3
// 1 2 3
// 5 6 7
// 6 5 4
// 3 5 4
// 1 2 3


// output
// 1 2 3
// 3 7 4 4 3