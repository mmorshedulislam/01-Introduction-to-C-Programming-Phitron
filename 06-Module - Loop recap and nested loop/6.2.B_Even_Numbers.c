// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   int N; 
   scanf("%d", &N);
    
   for (int i=1; i<=N; i++) {
       if (N==1) {
           printf("%d\n", -1); 
       }
        else if (i%2==0) { 
            printf("%d\n", i); 
        }
   }

    return 0;
}