#include <stdio.h>

int main()
{
    char s[1000+1];
    scanf("%s", &s);

    int i = 0, j = strlen(s) - 1;
    int flag = 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}