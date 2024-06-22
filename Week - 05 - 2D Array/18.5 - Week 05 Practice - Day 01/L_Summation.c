#include <stdio.h>

int fun(int arr[], int n, int i)
{
    if (i == n)
        return 0;

    int res = fun(arr, n, i + 1);
    return arr[i] + res;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = fun(arr, n, 0);
    printf("%d", ans);

    return 0;
}