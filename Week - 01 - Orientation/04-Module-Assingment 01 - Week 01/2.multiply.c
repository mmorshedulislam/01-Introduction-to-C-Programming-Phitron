#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B;
    scanf("%d %d", &A, &B);
    long long int mult = (long long int)A * B;
    printf("%lld", mult);
    return 0;
}
