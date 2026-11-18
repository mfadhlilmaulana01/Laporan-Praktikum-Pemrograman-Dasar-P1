#include <stdio.h>
 
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
 
    int zetsu[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }
 
    for (int i = 0; i < n; i++) {
        printf("%d", zetsu[i] * (i + 1));
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}