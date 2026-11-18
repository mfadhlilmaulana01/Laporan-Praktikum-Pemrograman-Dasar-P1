#include <stdio.h>
 
int main() {
    int baris, kolom;
    if (scanf("%d %d", &baris, &kolom) != 2) return 0;
 
    int matriks[baris][kolom];
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }
 
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d", matriks[i][j]);
            if (j < kolom - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}