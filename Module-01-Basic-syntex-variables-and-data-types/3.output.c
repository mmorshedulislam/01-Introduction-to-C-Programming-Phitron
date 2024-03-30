#include <stdio.h>
int main()
{
    int rahim, karim;  

    // address of (&)
    scanf("%d", &rahim); // input 10
    scanf("%d %d", &rahim, &karim); // input 10 20
    
    printf("%d %d", rahim, karim); // output 10 20

    // input int, float and char
    int d; 
    float f;
    char c; 
    scanf("%d %f %c", &d, &f, &c);

    printf("%d %f %c", d, f,c);

    // input with (%) (method 1)
    int a, b; 
    char p;
    scanf("%d%c %d%c", &a,&p, &b,&p)
    printf("%d%% %d%%", a, b)

    // input with default values (method 2)
    int m, n; 
    scanf("%da %dn", &m, &n)
    printf("%da %db", m, n)

    return 0
}

// format specifier
// %f = float / floating point
// %d = int / decimal point
// %c = char / character