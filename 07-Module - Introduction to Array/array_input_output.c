// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int arr[5];
    // scan
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // print
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}