// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    char c[6]; // windows extra memory allocation korte pare mane size er baireo input accept kore. but linux or online c compiler eita accept korbe na tai string size + 1 diye rakte hoi.
    scanf("%s", &c);
    printf("%s\n", c);

    return 0;
}