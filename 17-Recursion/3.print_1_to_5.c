#include <stdio.h>

void fun (int i) {
    // base case 
    if (i==6) return;
    printf("%d\n", i);
    fun(i+1);
}

int main () {
    fun(1);
    return 0;
}

// out put 
// 1
// 2
// 3
// 4
// 5