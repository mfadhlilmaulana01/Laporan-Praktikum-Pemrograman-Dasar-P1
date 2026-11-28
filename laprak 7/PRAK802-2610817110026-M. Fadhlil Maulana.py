data = input().split()
nilai = []
 
for x in data:
    nilai.append(int(x))
 
nilai.sort()
rata = sum(nilai) / len(nilai)
 
print("Nilai urut :", nilai)
print("Tertinggi :", max(nilai))
print("Terendah :", min(nilai))
print(f"Rata-rata : {rata:.2f}")