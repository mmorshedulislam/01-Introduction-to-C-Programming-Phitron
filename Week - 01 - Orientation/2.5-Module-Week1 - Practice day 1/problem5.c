#include <stdio.h>
int main()
{
    int tk = 200000;

    if (tk >= 5000)
    {
        printf("Levis Bag\t");
        if (tk >= 20000)
        {
            printf("Gucci Bag");
        }
    }
    else
    {
        printf("Something");
    }
}