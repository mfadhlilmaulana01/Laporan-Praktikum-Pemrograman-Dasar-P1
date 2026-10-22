#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int first, second, step, total, i;
 
    printf("Masukkan angka pertama: ");
    scanf("%d", &first);
    printf("Masukkan angka kedua: ");
    scanf("%d", &second);
 
    if (first < second) {
        step = 1;
    } else {
        step = -1;
    }
 
    total = abs(first - second) + 1;
 
    for (i = 0; i < total; i++) {
        printf("%d %d", first + i * step, second - i * step);
        if (i < total - 1) {
            printf(" - ");
        }
    }
    printf("\n");
 
    return 0;
}