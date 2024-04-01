#include <stdio.h>
int main () 
{
    int a = 5;
    int b = 2;
    // scanf("%d", &a);
    // scanf("%d", &b);
    int sum = a + b;
    printf("%d\n", sum);

    int mns = a-b;
    printf("%d\n", mns);

    int mlt = a*b;
    printf("%d\n", mlt);

    float dvd = a*1.0/b;
    printf("%0.2f\n", dvd);

    return 0;
}