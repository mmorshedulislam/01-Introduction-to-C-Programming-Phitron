// Online C compiler to run C program online
#include <stdio.h>

int count_before_one(int arr[], int n)
{
    int count_1 = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] != 1)
        {
            count_1++;
        }
        else if (arr[i] == 1)
        {
            break;
        }
    }
    return count_1;
}

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ans = count_before_one(arr, n);
    printf("%d\n", ans);

    return 0;
}

// Sample Input
// 5
// 5 4 3 1 2

// Sample Output
// 3