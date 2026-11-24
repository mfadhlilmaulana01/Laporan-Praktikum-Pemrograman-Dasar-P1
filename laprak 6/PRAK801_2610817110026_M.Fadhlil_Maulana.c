#include <stdio.h>
 
int main()
{
    int number;
    int *p;
 
    scanf("%d", &number);
 
    p = &number;
 
    printf("Nilai variabel = %d\n", number);
    printf("Alamat variabel = %p\n", (void*)p);
    printf("Nilai melalui pointer = %d\n", *p);
 
    *p = *p * 2;
 
    printf("Nilai setelah diubah lewat pointer = ");
    printf("%d\n", number);
 
    return 0;
}