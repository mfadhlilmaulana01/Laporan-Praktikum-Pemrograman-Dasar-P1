#include <stdio.h>
 
int main() {
    int limit, i;
 
    printf("Masukkan batas maksimal: ");
    scanf("%d", &limit);
 
    for (i = 1; i <= limit; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
 
    for (i = limit; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
 
    return 0;
}