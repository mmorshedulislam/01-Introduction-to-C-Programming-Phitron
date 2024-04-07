#include <stdio.h>

int main () {
    char a;
    scanf("%c", &a); 
    
    // ASCII characters
    // A = 65; Z = 90; 
    // a = 97; z = 122;

    if (a>='a' && a<='z') {
        int ans = a-32;
        printf("%c", ans); 
    } else {
        int ans = a+32;
        printf("%c", ans); 
    }

    return 0; 
}