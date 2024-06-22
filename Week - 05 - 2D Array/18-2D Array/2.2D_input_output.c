#include <stdio.h>

int main()
{
    int arr[5][3];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// input
// 4 5 6
// 8 5 2
// 6 9 3
// 4 7 5
// 1 2 9

// output
// 4 5 6
// 8 5 2
// 6 9 3
// 4 7 5
// 1 2 9