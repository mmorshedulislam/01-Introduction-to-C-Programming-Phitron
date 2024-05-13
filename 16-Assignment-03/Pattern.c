// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, k, s, h;
    scanf("%d", &n);
    k = 1;
    s = n - 1;
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        if (i <= n - 1)
        {
            k += 2;
            s--;
        }
        else
        {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
}

// input
// 4

// output
//    #
//   ---
//  #####
// -------
//  #####
//   ---
//    #