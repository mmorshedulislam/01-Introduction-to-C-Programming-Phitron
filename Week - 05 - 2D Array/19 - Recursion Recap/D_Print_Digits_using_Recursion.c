#include <stdio.h>

void fun(int n)
{
    if (n == 0)
        return;
    int x = n % 10; // input (1234) output (4)
    fun(n / 10);    // input (1234) output (123)
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        fun(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}

// input
// 3
// 121
// 39
// 123456

// output
// 1 2 1
// 3 9
// 1 2 3 4 5 6