// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here
    char s[10000];
    scanf("%s", s);
    int cnt[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 'a';
        cnt[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}