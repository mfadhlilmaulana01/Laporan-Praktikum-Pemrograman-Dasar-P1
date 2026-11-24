#include <stdio.h>
 
struct Peserta
{
    char nama[50];
    int umur;
    int skor;
};
 
int main()
{
    struct Peserta data[10];
    int n, i, juara;
 
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", data[i].nama,
              &data[i].umur, &data[i].skor);
    }
 
    juara = 0;
    for (i = 1; i < n; i++)
    {
        if (data[i].skor > data[juara].skor)
        {
            juara = i;
        }
    }
 
    printf("Peserta dengan skor tertinggi adalah ");
    printf("%s ", data[juara].nama);
    printf("dengan skor %d\n", data[juara].skor);
 
    return 0;
}