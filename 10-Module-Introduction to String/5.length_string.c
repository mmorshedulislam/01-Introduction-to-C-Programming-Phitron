// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <string.h>

int main()
{
    // Write C code here
    char a[100];
    scanf("%s", a);
    int count = 0;
    int i = 0;
    // built in fn
    int stl = strlen(a);

    // for loop for length
    // for (int i=0; a[i]!='\0'; i++) {
    //     count++;
    // }

    // while loop for length
    while (a[i] != '\0')
    {
        count++;
        i++;
    }

    printf("%d\n", count);
    printf("%d\n", stl);

    return 0;
}