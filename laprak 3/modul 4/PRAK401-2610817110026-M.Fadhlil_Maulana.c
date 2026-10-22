#include <stdio.h>
 
int main() {
    int multiple, i;
    char symbol;
 
    printf("Masukkan kelipatan: ");
    scanf("%d", &multiple);
    printf("Masukkan simbol: ");
    scanf(" %c", &symbol);
 
    for (i = 1; i <= 50; i++) {
        if (i % multiple == 0) {
            printf("%c ", symbol);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
 
    return 0;
}