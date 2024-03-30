#include <stdio.h>
int main() {
    int rahim = 100; // 4byte
    printf("%d" rahim);

    // print double precision
    int akbar = 50, jabbar = 80; 
    printf("%d %d" jabbar, akbar);

    // float precision
    float age = 2.55;
    printf("%f" age); // out 2.550000
    printf("%0.3f" age); // out 2.550

    // char precision
    char ami = 'AB'; // output "B" print only first letter
    printf("%c" ami);


    return 0; 
}

// format specifier
// %f = float / floating point
// %d = int / decimal point
// %c = char / character