#include <stdio.h>

int main()
{
    int row, col, exact;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &exact);

    // ecact row

    for (int j = 0; j < col; j++)
    {
        printf("%d ", arr[exact][j]);
    }
}

// input
// 4 3
// 1 2 3
// 4 8 9
// 6 4 7
// 1 4 5
// 1

// output
// 4 8 9