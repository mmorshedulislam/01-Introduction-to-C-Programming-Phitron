// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int N;
   int a;
   int even = 0, odd = 0, positive = 0, negative = 0;
   scanf("%d\n", &N); 
   
   for (int i = 1; i<=N; i++) {
       scanf("%d", &a); 
       if (a%2==0) {
           even++;
       }
       if (a%2==1 || a%2==-1) {
           odd++;
       }
       if (a>0) {
           positive++;
       }
       if (a<0) {
           negative++;
       }
   }
    
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);

    return 0;
}