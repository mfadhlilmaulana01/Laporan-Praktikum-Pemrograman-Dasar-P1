#include <stdio.h>
 
int sum_digits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sum_digits(n / 10);
}
 
int main() {
    int n, result;
 
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);
    result = sum_digits(n);
    printf("Jumlah digit dari %d adalah %d\n", n, result);
 
    return 0;
}