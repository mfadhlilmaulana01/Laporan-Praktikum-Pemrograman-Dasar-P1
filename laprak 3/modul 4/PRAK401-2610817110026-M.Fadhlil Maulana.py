multiple = int(input("Masukkan kelipatan: "))
symbol = input("Masukkan simbol: ")
 
for i in range(1, 51):
    if i % multiple == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")
 
print()