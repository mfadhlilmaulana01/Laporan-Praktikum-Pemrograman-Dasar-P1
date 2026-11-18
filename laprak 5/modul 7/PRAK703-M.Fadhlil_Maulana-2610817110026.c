#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char kalimat[200];
    printf("Kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);
 
    int vokal = 0, konsonan = 0;
    for (int i = 0; kalimat[i] != '\0'; i++) {
        char c = tolower(kalimat[i]);
        if (c == ' ' || c == '\n' || c == '\r') continue;
 
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vokal++;
        } else if (c >= 'a' && c <= 'z') {
            konsonan++;
        }
    }
 
    printf("Jumlah Vokal: %d\n", vokal);
    printf("Jumlah Konsonan: %d\n", konsonan);
    return 0;
}