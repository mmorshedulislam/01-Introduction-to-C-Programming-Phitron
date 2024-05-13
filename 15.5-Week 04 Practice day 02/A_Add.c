// Online C compiler to run C program online
#include <stdio.h>

int summation(int n, int m)
{
    int sum = n + m;
    return sum;
}

int main()
{
    // Write C code here
    int n, m;
    scanf("%d %d", &n, &m);

    int ans = summation(n, m);
    printf("%d", ans);

    return 0;
}