// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // b copy from a
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // b sorting asc
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        // calculate c = a - b;
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
        }

        // convert abs
        for (int i = 0; i < n; i++)
        {
            if (c[i] < 0)
            {
                c[i] = c[i] * -1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}

// input
// 2
// 5
// 5 4 3 2 1
// 6
// 2 4 5 6 5 1

// output
// 4 2 0 2 4
// 1 2 1 1 0 5