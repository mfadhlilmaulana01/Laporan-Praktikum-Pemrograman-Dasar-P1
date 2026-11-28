n = int(input())
daftar_kota = []
 
for i in range(n):
    data = input().split()
    nama = data[0]
    lintang = float(data[1])
    bujur = float(data[2])
    kota = (nama, lintang, bujur)
    daftar_kota.append(kota)
 
for kota in daftar_kota:
    nama = kota[0]
    lintang = kota[1]
    bujur = kota[2]
    print(f"{nama} : lintang {lintang}, bujur {bujur}")
 
print("Tujuan pertama :", daftar_kota[0])