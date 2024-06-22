#include <stdio.h>

int main()
{
    int main()
    {
        int row, col;
        scanf("%d %d", &row, &col);

        int a[row][col];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                if (j == 0)
                {
                    printf("%d", a[i][j]);
                }
                else
                {
                    printf("%d ", a[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

// input
// 3 3
// 2 3 5
// 7 9 20
// 35 1 12

// output
// 5 3 2
// 20 9 7
// 12 1 35