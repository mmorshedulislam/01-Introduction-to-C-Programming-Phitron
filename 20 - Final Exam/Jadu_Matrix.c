// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int flag = 1;
    
    if (n != m) {
        flag = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ( i == j) {
                if (arr[i][j] != 1) {
                    flag = 0;
                }
                continue;
            }
            
            if (i+j == n-1) {
                if (arr[i][j] != 1) {
                    flag = 0;
                }
                continue;
            }
            
            if (arr[i][j] != 0) {
                flag = 0;
            }
        }
    }
    
    if (flag == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

// input
// 5 5
// 1 0 0 0 1
// 0 1 0 1 0
// 0 0 1 0 0
// 0 1 0 1 0
// 1 0 0 0 1


// output
// YES