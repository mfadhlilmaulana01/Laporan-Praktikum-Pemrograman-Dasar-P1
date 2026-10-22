#include <stdio.h>
 
int main() {
    int choice;
    float a, b, result;
    char *operation;
 
    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);
 
        if (choice == 5) {
            printf("Terimakasih, telah menggunakan ");
            printf("kalkulator M. Fadhlil Maulana\n");
            break;
        } else if (choice >= 1 && choice <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &b);
 
            if (choice == 1) {
                operation = "penjumlahan";
                result = a + b;
            } else if (choice == 2) {
                operation = "pengurangan";
                result = a - b;
            } else if (choice == 3) {
                operation = "perkalian";
                result = a * b;
            } else if (b != 0) {
                operation = "pembagian";
                result = a / b;
            }
 
            if (choice == 4 && b == 0) {
                printf("Pembagian dengan nol tidak bisa ");
                printf("dilakukan\n");
            } else {
                printf("Hasil %s antara %.2f ", operation, a);
                printf("dengan %.2f ", b);
                printf("adalah %.2f\n", result);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
        printf("\n");
    }
 
    return 0;
}