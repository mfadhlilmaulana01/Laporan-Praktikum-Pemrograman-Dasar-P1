n = int(input())
stok = {}
 
for i in range(n):
    data = input().split()
    stok[data[0]] = int(data[1])
 
for barang in stok:
    print(barang, ":", stok[barang])
 
cari = input()
 
if cari in stok:
    print("Stok", cari, "saat ini :", stok[cari])
else:
    print("Barang", cari, "tidak ada di gudang")