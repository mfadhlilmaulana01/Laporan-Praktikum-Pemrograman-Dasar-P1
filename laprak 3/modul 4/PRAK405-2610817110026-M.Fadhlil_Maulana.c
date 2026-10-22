#include <stdio.h>
 
int main() {
    int n, multiple, i, j, row_sum, total;
 
    printf("Masukkan banyak baris: ");
    scanf("%d", &n);
    printf("Masukkan kelipatan: ");
    scanf("%d", &multiple);
 
    total = 0;
    for (i = 1; i <= n; i++) {
        row_sum = 0;
        for (j = i; j >= 1; j--) {
            printf("(%d * %d)", j, multiple);
            row_sum += j * multiple;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", row_sum);
        total += row_sum;
    }
 
    printf("%d\n", total);
 
    return 0;
}