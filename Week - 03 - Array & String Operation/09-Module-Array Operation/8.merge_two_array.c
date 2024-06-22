// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int ans[n + m];
    int a, b;

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            ans[i] = arr1[i];
        }
        else
        {
            ans[i] = arr2[i - n];
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}