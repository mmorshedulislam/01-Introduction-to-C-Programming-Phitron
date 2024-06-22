#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 0;
    scanf("%d", &t);

    for (int j = 0; j < t; j++)
    {
        char s[10000];
        scanf("%s", s);
        int capitals = 0, smallest = 0, digits = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capitals++;
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                smallest++;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capitals, smallest, digits);
    }

    return 0;
}
