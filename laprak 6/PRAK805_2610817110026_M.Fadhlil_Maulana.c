#include <stdio.h>
 
struct Dompet
{
    char nama[20];
    int saldo;
};
 
void topUp(struct Dompet *d, int nominal)
{
    d->saldo = d->saldo + nominal;
    printf("Top up %d berhasil, ", nominal);
    printf("saldo = %d\n", d->saldo);
}
 
void bayar(struct Dompet *d, int nominal)
{
    if (d->saldo >= nominal)
    {
        d->saldo = d->saldo - nominal;
        printf("Bayar %d berhasil, ", nominal);
        printf("saldo = %d\n", d->saldo);
    }
    else
    {
        printf("Bayar %d gagal, ", nominal);
        printf("saldo tidak cukup\n");
    }
}
 
int main()
{
    struct Dompet dompet;
    int n, i, nominal;
    char jenis;
 
    scanf("%s %d", dompet.nama, &dompet.saldo);
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
    {
        scanf(" %c %d", &jenis, &nominal);
        if (jenis == 'T')
        {
            topUp(&dompet, nominal);
        }
        else if (jenis == 'B')
        {
            bayar(&dompet, nominal);
        }
    }
 
    printf("Saldo akhir %s = ", dompet.nama);
    printf("%d\n", dompet.saldo);
 
    return 0;
}