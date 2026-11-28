daftar = input().split(", ")
tambah = input()
beli = input()
 
daftar.append(tambah)
 
if beli in daftar:
    daftar.remove(beli)
else:
    print(beli, "tidak ada di daftar")
 
print("Daftar belanja :", daftar)
print("Jumlah barang :", len(daftar))