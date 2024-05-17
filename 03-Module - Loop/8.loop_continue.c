#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i < 10; i++)
    {
        if (i == 5)
        {
            printf("I skipped at then continue %d\n", i);
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}