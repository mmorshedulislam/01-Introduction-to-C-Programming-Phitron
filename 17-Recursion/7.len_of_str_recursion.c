#include <stdio.h>

int fun(char ar[], int i)
{
    if (ar[i] == '\0')
        return 0;
    
    int l = fun(ar, i + 1);
    return l + 1;
}

int main()
{
    char ar[6] = "hello";
    int len = fun(ar, 0);
    printf("%d\n", len);
    return 0;
}

// output
// 5