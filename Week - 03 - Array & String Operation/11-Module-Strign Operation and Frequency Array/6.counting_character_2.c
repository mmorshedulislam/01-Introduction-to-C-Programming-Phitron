#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int cnt[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }

    // output 01
    // for (int i = 0; i < 26; i++){
    //     printf ("%c = %d\n", i+'a', cnt[i]);
    // }

    // output 02
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 'a';
        if (cnt[val] != 0)
        {
            printf("%c = %d\n", val + 'a', cnt[val]);
        }
        cnt[val] = 0;
    }

    return 0;
}

// input
// morshedul

// output 01
// a = 0
// b = 0
// c = 0
// d = 1
// e = 1
// f = 0
// g = 0
// h = 1
// i = 0
// j = 0
// k = 0
// l = 1
// m = 1
// n = 0
// o = 1
// p = 0
// q = 0
// r = 1
// s = 1
// t = 0
// u = 1
// v = 0
// w = 0
// x = 0
// y = 0
// z = 0

// output 02
// m = 1
// o = 1
// r = 1
// s = 1
// h = 1
// e = 1
// d = 1
// u = 1
// l = 1