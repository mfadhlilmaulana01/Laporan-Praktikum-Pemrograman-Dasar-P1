#include <stdio.h>
#include <string.h>
 
int main() {
    char depan[50], belakang[50];
    printf("Nama Depan: ");
    scanf("%s", depan);
    printf("Nama Belakang: ");
    scanf("%s", belakang);
 
    printf("Nama Lengkap : %s %s\n", depan, belakang);
 
    int panjang = 0;
    for (int i = 0; depan[i] != '\0'; i++) {
        if (depan[i] != ' ') panjang++;
    }
    for (int i = 0; belakang[i] != '\0'; i++) {
        if (belakang[i] != ' ') panjang++;
    }
 
    printf("Panjang Nama (tanpa spasi): %d\n", panjang);
    return 0;
}