// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int tiger = 0, pathan = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T' || s[i] == 't')
            {
                tiger++;
            }
            else if (s[i] == 'P' || s[i] == 'p')
            {
                pathan++;
            }
        }

        if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else if (pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else if (tiger == pathan)
        {
            printf("Draw\n");
        }
    }

    return 0;
}

// input
// 3
// 5
// TPTPP
// 3
// TTP
// 4
// TPPT

// output
// Pathaan
// Tiger
// Draw