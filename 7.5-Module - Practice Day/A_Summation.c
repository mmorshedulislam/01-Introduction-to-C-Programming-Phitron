// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write C code here
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    if (sum < 0)
    {
        printf("%lld", sum *= -1);
    }
    else
    {
        printf("%lld", sum);
    }

    return 0;
}