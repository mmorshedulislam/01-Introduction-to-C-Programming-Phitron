// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, k, s;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= (n * 2); i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else if (i <= n)
        {
            printf("\n");
            continue;
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

// Input
// 4
// Output
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
