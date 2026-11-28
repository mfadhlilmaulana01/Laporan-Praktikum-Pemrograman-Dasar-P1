n = int(input())
stok = {}
 
for i in range(n):
    data = input().split()
    stok[data[0]] = int(data[1])
 
m = int(input())
 
for i in range(m):
    data = input().split()
    barang = data[0]
    jumlah = int(data[1])
 
    if barang not in stok:
        print("Barang", barang, "tidak ada")
    elif stok[barang] < jumlah:
        print("Stok", barang, "tidak cukup")
    else:
        stok[barang] = stok[barang] - jumlah
        sisa = stok[barang]
        print(f"Terjual {barang} {jumlah}, sisa {sisa}")
 
print("Stok akhir :", stok)