// No Return + No Parameter

#include <stdio.h>

void sum () {
    int x, y;
    scanf ("%d %d", &x, &y);
    int s = x + y;
    printf("%d\n", s);
}

int main () {
    sum();
    sum();
    sum();
    return 0;
}

// input
// 5 10
// 100 3
// 85 5

// output
// 15
// 103
// 90