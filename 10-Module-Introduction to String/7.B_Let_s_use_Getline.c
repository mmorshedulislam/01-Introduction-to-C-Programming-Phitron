#include <stdio.h>
#include <string.h>

int main () {
    char s[1000000+1];
    scanf("%s", &s);
    char n[1000000+1];
    
    int i = 0; 
    while (s[i]!='\\') {
        n[i] = s[i];
        i++;
    }

    printf("%s\n", n);
    return 0;
};