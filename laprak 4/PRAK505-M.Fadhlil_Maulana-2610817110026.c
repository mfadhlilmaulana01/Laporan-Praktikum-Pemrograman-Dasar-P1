#include <stdio.h>
 
void Biodata(int tahun, char nama[], char asal[]) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahun;
 
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n",
           tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}
 
int main() {
    int tahunLahir;
    char A[20], B[15];
    scanf(" %d", &tahunLahir);
    scanf(" %[^\n]%*c", A);
    scanf(" %[^\n]%*c", B);
    Biodata(tahunLahir, A, B);
    return 0;
}