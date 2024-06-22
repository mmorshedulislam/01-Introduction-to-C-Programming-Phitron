// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= 10)
        {

            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}