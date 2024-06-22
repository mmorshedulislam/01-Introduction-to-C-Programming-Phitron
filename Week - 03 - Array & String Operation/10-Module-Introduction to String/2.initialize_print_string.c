// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    // char str[8] = {'M', 'o', 'r', 's', 'h', 'e', 'd'}; no guarantee
    // char str[8] = "Morshed"; // size = 7 + 1 ("\0")
    char str[] = "Morshed"; // size = 8 ("Morshed\0")
    int sz = sizeof(str) / sizeof(char);

    printf("%d\n", sz);
    printf("%s", str); // eibabe print korte gelei just array size + 1 kore dite hobe jate null ("\0") value add kora jai.

    // loop kore print korte gele lagbe na

    return 0;
}