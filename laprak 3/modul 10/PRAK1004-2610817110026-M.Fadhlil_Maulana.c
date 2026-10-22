#include <stdio.h>
 
long long hanoi_steps(int n) {
    if (n == 0) {
        return 0;
    }
    return 2 * hanoi_steps(n - 1) + 1;
}
 
int main() {
    int n;
    long long steps;
 
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &n);
    steps = hanoi_steps(n);
    printf("Jumlah langkah minimum untuk %d cakram ", n);
    printf("adalah %lld\n", steps);
 
    return 0;
}