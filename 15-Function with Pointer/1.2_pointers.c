#include <stdio.h>

int main () {

    double x = 5.26;
    double *ptr = &x;
    double *ptr2 = ptr;

    // de reference
    *ptr = 10.20;

    // de reference
    *ptr2 = 200.20;
    
    printf("value of x - %0.2lf\n", x);
    printf("value of x - %0.2lf\n", *ptr);
    printf("size of ptr - %d\n", sizeof(ptr));
    printf("value of x - %0.2lf\n", ptr2); // float value er khetre direct access kora jacce
    return 0;
}