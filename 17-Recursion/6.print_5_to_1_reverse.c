#include <stdio.h>

void fun (int i) {
    // base case 
    if (i==6) return;
    fun(i+1);
    printf("%d\n", i);
}

int main () {
    fun(1);
    return 0;
}

// out put 
// 5
// 4
// 3
// 2
// 1