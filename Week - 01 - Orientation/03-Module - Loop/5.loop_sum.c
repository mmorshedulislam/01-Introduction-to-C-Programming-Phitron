#include <stdio.h>
int main()
{
    long long int sum = 0;
    int i;
    int n;
    // scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%lld\n", sum);

    return 0;
}