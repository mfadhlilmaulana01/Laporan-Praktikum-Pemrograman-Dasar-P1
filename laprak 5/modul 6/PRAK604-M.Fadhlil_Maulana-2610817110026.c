#include <stdio.h>
#include <string.h>
 
int main() {
    char kode[100], pesan[100];
    if (fgets(kode, sizeof(kode), stdin) == NULL) return 0;
    if (fgets(pesan, sizeof(pesan), stdin) == NULL) return 0;
 
    kode[strcspn(kode, "\r\n")] = 0;
    pesan[strcspn(pesan, "\r\n")] = 0;
 
    int len_kode = strlen(kode);
    int len_pesan = strlen(pesan);
 
    if (len_kode != len_pesan) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }
 
    int bintang = 0, pagar = 0;
    char hasil[100];
 
    for (int i = 0; i < len_kode; i++) {
        if (kode[i] == ' ' && pesan[i] == ' ') {
            hasil[i] = ' ';
        } else if (kode[i] == pesan[i]) {
            hasil[i] = '*';
            bintang++;
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[len_kode] = '\0';
 
    printf("%s\n", hasil);
    printf("*=%d\n", bintang);
    printf("#=%d\n", pagar);
 
    if (bintang >= pagar) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }
    return 0;
}