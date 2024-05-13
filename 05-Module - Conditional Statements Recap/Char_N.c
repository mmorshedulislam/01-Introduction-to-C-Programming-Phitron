#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    scanf("%c", &c);

    if (isupper(c))
    {
        char lowerCase = tolower(c);
        printf("%c is converted into %c", c, lowerCase);
    }
    else
    {
        char upperCase = toupper(c);
        printf("%c is converted into %c", c, upperCase);
    }

    return 0;
}