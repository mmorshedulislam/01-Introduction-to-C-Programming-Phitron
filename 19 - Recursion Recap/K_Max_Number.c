#include <stdio.h>
#include <limits.h>

int fun(int arr[], int n, int i)
{
    if (i == n)
        return INT_MIN;
    int ans = fun(arr, n, i + 1);

    if (arr[i] > ans)
    {
        return arr[i];
    }
    else
    {
        return ans;
    }
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

// input 
// 5
// 10 20 40 50 30

// output
// 50