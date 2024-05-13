#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                cnt++;
            }
        }
    }

    int element = row * col;
    if (cnt == element)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not zero matrix");
    }
}

// input 4
// 4 3
// 0 0 0
// 0 0 0
// 0 0 0
// 0 0 0

// output 2
// Zero Matrix

// input 2
// 4 3
// 0 0 1
// 0 0 0
// 0 0 0
// 0 0 0

// output 2
// Not zero matrix