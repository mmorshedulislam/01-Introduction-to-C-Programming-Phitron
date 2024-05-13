// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    char a[20 + 1], b[20 + 1];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (a[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (b[i] == '\0')
        {
            printf("%s", b);
            break;
        }
        i++;

        // if (a[i] == b[i]) {
        //     i++;
        // } else if (a[i] < b[i]) {
        //     printf("A is smaller than B \n");
        //     break;
        // } else {
        //     printf("B is smaller than A \n");
        //     break;
        // }
    }

    return 0;
}