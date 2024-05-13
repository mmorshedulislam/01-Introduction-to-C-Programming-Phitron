#include <stdio.h>

void fun(int x)
{
    printf("fun: address of x - %p\n", &x);
    x = 200;
    printf("fun: value of x - %d\n", x);
}

int main()
{
    int x = 10;
    printf("main: address of x - %p\n", &x);
    fun(x); // pass only value
    printf("main: value of x - %d\n", x);
    return 0;
}