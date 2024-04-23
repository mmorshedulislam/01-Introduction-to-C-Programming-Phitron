#include <stdio.h>
#include <string.h>

int main () {
    char s[1000000+1];
    scanf("%s", s);
    int lenS = strlen(s);
    int sum = 0;
    
    for (int i=0; i<lenS; i++) {
        sum = sum + (s[i]-'0');
    }
    
    printf("%d\n", sum);
    
    return 0;
};