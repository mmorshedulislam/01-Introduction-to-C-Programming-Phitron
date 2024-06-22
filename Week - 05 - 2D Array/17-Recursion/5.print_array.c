#include <stdio.h>

void fun(int arr[], int n, int i)
{
    if (i == n)
        return;
    printf("%d ", arr[i]);
    fun(arr, n, i + 1);
}

int main()
{
    int arr[3] = {10, 20, 30};
    fun(arr, 3, 0);

    return 0;
}

// output

// 10 20 30