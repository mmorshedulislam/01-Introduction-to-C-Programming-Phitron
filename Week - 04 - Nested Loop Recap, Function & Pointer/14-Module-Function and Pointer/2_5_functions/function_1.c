// Return + Parameter

#include <stdio.h>

// use from top
int sum (int x, int y) {
    int sum = x + y;
    return sum;
}

// use from bottom declarations
// int sum (int x, int y);

int main() {
    int s = sum(10, 20);
    printf("%d\n", s);
    printf("%d\n", sum(100, 200));
    return 0;
}

// use from bottom to top
// int sum (int x, int y) {
//     int sum = x + y;
//     return sum;
// }

// output
// 30
// 300