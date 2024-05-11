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

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                continue;
            }

            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Secondary diagonal\n");
    }
    else
    {
        printf("Not Secondary diagonal\n");
    }
}

// input 1
// 3 3
// 0 0 1
// 0 2 0
// 3 0 0

// output 1
// Secondary diagonal

// input 2
// 3 3
// 0 0 3
// 0 2 0
// 1 0 1

// output 2
// Not Secondary diagonal