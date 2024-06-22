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

    // exact column
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][exact]);
        printf("\n");
    }
}

// input
// 4 3
// 4 6 5
// 8 5 6
// 1 2 5
// 3 8 4
// 1

// output
// 6
// 5
// 2
// 8