#include <stdio.h>
 
int main() {
    int n1, n2;
    if (scanf("%d %d", &n1, &n2) != 2) return 0;
 
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }
 
    int baris1[n1], baris2[n2];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &baris1[i]);
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &baris2[i]);
    }
 
    for (int i = 0; i < n1; i++) {
        printf("%d", baris1[i] * baris2[i]);
        if (i < n1 - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}