// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main()
{
    // Write C code here
    char a[100];
    // gets(a); // not recommended (enter not acceptable)
    fgets(a, 20, stdin); // recommended and standard (enter acceptable)
    printf("%s", a);

    return 0;
}