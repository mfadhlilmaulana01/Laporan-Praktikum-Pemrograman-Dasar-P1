#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    int A[n][n], B[n][n], C[n][n];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
 
    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", C[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}