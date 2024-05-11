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
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
            }

            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        printf("Primary Unit Matrix\n");
    }
    else
    {
        printf("Not Primary Unit Matrix\n");
    }
}

// input 1
// 3 3
// 1 0 0
// 0 1 0
// 0 0 1

// output 1
// Primary Unit Matrix

// input 2
// 3 3
// 1 0 0
// 0 1 0
// 0 0 2

// output 2
// Not Primary Unit Matrix