#include <stdio.h>
int main() {

    // arithmetic operations (+, -, *, /, %)

    int a=20, b=10;

    int sum = a + b;
    printf("%d", sum);

    int mns = a - b;
    printf("%d", mns);

    int mlt = a * b;
    printf("%d", mlt);

    int c = 3, d = 20;
    int dvd = d / c;
    printf("%d", dvd); // output 6;

    float dvd2 = d*1.0 / c;
    // dosomik er porer value paite hole minimum 1ta float number hoite hoi;
    printf("%f", dvd2); // output 6.66;

    int mod = d%c;
    printf("%d", mod); // 2

    return 0;
}
