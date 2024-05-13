#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000 + 1];
    scanf("%s", &s);
    int slen = strlen(s);

    char t[1000 + 1];
    scanf("%s", &t);
    int tlen = strlen(t);

    printf("%d %d\n", slen, tlen);

    printf("%s %s\n", s, t);
    return 0;
};