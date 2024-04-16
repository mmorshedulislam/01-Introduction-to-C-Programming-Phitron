// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if (a+b*c == d) {
        printf("YES");
    } else if (a-b*c == d) {
        printf("YES");
    } else if (a*b+c == d) {
        printf("YES");
    } else if (a*b-c == d) {
        printf("YES");
    } else if (a+b-c == d) {
        printf("YES");
    } else if (a-b+c == d) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}