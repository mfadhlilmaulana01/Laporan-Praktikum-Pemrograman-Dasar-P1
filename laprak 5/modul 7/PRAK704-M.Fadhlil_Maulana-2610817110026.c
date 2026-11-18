#include <stdio.h>
#include <string.h>
 
int main() {
    char deskripsi[200];
    fgets(deskripsi, sizeof(deskripsi), stdin);
    deskripsi[strcspn(deskripsi, "\r\n")] = 0;
 
    if (strlen(deskripsi) > 20) {
        for (int i = 0; i < 20; i++) {
            printf("%c", deskripsi[i]);
        }
        printf("...\n");
    } else {
        printf("%s\n", deskripsi);
    }
    return 0;
}