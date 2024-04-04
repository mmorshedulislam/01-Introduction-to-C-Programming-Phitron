#include <stdio.h>
int main () 
{
    int a = 5;
    int b = 2;
    // scanf("%d", &a);
    // scanf("%d", &b);
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    int mns = a-b;
    printf("%d - %d = %d\n", a, b, mns);

    int mlt = a*b;
    printf("%d * %d = %d\n", a, b, mlt);

    float dvd = a*1.0/b;
    printf("%d / %d = %0.2f\n", a, b, dvd);

    int c=12, d=4;
    int mod = c/d%2;
    printf("%d", mod);

    return 0;
}