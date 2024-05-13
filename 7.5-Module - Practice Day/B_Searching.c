// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, x;
    scanf("%d", &n);
    int arr[n];
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            printf("%d", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d", -1);
    }

    return 0;
}