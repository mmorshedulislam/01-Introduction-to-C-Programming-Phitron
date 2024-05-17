// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        
        long long int mult = (long long int)a * b * c;
        
        long long int missing = m/mult;
        
        if (mult*missing == m) {
            printf("%lld\n", missing);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}