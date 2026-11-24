#include <stdio.h>
 
void tukar(int *a, int *b)
{
    int sementara;
 
    sementara = *a;
    *a = *b;
    *b = sementara;
}
 
int main()
{
    int andi, budi;
 
    scanf("%d %d", &andi, &budi);
 
    printf("Sebelum ditukar: ");
    printf("Andi = %d, Budi = %d\n", andi, budi);
 
    tukar(&andi, &budi);
 
    printf("Sesudah ditukar: ");
    printf("Andi = %d, Budi = %d\n", andi, budi);
 
    return 0;
}