#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
