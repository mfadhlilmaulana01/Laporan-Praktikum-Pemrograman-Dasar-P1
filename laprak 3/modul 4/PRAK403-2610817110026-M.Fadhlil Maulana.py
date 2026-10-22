first = int(input("Masukkan angka pertama: "))
second = int(input("Masukkan angka kedua: "))
 
if first < second:
    step = 1
else:
    step = -1
 
total = abs(first - second) + 1
 
for i in range(total):
    print(first + i * step, second - i * step, end="")
    if i < total - 1:
        print(" - ", end="")
print()