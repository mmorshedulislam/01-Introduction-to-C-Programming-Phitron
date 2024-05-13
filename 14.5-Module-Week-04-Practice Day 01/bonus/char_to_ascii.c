// Online C compiler to run C program online
#include <stdio.h>

int char_to_ascii(char x)
{
    if (x >= 'a' && x <= 'z')
    {
        return x;
    }
    else if (x >= 'A' && x <= 'Z')
    {
        return x;
    }
    else if (x >= '0' && x <= '9')
    {
        return x;
    }
}

int main()
{
    // Write C code here
    char b;
    scanf("%c", &b);
    printf("%d", char_to_ascii(b));

    return 0;
}

// input -> output
// 0 -> 48
// a -> 97
// A -> 65
