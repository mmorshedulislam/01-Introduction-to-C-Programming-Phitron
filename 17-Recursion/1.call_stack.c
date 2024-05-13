#include <stdio.h>

void world()
{
    printf("World Starting\n");
    printf("World Ending\n");
};

void hello()
{
    printf("Hello Starting\n");
    world();
    printf("Hello Ending\n");
}

int main()
{
    printf("Main Starting\n");
    hello();
    printf("Main Ending\n");
    return 0;
}

// output

// Main Starting
// Hello Starting
// World Starting
// World Ending
// Hello Ending
// Main Ending