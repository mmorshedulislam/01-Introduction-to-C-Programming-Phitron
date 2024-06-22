#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);

    // ASCII characters
    // A = 65; Z = 90;
    // a = 97; z = 122;

    if (n >= 'a' && n <= 'z')
    {
        int ans = n - 32;
        printf("%c", ans);
    }
    else
    {
        int ans = n + 32;
        printf("%c", ans);
    }

    return 0;
}