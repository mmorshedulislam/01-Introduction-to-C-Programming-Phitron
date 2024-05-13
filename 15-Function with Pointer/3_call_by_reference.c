#include <stdio.h>

void fun(int *p)
{
    printf("fun: value of p - %p\n", p);
    *p = 200;
    printf("fun: value of x - %d\n", *p);
}

int main()
{
    int x = 10;
    printf("main: address of x - %p\n", &x);
    fun(&x); // pass address of x
    printf("main: value of x - %d\n", x);
    return 0;
}